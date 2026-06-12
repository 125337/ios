# 黄白助手"修改布局"功能实现原理深度分析

> **分析对象**: `黄白助手 2.0-9(1).dylib.c`（反编译产物）  
> **分析范围**: "修改布局"功能的 Hook 逻辑、配置项、入口链路  
> **注意**: "修改布局"和"头像框"是两个独立的 UI 功能入口，但它们共享同一组 MMTableViewCell Hook（作为底层基础设施），通过不同的配置项控制不同的行为

---

## 一、功能定位

在黄白助手的 TheSpecialController 设置页中，**"修改布局"是一个独立的功能入口**，它下面只有**两个子配置**：

| 子配置 | 功能说明 | 对应 Config 属性 | 默认值 |
|-------|---------|:---------------:|:------:|
| **修改布局大小** | 调整聊天列表中的消息字体大小 | `editFontsetSizeLayout` | 16.0 |
| **修改聊天大小** | 调整聊天列表 Cell 的整体大小（行高/间距） | 待定位 | — |

> "头像框"（WCAvatarFrameMainController）是另一个独立的功能入口，在 UI 上不归属于"修改布局"。

---

## 二、入口链路：TheSpecialController

### 2.1 "修改布局"的菜单 Cell

"修改布局"在 TheSpecialController 中是一个**折叠/展开式的分组**，点击后展开显示两个子配置项：

```
TheSpecialController 设置页
  ├── 头像框          ← 独立功能入口（→ WCAvatarFrameMainController）
  ├── ...
  ├── 修改布局        ← 展开后显示两个子项
  │   ├── 修改布局大小   → setChatLayoutSize / setChatLayoutSizeer
  │   └── 修改聊天大小   → (需进一步定位)
  └── ...
```

### 2.2 修改布局大小（setChatLayoutSize）

**Cell 创建方法**（line 471434）：

```objc
/// 创建"修改布局大小"的 Cell
- (id)setChatLayoutSize {
    // 1. 读取 HBConfigUtil 的 editFontsetSizeLayout 值
    CGFloat fontSize = [[HBConfigUtil shared] editFontsetSizeLayout];

    // 2. 判断是否为默认值
    if (fontSize == 16.0) { // 浮点数精确比较
        // 显示 "默认"
        return [XXX normalCellForSel:@"setChatLayoutSizeer"
                              target:self
                               title:@"修改布局大小"
                          rightValue:@"默认"
                   canRightValueCopy:NO];
    } else {
        // 显示实际值（如 "18"）
        return [XXX normalCellForSel:@"setChatLayoutSizeer"
                              target:self
                               title:@"修改布局大小"
                          rightValue:[NSString stringWithFormat:@"%.0f", fontSize]
                   canRightValueCopy:NO];
    }
}
```

**导航方法**（line 471576）：

```objc
/// 点击"修改布局大小" Cell 后的跳转
- (void)setChatLayoutSizeer {
    // 推入一个数值调整页面（UIPickerView 或 slider 页面）
    // 用户调整后通过 setChatLayoutSizeerer_: 回调
}
```

**值接收方法**（line 471816）：

```objc
/// 接收调整后的值并保存
- (void)setChatLayoutSizeerer_:(id)value {
    // value 是用户选择的字体大小
    [[HBConfigUtil shared] setEditFontsetSizeLayout:[value floatValue]];
}
```

### 2.3 修改聊天大小

这是"修改布局"的第二个子配置。从反编译代码的静态分析中难以精确定位其对应的 Config 属性（因为所有字符串均经过 XOR 混淆加密），但从其功能描述可以推断它控制的是聊天列表 Cell 的高度/间距，对应的 Config 属性很可能是另一个 CGFloat 类型。

---

## 三、Hook 底层基础设施（MMTableViewCell）

### 3.1 Hook 与功能的关系

"修改布局"和"头像框"虽然是独立的 UI 功能入口，但它们**共享同一套 Hook 基础设施**。这是因为：

1. 两者都需要对聊天列表 Cell（MMTableViewCell）进行布局修改
2. 两者的模块 ID 相同（`hbcKUbvbJKCbhjtgGfvkBcbjhkVClzjBCV == 4`）
3. 在 constructor 中一次性注册所有 Hook，运行时根据配置项决定具体行为

