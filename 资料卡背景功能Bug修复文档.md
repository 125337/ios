# MioPlugin 资料卡背景功能 — 技术文档

> **更新日期**: 2026-06-03 (v23 — 复查通过 + 新增折叠置顶丢失)
> **架构**: ListCornerRadiusHook（薄分发层） + ProfileCardBgHook（独立资料卡模块）

---

## 1. 文件结构

```
MioPlugin/Modules/
├── ListCornerRadius/
│   ├── ListCornerRadiusHook.h          ← 头文件
│   └── ListCornerRadiusHook.m          ← 薄分发层 (~645行) + 列表圆角逻辑
│
└── ProfileCardBg/                         ← 独立模块
    ├── ProfileCardBgHook.h                ← 接口声明
    └── ProfileCardBgHook.m                ← 全部资料卡逻辑 (~669行)
```

---

## 2. Bug 清单

### ✅ Bug A：position 语义错位 — 已修复

**位置**：[ListCornerRadiusHook.m L388-398](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L388-L398)

`position` 已拆分为 `cornerType`（管 maskedCorners）和 `borderType`（管边框 switch），语义不再冲突。

| 场景 | cornerType | borderType | 圆角 | 边框 |
|:----:|:----------:|:----------:|:---:|:----:|
| 单独 cell | 3 (全角) | **0 (完整边框)** ✅ | 四角圆角 | 四边边框 |
| 首行 | 1 (顶角) | 1 (顶部) | 顶部圆角 | 顶部边框 |
| 末行 | 2 (底角) | **3 (底部)** ✅ | 底部圆角 | 底部边框 |
| 中间行 | 0 (无角) | 2 (左右) | 无圆角 | 左右边框 |

---

### ✅ Bug B：缺少 case 0 完整边框 — 已修复

**位置**：[ListCornerRadiusHook.m L494-508](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L494-L508)

switch 新增 case 0，绘制 top + bottom 边框。

---

### ✅ Bug C：skipMasksToFit 未守卫 cardBgEnabled — 已修复

**位置**：[ProfileCardBgHook.m L604](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L604)

```objc
// 已改为:
BOOL skipMasksToBounds = (config.cardBgEnabled && config.cardBgFillMode == 3);
```

---

### ✅ Bug D：Cell 层 masksToBounds 覆盖资料卡透明化 — 已修复

**位置**：[ListCornerRadiusHook.m L314+L318](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L314-L318)

顺序已调整：先 `masksToBounds=YES`（L314），后调用 `handleCellLayout:`（L318）可覆盖为 NO。

---

### 🔴 Bug G：折叠置顶聊天逻辑丢失 — 待修复

**位置**：[ListCornerRadiusHook.m wp_applyStandardCorner](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L379-L413)

**现象**：聊天列表中折叠置顶区域展开时，section 1 的末行 Cell 不应该有底部圆角和底边框，但当前代码仍然给了。

**根因**：重构时重写了 `wp_applyStandardCorner`，遗漏了旧代码中的折叠检测分支。`wp_findFoldViewInSubviews:` 方法本身还在 [L552](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L552)，但**没有任何地方调用它了**。

**旧代码（commit ef1e407）中被遗漏的逻辑**：

```objc
// 在 wp_applyStandardCorner 的"末行"处理中：
BOOL isNewMainFrame = [className isEqualToString:@"NewMainFrameViewController"];
NSInteger indexSection = indexPath.section;

// ... 单独 cell / 首行 / 中间行 ...

// ★ 以下整段在重构时被删除了 ★
if (isNewMainFrame && indexSection == 1) {
    UIView *foldView = [self wp_findFoldViewInSubviews:tableView.subviews];
    if (foldView) {
        if ([foldView respondsToSelector:@selector(isFolding)]) {
            BOOL folding = ((BOOL (*)(id, SEL))objc_msgSend)(foldView, @selector(isFolding));
            if (!folding) {
                // 折叠已展开 → 末行连接着展开内容，不应有底圆角/底边框
                cell.layer.cornerRadius = 0;
                cell.layer.maskedCorners = 0;
                [self wp_applyBorderAndBg:cell radius:0 position:2 isFTSHome:isFTSHome];
                return;     // 提前返回
            }
        }
    }
}
// 正常底部圆角（折叠状态或无折叠视图）
cell.layer.cornerRadius = configuredRadius;
cell.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
[self wp_applyBorderAndBg:cell radius:configuredRadius position:3 isFTSHome:isFTSHome];
```

**当前代码 vs 旧行为对比**：

| 条件 | 旧行为 | 当前行为 |
|:----:|:------:|:-------:|
| NewMainFrame + section 1 + 有折叠视图 + **已展开(!folding)** | 无圆角 + 只有左右边框(position=2) | ❌ 错误给了底部圆角 + 底边框 |
| NewMainFrame + section 1 + 有折叠视图 + **折叠中(folding)** | 正常底部圆角 | ✅ 正确 |
| 其他页面（非 section 1 或非 NewMainFrame）| 不受影响 | ✅ 不受影响 |

**修复方案**：

在当前的 `wp_applyStandardCorner` 中，`cornerType == 2`（即末行，borderType == 3）的赋值之前或之后，插入折叠检测逻辑：

