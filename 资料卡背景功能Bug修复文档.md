# MioPlugin 资料卡背景功能 — 技术文档

> **更新日期**: 2026-06-03 (v46 — 根因确认：frame 修改必须在 orig 之前)
> **架构**: ListCornerRadiusHook（薄分发层） + ProfileCardBgHook（独立资料卡模块）

---

## 1. 当前 Bug：高度问题 — 最终根因与方案

### 问题现象（高度=300, 间距=9）

| | 微信优化 | 我们的 |
|:-:|:-------|:------:|
| 卡片大小 | 很大 ✓ | 也大了 ✓ |
| 列表项显示 | 全部正常 | **只剩"服务"，其他消失** |
| 间距 | 9pt 紧贴 | **巨大空白** |

### 根因：frame 修改在 orig **之后**执行（时机错误！）

**铁证**（[ListCornerRadiusHook.m L161-168](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L161-L168)）：

```objc
static void replaced_MMUIButton_layoutSubviews(id self, SEL _cmd) {
    // ❌❌❌ 先调用 orig（微信按原尺寸130布局完毕）
    _orig_MMUIButton_layoutSubviews(self, _cmd);
    
    // 然后才改 frame — 太晚了！父视图不知道 button 变大了
    [ProfileCardBgHook handleButtonLayout:self];  // 方案H 在这里
}
```

**微信优化的做法**（[123456.c L6334-L6342](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L6334-L6342)）：

```c
// FUN_00007b4c = MMUIButton.layoutSubviews（直接替换原始方法）
// 在函数开头就改 frame，orig 还没执行
if (button.height < ProfileCardHeight) {
    [button setFrame:(x, y, w, ProfileCardHeight)];  // ★ 先改！
}
// ... 后续才处理背景图、可能调用 orig 等
```

### 时机对比图

```
✅ 正确（微信优化 / 修复后）：          ❌ 错误（我们当前的）：
 ① 改 button.h = 300                    ① orig 执行（h=130 布局完）
 ② orig 执行（基于 h=300 布局）          ② 改 button.h = 300（但布局已结束）
  ③ 父视图正确安排子视图位置             ③ 父视图不知道变化 → 布局不一致
```

### 修复：将方案H 移到 orig **之前**

**修改文件**：[ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m)

```objc
// 修改前（错误）：
static void replaced_MMUIButton_layoutSubviews(id self, SEL _cmd) {
    _orig_MMUIButton_layoutSubviews(self, _cmd);     // orig 先执行
    [ProfileCardBgHook handleButtonLayout:self];       // 后改 frame ✗
}

// 修改后（正确）：
static void replaced_MMUIButton_layoutSubviews(id self, SEL _cmd) {
    // ★★★ 先改 frame（在 orig 之前！）★★★
    [ProfileCardBgHook handleButtonLayout:self];       // 方案H：改 button.height
    
    // 再让微信基于新尺寸完成布局
    if (_orig_MMUIButton_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews)(self, _cmd);
    }
    // orig 之后不需要再改 frame
}
```

**ProfileCardBgHook.handleButtonLayout: 中的方案H 代码不变**，只是执行时机从 "orig 之后" 变成 "orig 之前"。步骤 2（heightForHeader 的 max+spacing）保持不变。

---

## 2. 视图层级（已确认）

```
MoreViewController
└── WCTableViewManager
      └── TextStateProfileTableView (UITableView 子类, 主表格)
            └── MMUIButton [0] (资料卡, h=130→300)
                  ├── UIImageView tag=999902 (bgImageView)
                  └── MMHeadImageView (头像)
```

---

## 3. 待修复汇总

| 优先级 | Bug | 方案 |
|:------:|:---:|:------|
| **P0** | **M** 资料卡高度 | **将方案H移到 orig 之前执行（见上方）** |
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
| `cardBgHeight` | CGFloat | 144 | ⚠️ 需修执行时机 |
| `cardBgListSpacing` | CGFloat | 9 | ⚠️ 需配合 |

---

## 6. 历史踩坑记录

| # | 问题 | 根因 | 状态 |
|:-:|:-----|:-----|:----:|
| A-O | 基础功能、圆角、边框、背景图等 | 已逐一修复 | ✅ |
| P | 对齐方式始终居中 | contentsRect 不对 | ✅ 已改 frame.origin.y |
| Q | 间距/高度不生效 | Hook 目标错误 | ✅ 已改 heightForHeader |
| R | 分支A切换对齐不生效 | 缺 alignmentOffset | ⚠️ 待修 |
| S-N | 高度问题（11种单步方案全部失败） | **frame 修改时机在 orig 之后** | 🔄 需移到 orig 之前 |