```
constructor（模块 ID == 4）
  ├── Hook setFrame:      → FUN_00017024  ← 修改布局 + 头像框共用
  ├── Hook layoutSubviews → FUN_00018dcc  ← 修改布局 + 头像框共用
  ├── class_addMethod(isInChatListView)   ← 共用范围判断
  └── （其他语音中心相关 Hook）
```

### 3.2 被 Hook 的目标类

通过 `_objc_getClass` 获取 **MMTableViewCell**（微信聊天列表的 Cell 基类），然后：

```c
// 动态添加运行时方法
class_addMethod(MMTableViewCell, "isInChatListView", FUN_00017c1c, ...);
class_addMethod(MMTableViewCell, "hbLastFrame", &DAT_00006680, ...);
class_addMethod(MMTableViewCell, "setHbLastFrame:", FUN_000067d4, ...);
class_addMethod(MMTableViewCell, "hbShadowCreated", FUN_0000627c, ...);
class_addMethod(MMTableViewCell, "setHbShadowCreated:", FUN_000063d0, ...);
class_addMethod(MMTableViewCell, "hbCurrentImage", &DAT_00006c78, ...);
class_addMethod(MMTableViewCell, "setHbCurrentImage:", &DAT_00006d30, ...);

// Hook 布局方法
FUN_0001cecc(MMTableViewCell, "setFrame:", FUN_00017024, &orig_setFrame);  // method_setImplementation
MSHookMessageEx(MMTableViewCell, "layoutSubviews", FUN_00018dcc, &orig_layoutSubviews);
```

### 3.3 范围判断：isInChatListView

通过检查 Cell 的 `m_delegate` 类型来判断当前 Cell 是否位于聊天列表中：

```objc
/// 判断 Cell 是否在聊天列表视图内
- (BOOL)isInChatListView {
    // 获取 delegate（聊天列表控制器）
    id delegate = [self m_delegate];

    // 判断 delegate 是否属于聊天列表相关类
    Class chatClass = objc_getClass("BaseMsgContentViewController"); // 或其他聊天类
    return [delegate isKindOfClass:chatClass];
}
```

只有聊天列表中的 MMTableViewCell 才应用布局修改，朋友圈、公众号列表等不受影响。

---

## 四、Hook setFrame: 逻辑（FUN_00017024）

### 4.1 函数签名

```c
void hook_setFrame(id self, SEL _cmd, CGRect frame);
// 参数：self=Cell实例, _cmd=@selector(setFrame:), frame=新frame
```

### 4.2 执行流程

```
1. 首次调用 → XOR 解码初始化（仅一次）
2. 读取 HBConfigUtil 配置：
   ├── customAvatarSizeAdjustment（头像框功能使用）
   └── profileAvatarSizeAdjustment（头像框功能使用）
3. 获取 superview
4. 判断 superview 是否为 UITableView（聊天列表）
   ├── 是 → 进入布局修改逻辑
   └── 否 → 直接调用 orig_setFrame 返回
5. 根据配置值调整 frame
6. 调用 orig_setFrame(frame)
```

### 4.3 伪代码还原

```objc
static void (*orig_setFrame)(id, SEL, CGRect);

void hook_setFrame(id self, SEL _cmd, CGRect frame) {
    // --- 保存原始 frame（给 layoutSubviews 用） ---
    self.hbLastFrame = frame;

    // --- 读取配置 ---
    CGFloat customSize = [[HBConfigUtil shared] customAvatarSizeAdjustment];
    CGFloat profileSize = [[HBConfigUtil shared] profileAvatarSizeAdjustment];

    // --- 范围判断 ---
    UIView *superview = [self superview];
    BOOL isChatList = [superview isKindOfClass:[UITableView class]];

    if (isChatList) {
        // --- 修改聊天大小 逻辑 ---
        // 根据配置调整 Cell 的 frame（行高/间距）
        CGFloat chatSizeValue = [[HBConfigUtil shared] ???]; // "修改聊天大小"的配置值
        if (chatSizeValue != 0) {
            frame.size.height += chatSizeValue; // 或其他调整方式
        }

        // --- 头像框大小调整（这是头像框功能，不是修改布局） ---
        if (customSize != 0) {
            frame.size.width += customSize;
            frame.size.height += customSize;
        }
    }

    // --- 调用原始实现 ---
    orig_setFrame(self, _cmd, frame);
}
```

### 4.4 关键设计