```objc
// 在 L394-395（cornerType=2, borderType=3 的 else if 块内）之后，
// 在 L400（cell.layer.cornerRadius 赋值）之前插入:

// ★ 折叠置顶检测（仅聊天列表 section 1 的末行）★
BOOL isNewMainFrame = [className isEqualToString:@"NewMainFrameViewController"];
if (isNewMainFrame && indexPath.section == 1) {
    UIView *foldView = [ListCornerRadiusHook wp_findFoldViewInSubviews:tableView.subviews];
    if (foldView && [foldView respondsToSelector:@selector(isFolding)]) {
        BOOL folding = ((BOOL (*)(id, SEL))objc_msgSend)(foldView, @selector(isFolding));
        if (!folding) {
            // 展开状态 → 无圆角 + 左右边框
            cell.layer.cornerRadius = 0;
            cell.layer.maskedCors = 0;
            [self wp_applyBorderAndBg:cell radius:0 position:2 isFTSHome:isFTSHome];
            return;
        }
    }
}

// 折叠状态或无折叠 → 继续走正常的底部圆角逻辑
```

注意：需要把 `className` 和 `indexPath` 传入——当前方法签名已有这两个参数，无需修改签名。

---

### 🟢 Bug E：cardBg 关闭时设置自定义背景色 — 按设计

[ProfileCardBgHook.m L38-45](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L38-L45)，nil 时不动。

### ✅ Bug F：未调用原始 layoutSubviews — 确认不存在

薄分发层先 orig 再分发。[L162-168](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L162-L168)。

---

## 3. 待修复汇总

| 优先级 | Bug | 改动量 | 影响范围 |
|:------:|:---:|:-----:|:-------:|
| **P0** | **G** 折叠置顶逻辑丢失 | ~12 行 | 聊天列表展开折叠区域时末行样式错误 |

A/B/C/D 四个 bug 已全部修复，只剩 G 一个待修。

---

## 4. 视图层级（"我"页面资料卡 Cell）

```
MMUITableViewCell (Cell Hook)
├── layer.cornerRadius = 18          ← 列表圆角 (ListCornerRadius)
├── layer.masksToBounds = YES (普通) / NO (资料卡+卡片背景)
├── backgroundColor = 自定义色 (普通) / clearColor (资料卡+卡片背景)
│
└── contentView
    └── MMUIButton (ProfileCardBgHook)
        ├── layer.cornerRadius = 18      ← 资料卡圆角 (始终)
        ├── layer.masksToBounds = YES     ← 裁剪圆角
        ├── backgroundColor = clearColor (卡片开) / 自定义色 (卡片关)
        ├── [0] UIImageView tag=999902   ← bgImageView (cardBg 开启时)
        ├── [1] UIView (DynamicProvider) ← hidden by FIX-WHITE
        └── MMHeadImageView             ← 头像 (识别标志)
```

---

## 5. 配置项说明

| 配置项 | 类型 | 默认值 | 所属功能 |
|:------:|:-----:|:------:|:--------:|
| `listCornerRadiusEnabled` | BOOL | NO | 列表圆角 |
| `listCellCornerRadius` | CGFloat | 18 | 列表圆角 |
| `listCellMargin` | CGFloat | 0 | 列表圆角 |
| `listCellBorder` | BOOL | NO | 列表圆角（是否绘边框）|
| `listCellBorderWidth` | CGFloat | 1.0 | 列表圆角 |
| `cardBgEnabled` | BOOL | NO | 资料卡背景 |
| `cardBgHidden` | BOOL | NO | 资料卡背景 (HideCard) |
| `cardBgFillMode` | NSInteger | 0 | 资料卡背景 (0=拉伸 1=适配 2=填充 3=顶部) |
| `cardBgLight/DarkImagePath` | NSString* | nil | 资料卡背景 |
| `listCardLight/DarkBgColor` | NSString* | nil | 资料卡 (卡片关闭时的背景色) |

---

## 6. 历史踩坑记录（已解决）

| # | 问题 | 根因 | 解决方式 |
|:-:|:-----|:-----|:---------|
| A | 图片文件不存在 | 用户未保存背景图 | picker 保存后文件存在 |
| B | 白色 UIView 遮挡 bgImageView | UIDynamicProviderColor 白色板 | FIX-WHITE 遍历隐藏 |
| C | 点"我"卡死 watchdog | setFrame: height 触发循环 | 移除 height 修改 |
| D | 第二次 orig 覆盖 | if 块内外各调一次 orig | 标志位模式 |
| E | v13 过渡期圆角边距全丢 | early return 跳过通用代码 | 删除 early return |
| F | 圆角不裁剪 | Cell 层 masksToBounds=NO | 改 MMUIButton 层做圆角 |
| G | bgImageView 全宽无边距 | margin 在 orig 之后（时序问题）| margin 移到 orig 之前 |
| H | 普通 Cell 白底丢失 | needsCardBgTransparency 条件过宽 | 增加 isProfileCardCell 判断 |
| I | 只开卡片背景全部 Cell 加圆角 | 入口"或"关系无二次守卫 | 重构为独立模块 |
| J | 关闭卡片背景资料卡无圆角 | early return 返回过早 | 删除 return，APPLY_CORNER 始终执行 |
| K | position 语义错位 + 缺 case 0 | 一变量两用语义冲突 | 拆为 cornerType + borderType |
| L | skipMasksToFit 无守卫 | 只看 fillMode 没看 cardBgEnabled | 加 && config.cardBgEnabled |
| M | masksToBounds 覆盖 | handleCellLayout 在 masksToBounds=YES 之前调用 | 交换执行顺序 |
