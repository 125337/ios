# 死代码清理文档：MessageTimeHook.m

## 问题概述

**文件**: `MioPlugin/Modules/MessageTime/MessageTimeHook.m`

文件中存在4个已定义但未被调用的函数，属于死代码，应予以清理。

---

## 死代码清单

### 1. `detectIsSender`（第83-103行）

**定义**:
```objc
static BOOL detectIsSender(id cell, id cellView, id contentView, id wrap) {
    if (wrap) {
        id target = getCellView(cell) ?: cell;
        SEL sel = NSSelectorFromString(@"isSenderFromMsgWrap:");
        if ([target respondsToSelector:sel]) {
            @try {
                return ((BOOL (*)(id, SEL, id))objc_msgSend)(target, sel, wrap);
            } @catch (NSException *e) {}
        }
        if (target != cell && [cell respondsToSelector:sel]) {
            @try {
                return ((BOOL (*)(id, SEL, id))objc_msgSend)(cell, sel, wrap);
            } @catch (NSException *e) {}
        }
    }
    if (contentView && cellView) {
        CGRect cfc = contentFrameInView(contentView, cellView);
        return CGRectGetMidX(cfc) > [(UIView *)cellView frame].size.width / 2;
    }
    return NO;
}
```

**引用统计**: 仅在**第83行定义**处出现，**全文件无任何调用点**。

**实际用途分析**: 
- 该函数用于通过多种方式判断消息是否为发送方（sender）
  - 方式1: 通过 `isSenderFromMsgWrap:` selector 判断
  - 方式2: 通过 contentView 在 cellView 中的位置（靠右为发送方）
- 但在 `repl_CommonMessageCellView_updateNodeStatus`（第521行）中，实际使用的是直接从 viewModel 通过 KVC 获取 `isSender` 属性：
  ```objc
  BOOL isSender = NO;
  @try { isSender = [[viewModel valueForKey:@"isSender"] boolValue]; } @catch (NSException *e) {}
  ```
- 该实现更简洁且可靠，因此 `detectIsSender` 已完全被替代。

**结论**: ✅ **确认死代码**

---

### 2. `contentFrameInView`（第74-81行）

**定义**:
```objc
static CGRect contentFrameInView(id contentView, id toView) {
    if (!contentView) return CGRectZero;
    UIView *cv = (UIView *)contentView;
    UIView *cvSuper = cv.superview;
    if (cvSuper == (UIView *)toView) return cv.frame;
    if (toView) return [(UIView *)toView convertRect:cv.frame fromView:cvSuper];
    return cv.frame;
}
```

**引用统计**: 
- 第74行：定义
- 第99行：在 `detectIsSender` 内部调用

**实际用途分析**:
- 该函数的功能是将 contentView 的 frame 转换到指定的坐标系
- 唯一调用方是 `detectIsSender`（第99行）
- 由于 `detectIsSender` 本身就是死代码，`contentFrameInView` 也随之成为死代码
- 在 `repl_CommonMessageCellView_updateNodeStatus`（第604-610行）中，实际使用的是内联的坐标系转换逻辑：
  ```objc
  contentFrame = contentV.superview
      ? [cv convertRect:contentV.frame fromView:contentV.superview]
      : contentV.frame;
  ```

**结论**: ✅ **确认死代码**

---

### 3. `getBubbleView`（第278-342行）

**定义**:
```objc
static id getBubbleView(id cell) {
    id bubbleView = nil;
    id cellView = getCellView(cell);
    id contentView = nil;
    @try { contentView = [cell valueForKey:@"contentView"]; } @catch (...) {}
    if (!contentView) { @try { contentView = [cell valueForKey:@"m_contentView"]; } @catch (...) {} }
    
    NSArray *targets = @[cellView ?: [NSNull null], contentView ?: [NSNull null], cell];
    
    for (id target in targets) {
        // ... getBgImageView selector ...
        // ... KVC m_bgImageView/bgImageView ...
        // ... subview class name matching ...
    }
    // ... frame zero check ...
    return bubbleView;
}
```

**引用统计**: 
- 第278行：定义
- 第297、310、323、334、339行：函数内部的日志

**全文件搜索 `getBubbleView` 结果**: 仅以上6行，**无任何外部调用点**。

**实际用途分析**:
- 该函数用于获取消息气泡视图（bgImageView）
- 但在整个文件中，没有任何 Hook 函数（如 `repl_CommonMessageCellView_updateNodeStatus`）调用它
- 当前代码中时间标签的定位（第629-676行）直接使用 contentFrame 和 avatarFrame 来计算，不依赖气泡视图

