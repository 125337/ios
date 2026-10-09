# WCR 2.1.8 圆角与上色机制对比分析

> 分析对象：`WCR反编译2.1.8` / `WCR_2.1.8_export`（反编译源码）
> 对照实现：`MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m`
> 结论日期：2026-10-10

---

## 一、核心答案：为什么 WCR 的背景上色更好

WCR 的 cell 背景色**只构建一次，是 iOS 动态色（Dynamic Color）**，之后明暗切换由 UIKit 自动完成，插件本身根本不参与明暗切换。

颜色构建函数（FUN_007d44a8，FUN__part13.c:7819）的逻辑：

```objc
light = config.globalCornerBackgroundColorLight ?: 白色
dark  = config.globalCornerBackgroundColorDark  ?: #202020 (0.125, 0.125, 0.125)
最终色 = [UIColor colorWithDynamicProvider:^UIColor *(UITraitCollection *tc){
    return tc.userInterfaceStyle == UIUserInterfaceStyleDark ? dark : light;
}];
```

然后存进一个静态缓存（DAT_029909a8，FUN_007ced88 惰性单例）。这个 UIColor 对象被所有 cell 共享，设一次就完事：

- **明暗切换**：UIKit 在 trait 变化时自动调 provider 重新取色，零代码、零重绘、零缓存失效，即时生效
- **用户改色**：仅此时通过 Darwin 通知（`com.qimiao.wcrefine.settings_changed`，FUN__part13.c:3078）走到缓存清理（FUN_007dc360，FUN__part13.c:10705），把 3 个静态色对象置空，下一轮 layout 惰性重建

**我们旧实现的问题**：每轮 layoutSubviews 都要 `findParentViewController` → `isDarkModeForViewController` → hex 解析 → 生成静态色 → 靠全量化缓存 key（isDark/开关/色值/宽高…）判断要不要重建。整套"isDark 传入 + 缓存 key + 边框残留修复"的复杂度，都是在为不用动态色买单。之前修的"暗黑→浅色边框残留深灰线"问题，在动态色方案下从根上不存在（背景部分）。

---

## 二、幂等写入：所有 setter 都"先读后写"

WCR 两个垫片函数，风格极其克制：

| 函数 | 位置 | 行为 |
|---|---|---|
| FUN_007cef84（设色） | FUN__part13.c:5761 | 先读当前 `backgroundColor`，用 `isEqual:` 比对（FUN_007d487c，含双 nil 判等），**不同才写** → 不产生多余的 CA 隐式事务 |
| FUN_007d0718（设圆角） | FUN__part13.c:6322 | `cornerRadius` / `maskedCorners` / `masksToBounds` 三个属性逐个先读现值比对，变了才 set |

每帧 layout 调用时实际写入次数几乎为零，这是他列表丝滑的原因之一。

## 三、Cell 上色的具体分工

入口：FUN_007cd4fc（FUN__part13.c:5081），hook `NewMainFrameCell layoutSubviews`：

```
orig()
开关检查（homepageCornerEnabled && mainFrameCornerEnabled，tpMode 跳过）
radius = config.globalCornerRadius（默认 20，封顶 40）
① cell.layer → 幂等设圆角
② 遍历 cell 全部 subviews 的 layer → 逐个幂等设圆角   ← 保证子视图也被裁剪
③ FUN_007dae48 查 cell 的 associated 标记：
   - 无标记 → cell.backgroundColor = 动态色（幂等），contentView = clearColor
   - 有标记 → FUN_007d09d4 整体透明化（清除色+边），即"特殊 cell 不上色"逃生门
④ CACurrentMediaTime 打点 → _WCRHomeJankLogCellLayout（自带上色性能监控）
```

关键设计：颜色打在 **cell 本体**、**contentView 挖透明**——圆角外露出的就是表格底色，层次天然正确，不需要我们那套 skip-list（19 个 VC 黑名单）。

## 四、margin 内缩

入口：FUN_007cd0f8（FUN__part13.c:4981），hook `NewMainFrameCell setFrame:`：

