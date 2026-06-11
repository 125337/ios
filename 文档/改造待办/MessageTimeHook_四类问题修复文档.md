# MessageTimeHook.m 四类问题修复文档（最佳方案）

> 基于静态代码审查 | 2026-06-11 | **不妥协，不打补丁**
> 目标文件：[MessageTimeHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m)

---

## 问题清单

| ID | 问题 | 严重程度 | 方案原则 |
|:--:|------|:--------:|---------|
| 1 | 未使用的常量 + 死代码 | 低 | **直接删除**，不留冗余 |
| 2 | `ChatTableViewCell` 查找失败时位置错乱 | **高** | **根除 ChatTableViewCell 依赖**，改用 `cv` 直接获取 |
| 3 | `contentFrameInCellView` 参数语义不清晰 | 中 | **重命名参数**为 `toView`，语义与系统 API 对齐 |
| 4 | 多处使用 `NSLog` 而非 `WPLog` | 低 | **全部替换**为 `WPLog` |

---

## 问题 1：删除未使用的常量与死代码

### 现状

[L15-L20](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L15-L20) 声明 3 个未使用常量：

```objc
static const CGFloat kTimeLabelMaxYInset       = 2.0;   // ❌ 从未使用
static const CGFloat kStraddleFactor           = 0.5;   // ❌ 从未使用
static const CGFloat kMessageTimeBaseSpacing   = 2;     // ❌ 从未使用
```

[L39-L72](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L39-L72) 的 `_logQueue` 和 `mtLog` 函数从未被调用，且功能已被 `WPLog` 替代。

### 最佳方案：直接删除

删除 3 行常量声明 + 完整的 `_logQueue`/`mtLog` 函数定义（~35 行）。

依赖检查：`mtLog` 不依赖其他函数，其他函数也不依赖它。删除后零影响。

---

## 问题 2：根除 ChatTableViewCell 依赖（关键重构）

### 现状

[L656-L666](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L656-L666)：

```objc
// 这个 superview 遍历是病根
UIView *cell = cv;
while (cell && ![NSStringFromClass([cell class]) containsString:@"ChatTableViewCell"]) {
    cell = [cell superview];
}
CGRect cellFrame = cell ? [cell frame] : CGRectZero;
id contentViewObj = getContentView(cell);       // cell 为 nil → contentViewObj 为 nil
CGRect contentFrame = contentFrameInCellView(contentViewObj, cv);
if (CGRectEqualToRect(contentFrame, CGRectZero)) {
    contentFrame = cellFrame;                   // CGRectZero
    contentFrame.origin = CGPointZero;          // (0,0)
}
```

**根因**：代码通过 `while` 循环沿 `superview` 链向上查找 `ChatTableViewCell`。在转发、预览等非聊天场景中，CommonMessageCellView（`cv`）的 superview 链中不包含 `ChatTableViewCell`，导致 `cell == nil`。后续所有计算依赖 `cell`，全部崩溃为 `CGRectZero`，时间标签定位到 `(0,0)`。

**核心问题**：依赖 `ChatTableViewCell` 去获取 `contentView` 和 `avatarView`，而这两者都可以从 `cv`（CommonMessageCellView = self）直接获取。

### 最佳方案：直接通过 cv 获取，彻底删除 ChatTableViewCell 查找

原理：`cv`（self）就是 CommonMessageCellView，它本身就是 ChatTableViewCell 的 `m_cellView`。`contentView` 和 `avatarView` 都是 CommonMessageCellView 的子树节点，直接通过 KVC 和子视图遍历即可获取，无需绕道 ChatTableViewCell。

```objc
// ── 替换前 ──
UIView *cell = cv;
while (cell && ![NSStringFromClass([cell class]) containsString:@"ChatTableViewCell"]) {
    cell = [cell superview];
}
CGRect cellFrame = cell ? [cell frame] : CGRectZero;
id contentViewObj = getContentView(cell);
CGRect contentFrame = contentFrameInCellView(contentViewObj, cv);
if (CGRectEqualToRect(contentFrame, CGRectZero)) {
    contentFrame = cellFrame;
    contentFrame.origin = CGPointZero;
}

// ── 替换后 ──
// 直接从 CommonMessageCellView(self) 获取 contentView
id contentViewObj = nil;
@try { contentViewObj = [cv valueForKey:@"m_contentView"]; } @catch (...) {}
if (!contentViewObj) {
    @try { contentViewObj = [cv valueForKey:@"contentView"]; } @catch (...) {}
}

// 将 contentView frame 转换到 cv 坐标系
CGRect contentFrame = CGRectZero;
if (contentViewObj) {
    UIView *contentV = (UIView *)contentViewObj;
    contentFrame = contentV.superview
        ? [cv convertRect:contentV.frame fromView:contentV.superview]
        : contentV.frame;
}

if (CGRectEqualToRect(contentFrame, CGRectZero)) {
    contentFrame = cv.bounds; // cv 坐标系下的 bounds，等价但更精确
}
```

`getAvatarView` 调用处同样改为传入 `cv` 而非 `cell`：

```objc
// ── 替换前 ──
id avatarView = getAvatarView(cell);

// ── 替换后 ──
id avatarView = getAvatarView(cv);
// getAvatarView 会遍历 cv 的子树查找 MMHeadImageView，功能正常
```

