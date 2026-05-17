# 消息时间标签 textAlignment 修正方案

## 根因分析

通过 Ghidra 反编译确认：微信优化 1.6.5 的时间标签 **textAlignment 是用户可配的**（Left=0 / Center=1 / Right=2 / Justified=3 / Natural=4），**默认值为 Left 或 Natural**。

我们的代码写死了 `NSTextAlignmentCenter`，导致两个问题：

| 问题 | Center 对齐效果 | Natural 对齐效果 |
|------|:---:|:---:|
| **水平** | 文字居中于 frame → 实际位置偏右约 `w/2 ≈ 15pt` | 文字左对齐 frame → 起点就是 frame.origin |
| **垂直** | 文字垂直居中 → 行高比字大时文字偏下 2-4pt | 文字顶部对齐 → 紧贴 frame.top |

这就是为什么 Position 2/7 需要 `-16.55`（≈-w/2） 和 Position 0 偏下的原因。

---

## 改动一：`initTimeLabel` — 对齐方式

**文件**：[MessageTimeHook.m](file:///www/wwwroot/ios/WeChatPlugin/Modules/MessageTime/MessageTimeHook.m)

**位置**：约第 75 行

```objc
// 改前
label.textAlignment = NSTextAlignmentCenter;

// 改后
label.textAlignment = NSTextAlignmentNatural;
```

---

## 改动二：`computeLabelFrame` — 去掉对齐补偿偏移

**文件**：[MessageTimeHook.m](file:///www/wwwroot/ios/WeChatPlugin/Modules/MessageTime/MessageTimeHook.m)

**位置**：约第 451-458 行，`case 7 / case 2`

```objc
// 改前
case 7: // 消息旁边(=气泡外)：同位置2，气泡外侧 straddle，左偏5pt
case 2: // 消息旁边(远离头像)：气泡外侧 straddle，垂直居中，左偏5pt
    if (isSender) {
        labelFrame.origin.x = cvLeft - w * kStraddleFactor - 16.55;
    } else {
        labelFrame.origin.x = cvRight + w * kStraddleFactor - 13.4;
    }
    labelFrame.origin.y = cvBottom - h * kStraddleFactor - 4.1;
    break;

// 改后
case 7: // 消息旁边(=气泡外)
case 2: // 消息旁边(远离头像)：气泡外侧 straddle，垂直顶部
    if (isSender) {
        labelFrame.origin.x = cvLeft - w * kStraddleFactor;
    } else {
        labelFrame.origin.x = cvRight + w * kStraddleFactor;
    }
    labelFrame.origin.y = cvBottom - h * kStraddleFactor;
    break;
```

> **说明**：`-16.55 / -13.4` 是补偿 Center 对齐的水平偏移（≈ `-w/2`），`-4.1` 是补偿垂直居中的偏移。`NSTextAlignmentNatural` 后这些都不需要了。

---

## 不需要改的位置

| Position | 名称 | 状态 |
|:---:|------|------|
| 0 | 头像上方 | ✅ 已是纯公式，不需要改 |
| 1 | 头像下方 | ✅ 已是纯公式，不需要改 |
| 3 | 消息下方(靠近) | ✅ `-14.5/-13` 是位置公式值，不是对齐补偿，保留 |
| 4 | 消息下方(远离) | ✅ `+2/-2` 是边缘微调，保留 |
| 5 | 消息上方(靠近) | ✅ 边缘微调，保留 |
| 6 | 消息上方(远离) | ✅ 边缘微调，保留 |

---

## 预期效果

| 位置 | 改前（Center + 偏移） | 改后（Natural + 纯公式） |
|:---:|------|------|
| Position 0 头像上方 | Y 偏下（需手动视觉调） | Y 正确（Natural 顶部对齐） |
| Position 2/7 消息旁边 | 大量硬编码偏移 | 纯 straddle 公式，干净 |
| 全部 Position Y | 受到 Center 垂直偏移影响 | 都贴顶，干净 |

---

## 验证方式

改为 Natural 后跑一次，看 `[POS-FINAL]` 日志中 labelFrame 的值，检查：

1. Position 2 sender：`X = cvLeft - w*0.5`（纯公式，无额外偏移）
2. Position 2 receiver：`X = cvRight + w*0.5`（对称）
3. Position 0：`Y = avatarY - h*0.5`（标签骑跨头像顶部，不再偏下）