- 先校验 superview 是 `MainFrameTableView` 才动手（我们靠找 VC 判断，他直接查父视图类型，更准）
- `globalCornerMargin` 默认 8、封顶 100
- 目标宽 = 表宽 − margin×2，只在必要时改 frame，否则透传 orig

## 五、其他值得注意的机制

### 5.1 边框画法：section 覆盖视图 + 整段圆角描边（与我们最大的架构差异）

> ✅ **已按此方案彻底重构我们的边框**（详见第七节），以下为 WCR 原始机制分析。

WCR 的列表边框在表格级 hook（FUN_007c79c8，FUN__part13.c:4290-4660）里画，**不是逐行拼段，而是每个 section 一条整段描边**：

```
对每个 section：
  rect = rectForRow(0,section) ∪ rectForRow(rows-1,section)   ← 首末行 rect 并集
  覆盖视图 = tableView viewWithTag(基数+section)，没有就创建：
     透明 UIView、userInteractionEnabled=NO、bringSubviewToFront
  空section → 覆盖视图 setHidden:YES
```

- **画笔**：一条 CAShapeLayer（fillColor=clear、strokeColor=边框色、lineWidth 封顶 5），path = `bezierPathWithRoundedRect:cornerRadius:` 一条整段圆角矩形——首行顶圆角、末行底圆角天然完成，不需要按首/中/末行拼 top/bottom/left/right 四段；中间行的分隔感来自微信原生分隔线
- **挂载点**：覆盖视图挂在 tableView 本体（tag 管理），不挂 cell——**完全免疫 cell 复用**，滚动无重建，layout 时只更新 frame
- **颜色**：config `globalCornerStrokeColorLight/Dark` → 与背景同款 `colorWithDynamicProvider:` 动态色 + 静态缓存（DAT_029909b8），设置变更随 FUN_007dc360 三缓存统一失效——**边框颜色同样明暗自动跟随，不存在 CGColor 快照残留问题**
- **幂等**：层上 associated 缓存 lineWidth + 配置戳，frame/宽/配置任一变化才重设 path/frame

对比我们（改造前）：逐 cell 四段拼接 + cell.layer 子层（受复用影响，靠全量化 key 防重建）+ CGColor 快照（需 key 含 isDark）。WCR 这套在架构上简单一个量级，已整体替换我们的旧方案。

### 5.2 其他机制

- **圆角封顶**：radius 默认 20、封顶 40（FUN_007ceddc）；margin 默认 8、封顶 100（FUN_007ceeb0）
- **透明化函数 FUN_007d09d4**：视图 + contentView 全部 clearColor，layer 边框色也清成透明——"整体拆妆"的语义
- **Darwin 通知动态响应**：设置变更 → 主线程 dispatch → 清静态色缓存 → 下一轮 layout 用新颜色惰性重建。缓存只有 3 个静态对象，失效成本 ≈ 0
- **性能观测**：每个 cell layout hook 首尾 `CACurrentMediaTime()` 打点，汇总进 `_WCRHomeJankLogCellLayout`
- **主题色借用**：WCR 自己的浮动面板用 `[MMThemeManager cellBackgroundColor]`（FUN_01e912f4，FUN__part35.c:1798）——能借微信原生主题管线时直接借，fallback `secondarySystemGroupedBackground`

### 5.3 Frida 运行时实证（2026-10-10，真机抓取）

对 `com.tencent.xin`（微信 8.0.60）挂 Frida 探针（`scripts/frida_wcr_corner.js` / `frida_wcr_contacts.js`）抓取 WCR 运行时行为：

- **首页（NewMainFrameCell）**：首行 `r=15 mc=3(顶角)`、中行 `r=0 mc=0`、末行 `r=15 mc=12(底角)`——按行掩码与我们同构；cell 本体 `bg=clearColor` 透明只做按行裁剪壳，色块打在 **contentView（恒定全角 r=15 mc=15）**——"会变的按行 mc"与"不变的全角色块"分层
- **通讯录（ContactsViewController，关键差异）**：新的朋友→企业微信联系人 7 行连续 `顶角→无角×5→底角`，**跨越原生 4 个 section 连成一张卡**；WCR cell hook 全程无 `indexPathForCell`（反编译 grep 实证）→ **WCR 的行位判定是几何相邻（frame 紧贴即同卡），与 section 无关**
- **表格画布**：tableView 上 4 个透明免交互 UIView（tag 连续、x=15.5 内缩、宽 362）= section 级覆盖视图实证；表格 hook（FUN_007c79c8）对 section 逐个画、无跨 section 合并——通讯录连卡是 cell 侧几何行位 + 原生行连续的自然结果，不是边框层主动合并