**结论**: ✅ **确认死代码**

---

### 4. `getContentView`（第344-386行）

**定义**:
```objc
static id getContentView(id cell) {
    id contentView = nil;
    id cellView = getCellView(cell);
    if (cellView) {
        @try { contentView = [cellView valueForKey:@"m_contentView"]; } @catch (...) {}
        // ... log ...
    }
    if (!contentView) {
        @try { contentView = [cell valueForKey:@"m_contentView"]; } @catch (...) {}
        // ... log ...
    }
    if (!contentView) {
        id targetView = cellView ?: cell;
        for (UIView *sv in [(UIView *)targetView subviews]) {
            // ... subview class name matching ...
        }
    }
    // ... frame zero check ...
    return contentView;
}
```

**引用统计**:
- 第69行：前向声明 `static id getContentView(id cell);`
- 第344行：定义
- 第351、359、371、379、384行：函数内部的日志

**全文件搜索 `getContentView` 结果**: 以上7行，**无任何实际调用点**。

**实际用途分析**:
- 该函数用于通过多种方式获取 cell 的 contentView
- 在 `repl_CommonMessageCellView_updateNodeStatus`（第597-601行）中，实际使用的是直接通过 KVC 获取：
  ```objc
  id contentViewObj = nil;
  @try { contentViewObj = [cv valueForKey:@"m_contentView"]; } @catch (...) {}
  if (!contentViewObj) {
      @try { contentViewObj = [cv valueForKey:@"contentView"]; } @catch (...) {}
  }
  ```
- 该 KVC 获取方式内联在 `repl_CommonMessageCellView_updateNodeStatus` 中，完全替代了 `getContentView` 的功能

**结论**: ✅ **确认死代码**

---

## 总结对照表

| 函数 | 行号 | 代码行数 | 是否被调用 | 判定 | 
|------|------|---------|-----------|------|
| `detectIsSender` | 83-103 | 21行 | ❌ 无任何调用 | 死代码 |
| `contentFrameInView` | 74-81 | 8行 | ❌ 仅被死代码 `detectIsSender` 调用 | 死代码 |
| `getBubbleView` | 278-342 | 65行 | ❌ 无任何调用 | 死代码 |
| `getContentView` | 344-386 | 43行 | ❌ 无任何调用（含前向声明69行） | 死代码 |

**合计死代码行数**: 约137行（含空行和日志，不含前向声明）

---

## 清理建议

### 清理范围

移除以下内容：

| 移除项 | 说明 |
|-------|------|
| 第74-81行 `contentFrameInView` 函数 | 整个函数体 |
| 第83-103行 `detectIsSender` 函数 | 整个函数体 |
| 第278-342行 `getBubbleView` 函数 | 整个函数体 |
| 第344-386行 `getContentView` 函数 | 整个函数体 |
| 第69行 `getContentView` 前向声明 | 在 `static id getCellView(id cell);` 之后的这一行 |

### 不影响的范围

以下代码不受影响，保持不变：

| 函数 | 说明 |
|------|------|
| `getCellView` | 仍被 `getAvatarView` 调用（第222行） |
| `getAvatarView` | 仍被 `repl_CommonMessageCellView_updateNodeStatus` 调用（第624行） |
| `repl_CommonMessageCellView_updateNodeStatus` | 核心逻辑不受影响，contentView 通过 KVC 直接获取 |

---

## 清理前后对比

### 清理前

```
第64-103行: getCellView 前向声明 + contentFrameInView + detectIsSender  (约40行死代码)
第278-386行: getBubbleView + getContentView                              (约108行死代码)
```

### 清理后

```
第64行: 仅保留 getCellView 前向声明
第278-386行: 整体删除
```

---

## 测试验证

清理后应验证以下功能正常：

1. **消息时间标签显示**: 进入聊天界面，确认每条消息的时间标签正常显示
2. **时间标签定位**: 测试所有 position 模式（0-7），确认标签位置正确
3. **头像视图获取**: 确认 position 0/1（头像上方/下方）模式正常工作
4. **发送方/接收方识别**: 确认 isSender 判断正常，颜色区分正确

---

## 文档信息

| 项目 | 内容 |
|-----|------|
| 文件 | `MioPlugin/Modules/MessageTime/MessageTimeHook.m` |
| 创建日期 | 2026-06-10 |
| 死代码行数 | 约137行 |
| 风险等级 | 低（所有函数均无调用点） |
| 清理方式 | 直接删除函数定义及前向声明 |