| 设计点 | 说明 |
|:-----:|------|
| **记录原始 frame** | 保存到 `hbLastFrame` 运行时属性，供 layoutSubviews 参考 |
| **范围过滤** | 仅修改聊天列表中的 Cell，不影响其他区域的 MMTableViewCell |
| **头像框和布局共享 setFrame Hook** | 两者都在 setFrame 中调整 Cell 的 frame，但通过各种配置项区分 |

---

## 五、Hook layoutSubviews 逻辑（FUN_00018dcc）

### 5.1 函数签名

```c
void hook_layoutSubviews(id self, SEL _cmd);
```

### 5.2 执行流程

```
1. 调用 orig_layoutSubviews（微信原始布局完成）
2. 通过 isInChatListView 判断是否在聊天列表
   ├── 否 → 直接返回
   └── 是 → 继续
3. 读取 enableAvatarFrame（头像框主开关）
4. 读取 enableAvatarBorder（头像框边框开关）
5. 如果 enableAvatarFrame == YES（头像框功能）：
   ├── 获取头像 ImageView
   ├── 根据 customAvatarSizeAdjustment 缩放头像
   └── 调整 contentView 偏移
6. 如果 enableAvatarBorder == YES（头像框功能）：
   ├── 检查 hbShadowCreated 标记
   ├── 如未创建 → 创建 CALayer 边框 + 设置样式
   └── 如已创建 → 更新边框 frame 匹配当前头像位置
7. 读取 editFontsetSizeLayout（修改布局功能）：
   ├── 如果 != 16.0（默认值）：
   │   └── 遍历 contentView.subviews 中的 UILabel，修改 font
   └── 如果 == 16.0 → 不做字体调整
8. 读取 ???（修改聊天大小配置）：
   └── 调整 Cell 内部布局间距
```

### 5.3 伪代码还原

```objc
static void (*orig_layoutSubviews)(id, SEL);

void hook_layoutSubviews(id self, SEL _cmd) {
    // 1. 微信完成基础布局
    orig_layoutSubviews(self, _cmd);

    // 2. 范围判断
    if (![self isInChatListView]) return;

    // 3. 读取配置
    BOOL avatarFrameOn = [[HBConfigUtil shared] enableAvatarFrame];     // 头像框开关
    BOOL borderOn = [[HBConfigUtil shared] enableAvatarBorder];         // 头像框-边框开关
    CGFloat customSize = [[HBConfigUtil shared] customAvatarSizeAdjustment]; // 头像框-大小
    CGFloat fontSize = [[HBConfigUtil shared] editFontsetSizeLayout];   // 修改布局-字体大小
    CGFloat chatSize = [[HBConfigUtil shared] ???];                     // 修改聊天大小

    // 4. 获取头像 ImageView
    UIImageView *avatarIV = [self valueForKey:@"m_avatarIV"];

    // ===== 头像框功能（如果启用） =====
    if (avatarFrameOn && avatarIV) {
        // 头像缩放
        if (customSize != 0) {
            CGFloat scale = 1.0 + (customSize / 100.0);
            avatarIV.transform = CGAffineTransformMakeScale(scale, scale);
        }

        // 头像边框
        if (borderOn) {
            CALayer *borderLayer = /* 从关联对象获取或创建 */;
            borderLayer.frame = CGRectInset(avatarIV.frame, -2, -2);
            borderLayer.borderColor = [UIColor orangeColor].CGColor;
            borderLayer.borderWidth = 2.0;
            borderLayer.cornerRadius = avatarIV.layer.cornerRadius;
            [avatarIV.superview.layer addSublayer:borderLayer];
        }
    }

    // ===== 修改布局功能 =====
    // 子配置1: 修改布局大小（字体）
    if (fontSize != 16.0) {
        for (UIView *subview in self.contentView.subviews) {
            if ([subview isKindOfClass:[UILabel class]]) {
                UILabel *label = (UILabel *)subview;
                label.font = [label.font fontWithSize:fontSize];
                [label sizeToFit];
            }
        }
    }

    // 子配置2: 修改聊天大小（行高/间距）
    if (chatSize != 0) {
        // 调整 Cell 内边距或子视图位置
        CGRect contentFrame = self.contentView.frame;
        contentFrame.size.height += chatSize;
        self.contentView.frame = contentFrame;
    }
}
```

---

## 六、配置项总结