## 六、总结对比表

| 维度 | WCR 2.1.8 | 我们（改造后） |
|---|---|---|
| 背景色 | `colorWithDynamicProvider:` 一次构建，UIKit 自动跟随明暗 | ✅ 同款（WPColorUtil 动态色入口） |
| 行位判定 | 几何相邻（frame 紧贴，跨 section 自动连卡） | ✅ 同款（WPRowNeighbors，间隙 ≤ 0.5pt） |
| 边框 | 表格级覆盖视图 + 整段描边，动态色；几何连续行区段合并一组 | ✅ 同款（四段拼接机器已删，分组共享一张覆盖视图） |
| 写入频率 | 先读后写，几乎零写入 | ✅ 指针/isEqual/stamp/CGColor 多重幂等 |
| 特殊 cell 逃生门 | associated 标记→透明化 | 涂装标记清洁态（功能关只拆自己动过的）；VC 黑名单已全部删除 |
| 子视图圆角 | 遍历 subviews 全部处理 | 仅 Mio 页面已做（待办 1） |
| 性能观测 | CACurrentMediaTime 逐帧打点 | 无（待办 3） |

---

## 七、已执行改造（摘要）

1. **背景色动态色化**：WPColorUtil 新增 `dynamicColorFromLightHex:darkHex:lightFallback:darkFallback:`（两侧各自解析+兜底后包装 `colorWithDynamicProvider:`），列表 cell / MFWebMMBtn / MFBannerBtn / FoldView 背景全部迁移，明暗切换由 UIKit 自动跟随，hook 内不再判暗
2. **边框 WCR 架构重构**：删除逐 cell 四段边框机器（position switch / 路径拼接 / 全量化 key），改为表格级覆盖视图（tag 管理、挂 tableView 本体）+ CAShapeLayer 整段圆角描边；边框色同样动态色化；frame / 样式戳 / CGColor 三重幂等，未新增全局 hook
3. **VC 黑名单清理**：删除 CornerResponsibility 模块（44 VC + 4 前缀黑名单）与 cell hook 内 19 VC 背景黑名单，全部页面统一处理
4. **特例清理**：删除通讯录 section 0-3 半合并块（corner 分支 B + 边框合并组）与聊天列表折叠展开态（openBottom + 无角特判），每个 section 独立成卡片
5. **几何行位重构（a309e8d，Frida 实证驱动）**：cell 行位不再查 indexPath/section，改为 `WPRowNeighbors` 几何相邻判定（上下紧贴行间隙 ≤ 0.5pt → 中行，悬空 → 首/末行，双向悬空 → 全角）；边框画布同步改为几何分组——相邻 section 行带垂直连续（间隙 ≤ 0.5pt）合并为一组，共享一张覆盖视图 + 一条整段圆角路径，收尾隐藏逻辑改为 tag 不在当前组集合即隐藏。通讯录公众号/服务号/企微联系人跨 section 行自动连成一张卡，与 WCR 图二一致

---

## 八、待办（暂不动，留档）

1. **子视图圆角遍历推广到微信页面**：WCR 对 cell 全部 subviews 的 layer 幂等设圆角；我们目前只在 Mio 页面做（注意 1px 分隔线豁免规则要保留）
2. **透明化分工（cell 本体上色 + contentView clearColor）**：WCR 的层次方案，可评估替代我们直接给 cell 上色的做法
3. **性能打点**：`CACurrentMediaTime()` 首尾打点 + 汇总日志，定位列表卡顿用，成本低收益高
4. **ProfileCardBgHook 等其他背景类迁移动态色**：资料卡背景仍是静态取色，后续可按同一入口迁移
