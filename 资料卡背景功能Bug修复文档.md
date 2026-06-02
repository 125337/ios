# MioPlugin 资料卡背景功能 — 技术文档

> **更新日期**: 2026-06-03 (v28 — 基于微信头文件确认高度 Hook 方案)
> **架构**: ListCornerRadiusHook（薄分发层） + ProfileCardBgHook（独立资料卡模块）

---

## 1. 当前 Bug

### 🔴 Bug J：对齐方式不生效 — 待修复

**现象**：切换对齐方式（靠左/居中/靠右），背景图位置没有变化

**根因**：`cardBgLightAlignment` / `cardBgDarkAlignment` 在 PluginConfig 中定义了，但**代码中没有任何地方使用它们**。frame 计算只用了 offsetX/offsetY。

**微信优化的做法**：alignment 在微信优化中也**没有直接修改 frame**，只做了默认值保护（未设置时默认写入 1=居中）。背景图水平位置由 contentMode（ScaleAspectFill 默认居中裁剪）+ offsetX 决定。

**修复方案**：根据 alignment 值修改 `frame.origin.x`：

```objc
NSInteger alignment = isDark ? config.cardBgDarkAlignment : config.cardBgLightAlignment;
CGFloat imgX = offsetX;
if (alignment == 2) {
    imgX = button.bounds.size.width - imgW + offsetX;  // 靠右
}
// alignment==0 靠左 或 ==1 居中：imgX = offsetX（默认）
btnBgImg.frame = CGRectMake(imgX, offsetY, imgW, imgH);
```

---

### 🔴 Bug K：列表向下间距和信息卡片高度改了没效果 — 待修复

**现象**：修改 `cardBgListSpacing` 和 `cardBgHeight` 后无变化

**根因**：`handleCellLayout:` 只做了 Cell 透明化，**没有实现 height 和 spacing 逻辑**。

#### 微信头文件分析结果

MoreViewController 的高度计算链：

```
MoreViewController
  └── WCTableViewManager (m_tableViewMgr)
        ├── tableView:heightForRowAtIndexPath:  ← 高度计算入口
        └── WCTableViewCellManager (每个 Cell 对应一个)
              ├── fCellHeight (属性)             ← ★ 行高存储
              └── cellHeightFor: (方法)          ← ★ 行高计算
```

**关键发现**：
- MoreViewController **自身没有**实现 `tableView:heightForRowAtIndexPath:`
- 高度由 `WCTableViewManager` 管理，内部调用 `WCTableViewCellManager.fCellHeight`
- `MMTableViewCell`（不是 MMUITableViewCell）没有 `sizeThatFits`，高度完全由 `WCTableViewCellManager` 控制

#### 微信优化的做法

微信优化通过**链式 Hook** `WCTableViewCellManager.cellHeightFor:` 的中间层实现 spacing：

```c
// FUN_00008874 — Hook 了 cellHeightFor: 的链式中间层
double result = orig(self, sel, view, param_4);
if (param_4 == 1 && isMoreVC && cardBgEnabled) {
    result += ProfileCardSpacing;  // 在返回高度上加间距
}
return result;
```

#### 最佳方案：Hook `WCTableViewCellManager` 的 `cellHeightFor:`

```objc
// 在 ProfileCardBgHook.m 的 +load 或 constructor 中注册
static double (*_orig_cellHeightFor)(id, SEL, id, long long);
static double _hooked_cellHeightFor(id self, SEL _cmd, id arg1, long long arg2) {
    double result = _orig_cellHeightFor(self, _cmd, arg1, arg2);

    PluginConfig *config = [PluginConfig shared];
    if (!config.cardBgEnabled) return result;

    // 判断是否 MoreVC 的资料卡行
    UIViewController *vc = nil;
    UIResponder *responder = [arg1 nextResponder];
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            vc = (UIViewController *)responder;
            break;
        }
        responder = responder.nextResponder;
    }
    if (!vc || ![NSStringFromClass([vc class]) isEqualToString:@"MoreViewController"]) {
        return result;
    }

    // arg2 == 1 表示资料卡行（微信优化用 param_4==1 判断）
    // 更安全的方式：通过 WCTableViewCellManager 的属性判断是否资料卡
    CGFloat spacing = config.cardBgListSpacing;
    if (spacing > 0) {
        result += spacing;
    }

    return result;
}
```

