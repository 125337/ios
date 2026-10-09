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

- **圆角封顶**：radius 默认 20、封顶 40（FUN_007ceddc）；margin 默认 8、封顶 100（FUN_007ceeb0）
- **透明化函数 FUN_007d09d4**：视图 + contentView 全部 clearColor，layer 边框色也清成透明——"整体拆妆"的语义
- **Darwin 通知动态响应**：设置变更 → 主线程 dispatch → 清静态色缓存 → 下一轮 layout 用新颜色惰性重建。缓存只有 3 个静态对象，失效成本 ≈ 0
- **性能观测**：每个 cell layout hook 首尾 `CACurrentMediaTime()` 打点，汇总进 `_WCRHomeJankLogCellLayout`
- **主题色借用**：WCR 自己的浮动面板用 `[MMThemeManager cellBackgroundColor]`（FUN_01e912f4，FUN__part35.c:1798）——能借微信原生主题管线时直接借，fallback `secondarySystemGroupedBackground`

## 六、总结对比表

| 维度 | WCR 2.1.8 | 我们（改造前） | 现状 |
|---|---|---|---|
| 背景色 | `colorWithDynamicProvider:` 构建一次，静态缓存，UIKit 自动跟随明暗 | 每轮 layout 查 VC→判暗→hex 解析→设静态色 | ✅ 已改动态色（WPColorUtil 新入口 + ListCornerRadiusHook 全面迁移） |
| 明暗切换 | 零成本（系统自动） | 靠缓存 key 带 isDark 触发重建 | 背景 ✅ / 边框仍走 key（保持） |
| 写入频率 | 先读后写，几乎零写入 | 每轮计算 + 幂等判断 | 背景 ✅（指针/isEqual 双重幂等） |
| 缓存失效 | 仅设置变更时清 3 个静态对象 | key 失配逐 cell 重建 | 背景 ✅（按 config 值惰性缓存） |
| 子视图圆角 | 遍历 subviews 全部处理 | 只处理 cell 本体（Mio 页面已做） | ⏳ 见待办 ② |
| 特殊 cell 逃生门 | associated 标记→整体透明化 | 19 个 VC 名单黑名单 | ⏳ 见待办 ④ |
| 性能观测 | CACurrentMediaTime 逐帧打点 | 无 | ⏳ 见待办 ⑤ |

---

## 七、已执行：背景色动态色化（本次改动）

### 改动 1：WPColorUtil 新增动态色入口

`WPColorUtil.h/.m` 新增：

```objc
+ (nullable UIColor *)dynamicColorFromLightHex:(nullable NSString *)lightHex
                                        darkHex:(nullable NSString *)darkHex
                                  lightFallback:(nullable UIColor *)lightFallback
                                   darkFallback:(nullable UIColor *)darkFallback;
```

语义：两侧各自"hex 解析，失败/未设置 → 对应侧兜底"，包装为 `colorWithDynamicProvider:`；两侧均为空 → 返回 nil（调用方保留原生背景）；iOS 13 以下回退浅色侧。**与原 Strict 策略 + 二元兜底的组合语义逐字一致**，只是把"按 isDark 选侧"交给 UIKit 的 trait 系统。

### 改动 2：ListCornerRadiusHook 全面迁移

- 删除 `wp_cellDefaultBgColor(isDark)`（被动态色两侧兜底取代）
- 新增 `WPDynamicCellBgColor(lightHex, darkHex, tag)`：按 config 值惰性构建并静态缓存动态色（WCR 同款），兜底固定浅色白 / 深色 #202020
- **Cell 背景**：featureOn（含 Mio 页面功能开）→ 用户色动态色；Mio 页面功能关 → 默认底动态色（保持"Mio 基线不吃用户色"原语义）；清洁态 → nil 回原生底。幂等判断升级为"指针相同 || isEqual"双保险
- **MFWebMMBtn / MFBannerBtn / MainFrameSectionFoldView**：同换动态色，赋值加指针幂等
- hook 内背景路径的 `isDark` 判定全部移除；**边框逻辑未动**（仍走 isDark 缓存 key，见待办 ①）

### 效果

- 明暗切换：背景由 UIKit 自动跟随，不再依赖"下一轮 layout 重算"
- 换色：config 值变化 → 缓存 key 失配 → 下一轮 layout 重建（成本≈0）
- 每轮 layout 的背景路径：查表返回共享色对象 + 指针判等，几乎零分配零写入

---

## 八、待办（暂不动，留档）

1. **边框色动态色化**：边框目前是 CAShapeLayer CGColor 快照 + 全量化缓存 key（含 isDark/宽高/开关/色值）。CGColor 无法表达动态色，如要动态化需改为"动态 UIColor 每轮 `resolvedColor(with: traitCollection)` 取 CGColor"或改用普通 UIView 边框层；收益是删掉 key 里的 `d%d` 与明暗切换重建。当前方案已能正确跟随，优先级低
2. **子视图圆角遍历推广到微信页面**：WCR 对 cell 全部 subviews 的 layer 幂等设圆角；我们目前只在 Mio 页面做。微信页面内部直角背景穿帮场景可用同款方案（注意 1px 分隔线豁免规则要保留）
3. **透明化分工（cell 本体上色 + contentView clearColor）**：WCR 的层次方案，可评估替代我们直接给 cell 上色的做法
4. **逃生门重构**：WCR 用 associated 标记 + 整体透明化（FUN_007d09d4）替代 VC 名单黑名单；我们的 19 个 VC skip-list 永远追不上微信新增页面，可评估换成"标记制"
5. **性能打点**：`CACurrentMediaTime()` 首尾打点 + 汇总日志，定位列表卡顿用，成本低收益高
6. **ProfileCardBgHook 等其他背景类迁移动态色**：本次只动了列表模块（ListCornerRadiusHook），资料卡背景仍是静态取色，后续可按同一入口迁移
