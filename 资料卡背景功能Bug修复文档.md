# MioPlugin 资料卡背景功能 — 技术文档

> **更新日期**: 2026-06-03 (v45 — 高度问题最终方案：方案H + heightForHeader 组合)
> **架构**: ListCornerRadiusHook（薄分发层） + ProfileCardBgHook（独立资料卡模块）

---

## 1. 当前 Bug：高度问题 — 最终方案

### 问题现象（高度=300, 间距=9 对比）

| | 微信优化 | 我们的 |
|:-:|:-------|:------:|
| 卡片大小 | 很大 ✓ | 也大了 ✓ |
| 列表项显示 | 全部正常（视频号/订单/表情/插件/设置） | **只剩"服务"，其他全消失** |
| 卡片和列表间距 | 9pt 紧贴 | **巨大空白** |

### 根因：button 变大了但表格行位置没跟上

```
方案H 已生效：button.frame.height = 300 ✓
heightForHeader 返回值 = orig(170) + spacing(9) = 179 ✗ ← 没同步！

结果：
  button 实际占 0~300pt
  表格认为 header 只占 179pt
  第一个列表项排在 188pt 处
  188~300 之间全是空白
  后续列表项被推到屏幕外 → 看不见了
```

### 最终方案：两步组合（与微信优化一致）

**微信优化的做法就是两步都做，之前我们分开测试所以都失败了。**

#### 步骤 1：`handleButtonLayout` 中改 button 高度（方案 H，已生效）

```objc
// 在 APPLY_CORNER: 标签之前
{
    CGFloat targetH = config.cardBgHeight;
    if (targetH <= 0 || button.frame.size.height >= targetH) return;

    UIView *tableView = button.superview;
    if (![NSStringFromClass([tableView class]) isEqualToString:@"TextStateProfileTableView"]) return;

    // 改 button 高度
    CGRect bf = button.frame;
    bf.size.height = targetH;
    button.frame = bf;

    // 触发布局重算
    if ([tableView isKindOfClass:[UITableView class]]) {
        dispatch_async(dispatch_get_main_queue(), ^{
            [(UITableView *)tableView beginUpdates];
            [(UITableView *)tableView endUpdates];
        });
    }
}
APPLY_CORNER:
```

#### 步骤 2：`_hooked_heightForHeader` 中加回 `max(result, cardBgHeight)`（关键缺失！）

```objc
static double _hooked_heightForHeader(id self, SEL _cmd, id tableView, long long section) {
    double result = _orig_heightForHeader(self, _cmd, tableView, section);

    PluginConfig *config = [PluginConfig shared];
    if (!config.cardBgEnabled) return result;
    if (section != 1) return result;

    UIResponder *responder = [tableView nextResponder];
    UIViewController *vc = nil;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            vc = (UIViewController *)responder; break;
        }
        responder = [responder nextResponder];
    }
    if (!vc || ![NSStringFromClass([vc class]) isEqualToString:@"MoreViewController"]) return result;

    // ★ ① 保证空间 ≥ 自定义高度（与步骤1配合）
    CGFloat customHeight = config.cardBgHeight;
    if (customHeight > 0 && result < customHeight) {
        result = customHeight;
    }

    // ★ ② 追加间距
    CGFloat spacing = config.cardBgListSpacing;
    if (spacing > 0) {
        result += spacing;
    }

    return result;
}
```

### 数据流验证（cardBgHeight=300, spacing=9）

```
① heightForHeader 返回 max(170, 300) + 9 = 309  → UITableView 分配 309pt
② handleButtonLayout button.height = 300       → 按钮 300pt
③ 结果：309pt 空间 - 300pt 按钮 = 9pt 间距 ✓ 无空白、无覆盖、列表正常
```

---

## 2. 视图层级（已确认）

```
MoreViewController
└── WCTableViewManager
      └── TextStateProfileTableView (h=772, 主表格，含卡片+所有列表项)
            └── MMUIButton [0] (h=130→300, 资料卡)  ← 步骤1改这里
                  ├── UIImageView tag=999902 (bgImageView)
                  └── MMHeadImageView (头像)

注意：资料卡不在标准 Section Header 中，而是直接作为 TextStateProfileTableView 的子视图。
heightForHeader 控制的是外层给这个表格分配的空间大小。
```

---

## 3. 待修复汇总

| 优先级 | Bug | 方案 |
|:------:|:---:|:------|
| **P0** | **M** 资料卡高度 | **步骤1+2 组合执行（见上方）** |
| **P1** | **L** 分支A缺少 alignment 偏移 | 分支A复用 alignment 偏移计算 |
| **P2** | **G** 折叠置顶逻辑丢失 | wp_applyStandardCorner 中插入折叠检测 |

---

## 4. alignment 偏移计算

```objc
CGFloat scale = viewW / imgW;
CGFloat renderedH = imgH * scale;
CGFloat overflow = renderedH - viewH;

if (overflow > 0) {
    switch (alignment) {
        case 0:  alignmentOffset = -overflow / 2.0; break;  // 底部
        case 2:  alignmentOffset =  overflow / 2.0; break;  // 顶部
        default: alignmentOffset = 0;                break;  // 居中
    }
}
frame.origin.y = userOffsetY + alignmentOffset;
```

---

## 5. 配置项说明

| 配置项 | 类型 | 默认值 | 状态 |
|:------:|:-----:|:------:|:----:|
| `cardBgEnabled` | BOOL | NO | ✅ |
| `cardBgHidden` | BOOL | NO | ✅ |
| `cardBgFillMode` | NSInteger | 0 | ✅ |
| `cardBgLight/DarkImagePath` | NSString* | nil | ✅ |
| `cardBgLight/DarkAlignment` | NSInteger | 0 | ✅ (0=底部 1=居中 2=顶部) |
| `cardBgLight/DarkLayer` | NSInteger | 0 | ✅ |
| `cardBgLight/DarkOffsetX/Y` | CGFloat | 0 | ✅ |
| `cardBgHeight` | CGFloat | 144 | ⚠️ 需步骤1+2组合 |
| `cardBgListSpacing` | CGFloat | 9 | ⚠️ 需步骤1+2组合 |

---

## 6. 历史踩坑记录

| # | 问题 | 根因 | 状态 |
|:-:|:-----|:-----|:----:|
| A-O | 基础功能、圆角、边框、背景图等 | 已逐一修复 | ✅ |
| P | 对齐方式始终居中 | contentsRect 不对 | ✅ 已改 frame.origin.y |
| Q | 间距/高度不生效 | Hook 目标错误 | ✅ 已改 heightForHeader |
| R | 分支A切换对齐不生效 | 缺 alignmentOffset | ⚠️ 待修 |
| **S-M** | **高度问题（10种方案）** | **单步方案都不够，需两步组合** | 🔄 需加回 max(result, cardBgHeight) 到 heightForHeader |