**注册 Hook**：

```objc
// 在 ListCornerRadiusHook 的 constructor 或 ProfileCardBgHook 的 +load 中
Class cellMgrClass = objc_getClass("WCTableViewCellManager");
if (cellMgrClass) {
    MSHookMessageEx(cellMgrClass,
                    @selector(cellHeightFor:),
                    (IMP)_hooked_cellHeightFor,
                    (IMP *)&_orig_cellHeightFor);
}
```

#### cardBgHeight 的实现

在 `handleCellLayout:` 中添加，带循环保护：

```objc
CGFloat customHeight = config.cardBgHeight;
if (customHeight > 0) {
    CGFloat currentH = ((UIView *)cell).frame.size.height;
    if (currentH < customHeight) {  // ★ 只在当前 < 目标时设置，防循环
        CGRect f = ((UIView *)cell).frame;
        f.size.height = customHeight;
        ((UIView *)cell).frame = f;
    }
}
```

**注意**：cardBgHeight 和 cardBgListSpacing 可以叠加使用。cardBgHeight 先生效（强制最小高度），spacing 再在高度计算函数中追加额外间距。

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
| **P0** | **K** 间距/高度不生效 | ~30 行 | Hook `WCTableViewCellManager.cellHeightFor:` + handleCellLayout 加 height |
| **P1** | **J** 对齐方式不生效 | ~5 行 | frame.origin.x 根据 alignment 计算 |
| **P2** | **G** 折叠置顶逻辑丢失 | ~12 行 | wp_applyStandardCorner 中插入折叠检测 |

---

## 4. 视图层级

```
MMTableViewCell (Cell Hook)
├── _cellInfo → WCTableViewCellManager.fCellHeight  ← ★ 行高由这里控制
├── layer.cornerRadius = 18          ← 列表圆角
├── layer.masksToBounds = YES (普通) / NO (资料卡+卡片背景)
├── backgroundColor = 自定义色 (普通) / clearColor (资料卡+卡片背景)
│
└── contentView
    └── MMUIButton (ProfileCardBgHook)
        ├── layer.cornerRadius = 18      ← 资料卡圆角 (fillMode≠3)
        ├── layer.masksToBounds = YES    ← fillMode≠3
        ├── backgroundColor = clearColor (卡片开) / 自定义色 (卡片关)
        ├── [0] UIImageView tag=999902   ← bgImageView
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
| `cardBgLight/DarkAlignment` | NSInteger | 1 | ❌ | **未使用** |
| `cardBgLight/DarkLayer` | NSInteger | 0 | ✅ | 图层位置 |
| `cardBgLight/DarkOffsetX` | CGFloat | 0 | ✅ | X 偏移 |
| `cardBgLight/DarkOffsetY` | CGFloat | 0 | ✅ | Y 偏移 |
| `cardBgHeight` | CGFloat | 144 | ❌ | **未实现** |
| `cardBgListSpacing` | CGFloat | 9 | ❌ | **未实现** |

---

## 6. 历史踩坑记录

| # | 问题 | 根因 | 解决方式 |
|:-:|:-----|:-----|:---------|
| A | 图片文件不存在 | 用户未保存背景图 | picker 保存后文件存在 |
| B | 白色 UIView 遮挡 bgImageView | UIDynamicProviderColor 白色板 | FIX-WHITE 遍历隐藏 |
| C | 点"我"卡死 watchdog | setFrame: height 触发循环 | 移除 height 修改（需重新实现带守卫的版本） |
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
| **P** | **对齐方式不生效** | **alignment 配置从未被代码使用** | **根据 alignment 计算 frame.origin.x** |
| **Q** | **间距/高度改了没效果** | **handleCellLayout 中没有实现** | **Hook cellHeightFor: + handleCellLayout 加 height** |