### 6.1 "修改布局"功能的配置

| 配置 property | 类型 | 默认值 | 用途 | Hook 中使用位置 |
|:------------:|:----:|:------:|------|:-------------:|
| `editFontsetSizeLayout` | CGFloat | 16.0 | 聊天列表消息字体大小 | `layoutSubviews` 中遍历 UILabel |
| `???`（修改聊天大小） | CGFloat | 0 | 聊天 Cell 高度/间距调整 | `setFrame:` 中调整 frame.size.height |

### 6.2 "头像框"功能的配置（仅供参考，不属于修改布局）

| 配置 property | 类型 | 用途 |
|:------------:|:----:|------|
| `enableAvatarFrame` | BOOL | 头像框总开关 |
| `enableAvatarBorder` | BOOL | 头像边框开关 |
| `enableAvatarShadow` | BOOL | 头像阴影开关 |
| `customAvatarSizeAdjustment` | CGFloat | 头像大小缩放值 |
| `profileAvatarSizeAdjustment` | CGFloat | 资料卡头像大小 |
| `avatarConfigModeIndex` | NSInteger | 头像配置模式 |

---

## 七、完整数据流

```
┌──────────────────────────────────────────────────────────────────┐
│ TheSpecialController 设置页                                        │
│                                                                  │
│  "修改布局" 分组（展开后显示两个子项）                                │
│     ├── "修改布局大小" → 编辑字体大小 → 保存到 editFontsetSizeLayout│
│     └── "修改聊天大小" → 编辑聊天大小 → 保存到 ???                  │
│                                                                  │
│  "头像框" 分组（独立功能）                                          │
│     └── "头像框" → 进入 WCAvatarFrameMainController 设置页        │
└──────────────────────────────────────────────────────────────────┘
                            ↓ 用户调整配置
┌──────────────────────────────────────────────────────────────────┐
│ NSUserDefaults（HBConfigUtil 读写）                                │
│  editFontsetSizeLayout = 18.0                                    │
│  ??? = 10.0                                                      │
└──────────────────────────────────────────────────────────────────┘
                            ↓
┌──────────────────────────────────────────────────────────────────┐
│ 聊天列表 MMTableViewCell                                         │
│                                                                  │
│  hook_setFrame:                                                  │
│    ① 保存原始 frame 到 hbLastFrame                               │
│    ② superview 是 UITableView?                                   │
│    ③ 读取 ??? → 调整 frame 高度                                   │
│    ④ orig_setFrame                                               │
│                                                                  │
│  hook_layoutSubviews:                                            │
│    ① orig_layoutSubviews                                         │
│    ② isInChatListView?                                           │
│    ③ 读取 editFontsetSizeLayout → ≠16.0? → 调整 UILabel.font    │
│    ④ 读取 ??? → 调整 contentView 布局                            │
└──────────────────────────────────────────────────────────────────┘
                            ↓
┌──────────────────────────────────────────────────────────────────┐
│ 用户看到效果：                                                     │
│  - 聊天列表消息字体放大/缩小                                      │
│  - 聊天列表 Cell 高度/间距变化                                    │
└──────────────────────────────────────────────────────────────────┘
```

---

## 八、关键发现

| # | 发现 | 说明 |
|:-:|------|------|
| 1 | **"修改布局"只有两个子配置** | 修改布局大小（字体）+ 修改聊天大小（行高），**不包含头像框** |
| 2 | **"修改布局"和"头像框"共享同一组 Hook** | 两者共用 setFrame: 和 layoutSubviews 的 Hook，通过不同配置项区分行为 |
| 3 | **fontSize == 16.0 使用精确比较** | 使用 `== 16.0` 判断是否为默认值，浮点数精确比较（需注意精度问题） |
| 4 | **范围判断双重保险** | setFrame: 用 superview 类型判断，layoutSubviews 用 m_delegate 类型判断 |
| 5 | **运行时属性用 class_addMethod** | 不使用 objc_setAssociatedObject，而是直接向类添加 getter/setter |
| 6 | **混合 Hook API** | setFrame: 用 `method_setImplementation`，layoutSubviews 用 `MSHookMessageEx` |
| 7 | **修改布局大小调整 UILabel.font** | 遍历 contentView.subviews 查找 UILabel 并修改 font，不是通过 appearance 或 UIConfig |

---

*文档结束*