**优势**：
1. **无 nil 风险** — 不依赖外部 superview 链，`cv` 就是 self，永远非 nil
2. **无字符串匹配** — 不依赖 `containsString:@"ChatTableViewCell"` 这种脆弱模式
3. **无间接跳转** — 直接从 cv 获取，不需经过 cell → cellView → contentView 三层跳转
4. **非聊天场景安全** — contentView 获取失败时回退 `cv.bounds`，位置在可视范围内

---

## 问题 3：contentFrameInCellView 参数语义不清晰

### 现状

[L133-L140](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L133-L140)：

```objc
static CGRect contentFrameInCellView(id contentView, id cellView) {
    // 参数 cellView 语义模糊：它是坐标系的目标视图（toView），不是 "cell 的 view"
```

调用处传入 `cv`（CommonMessageCellView），但 `cellView` 暗示应该是 ChatTableViewCell，造成阅读时的认知负担。

### 最佳方案：重命名参数为 `toView`

函数的作用是将 `contentView` 的 frame 转换到 `toView` 坐标系中，与系统 `convertRect:fromView:` 的语义保持一致。

```objc
/// 将 contentView.frame 转换到 toView 坐标系
/// @param contentView 内容视图（frame 所在视图）
/// @param toView 目标坐标系视图（必须是 contentView.superview 或其祖先视图）
static CGRect contentFrameInView(id contentView, id toView) {
    if (!contentView) return CGRectZero;
    UIView *cv = (UIView *)contentView;
    UIView *cvSuper = cv.superview;
    if (cvSuper == (UIView *)toView) return cv.frame;
    if (toView) return [(UIView *)toView convertRect:cv.frame fromView:cvSuper];
    return cv.frame;
}
```

同时重命名函数为 `contentFrameInView`（去掉 Cell），避免与 `ChatTableViewCell` 产生联想。

调用处 [L662](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L662) 对应更新：

```objc
// 在问题 2 修复后，此调用也被消除了，不需要再改
// 如果其他调用（如 detectIsSender）仍在使用，一并更新参数名
```

其他调用处（[L158](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L158)）：

```objc
// 替换前
CGRect cfc = contentFrameInCellView(contentView, cellView);

// 替换后
CGRect cfc = contentFrameInView(contentView, cellView);
```

---

## 问题 4：NSLog → WPLog

### 现状

8 处 `NSLog` 散落在 `computeReadStatus` 和 `updateNodeStatus` 中：

| 位置 | 行号 | 用途 |
|:----:|:----:|------|
| computeReadStatus | [L221](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L221) | 接收方更新 stored_max |
| computeReadStatus | [L223](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L223) | 接收方无需更新 |
| computeReadStatus | [L227](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L227) | 接收方 sessionKey 为空 |
| computeReadStatus | [L229](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L229) | 接收方 → statusCode=2 |
| computeReadStatus | [L235](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L235) | 发送方 sessionKey 为空 |
| computeReadStatus | [L245](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L245) | 发送方 → statusCode=2 |
| computeReadStatus | [L248](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L248) | 发送方 → statusCode=1 |
| updateNodeStatus | [L649](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L649) | color error |

### 最佳方案：全部替换为 WPLog

```objc
// 替换前
NSLog(@"[伪已读·追踪器] 接收方更新 stored_max: key=%@, old=%u, new=%u", ...);

// 替换后
WPLog(@"MsgTime", @"[伪已读·追踪器] 接收方更新 stored_max: key=%@, old=%u, new=%u", ...);
```

`WPLog` 在顶部已 `#import`（L10），直接使用。`WPLog` 内部使用 `os_log` 不会抛异常，`@catch` 块内的 L649 也可安全替换。

---

## 完整变更对照

| 文件位置 | 原代码 | 新代码 | 变更类型 |
|---------|--------|--------|:--------:|
| L15-20 | 6 个常量声明 | 删除 `kTimeLabelMaxYInset` / `kStraddleFactor` / `kMessageTimeBaseSpacing` | 删除 |
| L39-72 | `_logQueue` + `mtLog` 完整定义 | 删除 | 删除 |
| L133 | `contentFrameInCellView` | `contentFrameInView` | 重命名 |
| L134 | `id contentView, id cellView` | `id contentView, id toView` | 参数重命名 |
| L138 | `(UIView *)cellView` | `(UIView *)toView` | 同步重命名 |
| L158 | `contentFrameInCellView` | `contentFrameInView` | 调用处更新 |
| L655-677 | `while` 查找 ChatTableViewCell + `getContentView` + `contentFrameInCellView` | 直接 KVC 获取 contentView + `convertRect` | **重构** |
| L676 | `getAvatarView(cell)` | `getAvatarView(cv)` | 参数变更 |
| L221-248 | 7 处 `NSLog` | `WPLog` | 替换 |
| L649 | `NSLog` | `WPLog` | 替换 |

---

## 工作量

| 问题 | 变更 |
|:----:|------|
| 1 | -38 行（纯删除） |
| 2 | -7 行（删除 while/三元/回退），+11 行（KVC 获取 + 转换） |
| 3 | 重命名函数 + 参数 |
| 4 | 8 行 `NSLog` → `WPLog` |
| **合计** | **净减 ~25 行，消除 1 个高严重度 bug** |

---

## 验证方法

| 问题 | 验证方式 |
|:----:|---------|
| 1 | 编译；全局搜索 3 个常量名 + `mtLog` + `_logQueue` 无结果 |
| 2 | 聊天界面位置正常；转发/预览场景无时间标签在 (0,0)；无 superview while 循环 |
| 3 | 编译通过；`contentFrameInView` 参数名语义清晰 |
| 4 | `grep -n "NSLog" MessageTimeHook.m` 结果为空 |