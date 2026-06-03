# MioPlugin 资料卡背景功能 — 技术文档

> **更新日期**: 2026-06-03 (v30 — 修正 alignment 为垂直对齐)
> **架构**: ListCornerRadiusHook（薄分发层） + ProfileCardBgHook（独立资料卡模块）

---

## 1. 当前 Bug

### 🔴 Bug J：对齐方式不管改成什么都是居中 — 待修复

**现象**：切换对齐方式（居中/底部/顶部），背景图位置没有任何变化

**位置**：[ProfileCardBgHook.m L526-L530](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L526-L530)（分支A）和 [L558-L562](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L558-L562)（分支B）

#### 对齐方式的真实含义

UI 中的选项是**垂直对齐**（[SettingCardBackgroundController.m L84](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingCardBackgroundController.m#L84)）：

```objc
NSArray *alignNames = @[@"居中对齐", @"底部对齐", @"顶部对齐"];
```

| 值 | 名称 | 含义 |
|:---:|:---:|------|
| 0 | 居中对齐 | 图片垂直居中，上下均等裁剪 |
| 1 | 底部对齐 | 图片底部对齐，顶部裁剪 |
| 2 | 顶部对齐 | 图片顶部对齐，底部裁剪 |

**为什么需要垂直对齐**：资料卡高度约 130pt，而背景图通常是 16:9 或 9:16 的。在 `ScaleAspectFill` 模式下，图片等比放大填满 130pt 高的容器，垂直方向必然溢出。alignment 控制的是**溢出部分从哪边裁掉**。

#### 根因：alignment 代码修改的是 X 轴，应该是 Y 轴

当前代码修改的是 `frame.origin.x`（水平位置），但 alignment 是**垂直对齐**，应该控制 Y 轴方向的裁剪位置。

而且 `imgW == buttonWidth`，修改 `frame.origin.x` 本身就无效（数学恒等式）。

#### 修复方案：通过 `layer.contentsRect` 控制垂直裁剪位置

`ScaleAspectFill` 模式下，图片等比放大后垂直方向溢出。`layer.contentsRect` 用归一化坐标控制显示图片的哪个区域：

```objc
NSInteger alignment = isDark ? config.cardBgDarkAlignment : config.cardBgLightAlignment;

if (alignment == 1) {
    // 底部对齐：显示图片底部区域
    btnBgImg.layer.contentsRect = CGRectMake(0, 0.5, 1, 0.5);
} else if (alignment == 2) {
    // 顶部对齐：显示图片顶部区域
    btnBgImg.layer.contentsRect = CGRectMake(0, 0, 1, 0.5);
} else {
    // 居中对齐（默认）：正常显示
    btnBgImg.layer.contentsRect = CGRectMake(0, 0, 1, 1);
}
```

**`contentsRect` 垂直对齐图示**：

```
原始图片 (假设 9:16 竖图)
┌──────────────┐
│   顶部区域    │ ← alignment=2 顶部对齐：只显示这部分
│              │
├──────────────┤
│   中间区域    │ ← alignment=0 居中对齐：默认，居中裁剪
│              │
├──────────────┤
│   底部区域    │ ← alignment=1 底部对齐：只显示这部分
└──────────────┘
```

**`contentsRect` 参数说明**：
- `CGRectMake(x, y, width, height)` — 归一化坐标，0.0~1.0
- `(0, 0, 1, 1)` = 默认，显示完整图片
- `(0, 0, 1, 0.5)` = 只显示上半部分（顶部对齐）
- `(0, 0.5, 1, 0.5)` = 只显示下半部分（底部对齐）

**适用模式**：
- `ScaleAspectFill`（fillMode=0, 3）：图片溢出，alignment 有效 ✅
- `ScaleAspectFit`（fillMode=1）：图片不溢出，alignment 无实际效果
- `ScaleToFill`（fillMode=2）：图片完全填满，alignment 无意义

**分支A 和分支B 都需要添加此逻辑**，且在 `contentMode` 设置之后执行。

---

### 🔴 Bug K：间距和高度调整不生效 — 待修复

**现象**：修改 `cardBgListSpacing` 和 `cardBgHeight` 后无变化

**日志证据**（[plugin(48).log](file:///www/wwwroot/ios/plugin(48).log)）：
- L83: `[OK] WCTableViewCellManager::cellHeightFor: (spacing)` — Hook 注册成功
- L86: `frame=(0,0,393,130)` — Cell 高度仍是 130pt

#### 根因：`cellHeightFor:` 的 `arg1` 不是 Cell，`isProfileCard:` 永远返回 NO

`WCTableViewCellManager.cellHeightFor:` 的参数：
- `self` = `WCTableViewCellManager` 实例
- `arg1` = 不是 `UITableViewCell`，而是 `UITableView` 或其他上下文

当前代码对 `arg1` 调 `isProfileCard:` 搜索 `MMHeadImageView`，对 `UITableView` 做这个搜索永远返回 NO，spacing 永远加不上。

`WCTableViewCellManager` 有 `cell` 属性（[WCTableViewCellManager.h L79](file:///www/wwwroot/ios/插件/微信头文件/WeChatHeaders/8.0.55/WCTableViewCellManager.h#L79)）：

```objc
@property(nonatomic) __weak UITableViewCell *cell;  // ★ 关联的 Cell
```

#### 修复方案：通过 `self.cell` 获取真正的 Cell

```objc
static double _hooked_cellHeightFor(id self, SEL _cmd, id arg1, long long arg2) {
    double result = _orig_cellHeightFor(self, _cmd, arg1, arg2);

    PluginConfig *config = [PluginConfig shared];
    if (!config.cardBgEnabled) return result;

    // ★ 通过 self.cell 获取真正的 UITableViewCell
    UITableViewCell *cell = nil;
    @try {
        cell = [self valueForKey:@"cell"];
    } @catch (NSException *e) {
        return result;
    }
    if (!cell) return result;

    // 判断是否 MoreVC
    UIViewController *vc = nil;
    UIResponder *responder = [cell nextResponder];
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            vc = (UIViewController *)responder;
            break;
        }
        responder = [responder nextResponder];
    }
    if (!vc || ![NSStringFromClass([vc class]) isEqualToString:@"MoreViewController"]) {
        return result;
    }

    // ★ 用真正的 Cell 判断是否资料卡
    if (![ProfileCardBgHook isProfileCard:(UIView *)cell]) {
        return result;
    }

    // cardBgHeight：强制最小高度
    CGFloat customHeight = config.cardBgHeight;
    if (customHeight > 0 && result < customHeight) {
        result = customHeight;
    }

    // cardBgListSpacing：追加间距
    CGFloat spacing = config.cardBgListSpacing;
    if (spacing > 0) {
        result += spacing;
    }

    return result;
}
```

**同时移除** `handleCellLayout:` 中的 cardBgHeight 代码（[L713-L722](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L713-L722)），避免 UITableView 覆盖 frame 导致冲突。

---

## 2. 已修复 Bug（简要）

| Bug | 说明 |
|-----|------|
| ✅ A-D | position 语义拆分 / case 0 边框 / skipMasksToFit 守卫 / masksToBounds 顺序 |
| ✅ H | 背景图 frame 高度 1704pt → 改用 button.bounds |
| ✅ I | fillMode contentMode 映射反了 → 修正映射 + fillMode=3 跳过圆角 |

---

## 3. 待修复汇总

| 优先级 | Bug | 改动量 | 方案 |
|:------:|:---:|:-----:|------|
| **P0** | **K** 间距/高度不生效 | ~15 行 | `_hooked_cellHeightFor` 中用 `self.cell` 替代 `arg1` |
| **P1** | **J** 对齐方式不生效 | ~10 行 | AspectFill 模式用 `layer.contentsRect` Y 轴控制垂直裁剪 |
| **P2** | **G** 折叠置顶逻辑丢失 | ~12 行 | wp_applyStandardCorner 中插入折叠检测 |

---

## 4. 视图层级

```
MMTableViewCell (Cell Hook)
├── _cellInfo → WCTableViewCellManager.fCellHeight  ← ★ 行高由这里控制
│                    └── .cell → MMTableViewCell     ← ★ 通过 self.cell 获取 Cell
├── layer.cornerRadius = 18
├── layer.masksToBounds = YES (普通) / NO (资料卡+卡片背景)
├── backgroundColor = clearColor (资料卡+卡片背景)
│
└── contentView
    └── MMUIButton (ProfileCardBgHook)
        ├── layer.cornerRadius = 18      ← fillMode≠3
        ├── layer.masksToBounds = YES    ← fillMode≠3
        ├── backgroundColor = clearColor
        ├── [0] UIImageView tag=999902   ← bgImageView
        │       ├── contentMode = AspectFill (fillMode=0,3)
        │       └── layer.contentsRect   ← ★ alignment 通过 Y 轴控制垂直裁剪
        ├── [1] UIView (DynamicProvider) ← hidden by FIX-WHITE
        └── MMHeadImageView             ← 头像
```

---

## 5. 配置项说明

| 配置项 | 类型 | 默认值 | 状态 | 说明 |
|:------:|:-----:|:------:|:---:|------|
| `cardBgEnabled` | BOOL | NO | ✅ | 总开关 |
| `cardBgHidden` | BOOL | NO | ✅ | 隐藏卡片内容 |
| `cardBgFillMode` | NSInteger | 0 | ✅ | 0=AspectFill 1=AspectFit 2=ScaleToFill 3=AspectFill+无圆角 |
| `cardBgLight/DarkImagePath` | NSString* | nil | ✅ | 背景图路径 |
| `cardBgLight/DarkAlignment` | NSInteger | 0 | ❌ | **0=居中 1=底部 2=顶部**（垂直对齐，需用 contentsRect） |
| `cardBgLight/DarkLayer` | NSInteger | 0 | ✅ | 图层位置 |
| `cardBgLight/DarkOffsetX` | CGFloat | 0 | ✅ | X 偏移 |
| `cardBgLight/DarkOffsetY` | CGFloat | 0 | ✅ | Y 偏移 |
| `cardBgHeight` | CGFloat | 144 | ❌ | **未生效**（需移入 cellHeightFor Hook） |
| `cardBgListSpacing` | CGFloat | 9 | ❌ | **未生效**（arg1 不是 Cell） |

---

## 6. 历史踩坑记录

| # | 问题 | 根因 | 解决方式 |
|:-:|:-----|:-----|:---------|
| A | 图片文件不存在 | 用户未保存背景图 | picker 保存后文件存在 |
| B | 白色 UIView 遮挡 bgImageView | UIDynamicProviderColor 白色板 | FIX-WHITE 遍历隐藏 |
| C | 点"我"卡死 watchdog | setFrame: height 触发循环 | 移除 height 修改（需移入 cellHeightFor Hook） |
| D | 第二次 orig 覆盖 | if 块内外各调一次 orig | 标志位模式 |
| E | v13 过渡期圆角边距全丢 | early return 跳过通用代码 | 删除 early return |
| F | 圆角不裁剪 | Cell 层 masksToBounds=NO | 改 MMUIButton 层做圆角 |
| G | bgImageView 全宽无边距 | margin 在 orig 之后 | margin 移到 orig 之前 |
| H | 普通 Cell 白底丢失 | needsCardBgTransparency 条件过宽 | 增加 isProfileCardCell 判断 |
| I | 只开卡片背景全部 Cell 加圆角 | 入口"或"关系无二次守卫 | 重构为独立模块 |
| J | 关闭卡片背景资料卡无圆角 | early return 返回过早 | 删除 return |
| K | position 语义错位 + 缺 case 0 | 一变量两用语义冲突 | 拆为 cornerType + borderType |
| L | skipMasksToFit 无守卫 | 只看 fillMode 没看 cardBgEnabled | 加 && config.cardBgEnabled |
| M | masksToBounds 覆盖 | handleCellLayout 在 masksToBounds=YES 之前 | 交换执行顺序 |
| N | 背景图 frame 高度 1704pt | superview.superview 不是 Cell | 改用 button.bounds |
| O | fillMode 效果与微信优化不同 | contentMode 映射反了 + fillMode=3 缺跳过圆角 | 修正映射 + fillMode=3 跳过圆角 |
| **P** | **对齐方式始终居中** | **alignment 是垂直对齐，代码错误地修改了 X 轴** | **AspectFill 用 contentsRect Y 轴控制垂直裁剪** |
| **Q** | **间距/高度不生效** | **cellHeightFor 的 arg1 不是 Cell，isProfileCard 返回 NO** | **用 self.cell 获取真正 Cell** |
