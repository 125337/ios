# MioFriendDetectionVC `presentingModalViewController` 闪退修复方案

> 崩溃文件：`WeChat-2026-05-23-163418(1).ips`
> 影响版本：iOS 17.x
> 微信版本：8.0.60

---

## 一、问题定位

`MioFriendDetectionVC.m` 中 **6 处** 使用了 `[self presentViewController:alert animated:YES completion:nil]`：

| 行号 | 方法 | 场景 |
|------|------|------|
| 261 | `retestSelectedFriends` | 重新检测确认弹窗 |
| 310 | `deleteAllDeletedContacts` | 全部删除确认弹窗 |
| 409 | `startDetectionTapped` | 开始检测确认弹窗 |
| 424 | `clearDataTapped` | 清空数据确认弹窗 |
| 462 | `showAlert:msg:` | 通用结果提示弹窗（3处调用） |

### 原因

`MioFriendDetectionVC` 继承自 **纯系统 `UIViewController`**（非微信的 `MMUIViewController`）。调用 `presentViewController:` 时：

```
presentViewController:alert
  → UIKit 呈现管线遍历视图层级
    → 在微信的 MMUINavigationController 上触发 WeChat 内部钩子
      → 微信 8.0.60 内部代码调用 [someObj presentingModalViewController]
        → iOS 17 已删除此 selector → NSInvalidArgumentException → SIGABRT
```

这就是为什么微信优化不闪退——它用 `WCUIAlertView.show` 直接加到 UIWindow，完全绕过 UIKit 呈现系统。

---

## 二、修复方案

将所有 `UIAlertController + presentViewController:` 替换为 `WeChatAlertHelper`（内部使用 `WCUIAlertView.show`）。

### 需要新增的 WeChatAlertHelper 方法

当前 `WeChatAlertHelper` 只支持纯提示弹窗（单按钮），好友检测需要**确认型弹窗**（取消 + 确认两个按钮 + 回调）。

### 修改清单

#### 1. WeChatAlertHelper.h — 新增确认弹窗方法

```objc
/// 确认弹窗（双按钮：取消 + 确认，带回调）
/// @param message 提示内容
/// @param confirmTitle 确认按钮文字，如 @"开始检测"
/// @param onConfirm 确认回调（主线程）
+ (void)showConfirmAlert:(NSString *)message
            confirmTitle:(NSString *)confirmTitle
               onConfirm:(void(^)(void))onConfirm;
```

#### 2. WeChatAlertHelper.m — 实现

```objc
#pragma mark - 确认弹窗

+ (void)showConfirmAlert:(NSString *)message
            confirmTitle:(NSString *)confirmTitle
               onConfirm:(void(^)(void))onConfirm {
    Class alertClass = [self alertClass];
    if (!alertClass) return;

    @try {
        WCUIAlertView *alert = ((id(*)(id, SEL, id, id))objc_msgSend)(
            [alertClass alloc],
            @selector(initWithTitle:message:),
            @"Mio助手", message
        );
        if (!alert) return;

        // 取消按钮
        SEL cancelSel = NSSelectorFromString(@"addCancelBtnTitle:target:sel:");
        if ([alert respondsToSelector:cancelSel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, cancelSel, @"取消", nil, NULL);
        }

        // 确认按钮 → 注入 C IMP
        walertEnsureCIMPInjected(alertClass);
        if (onConfirm) {
            // 用一个特殊的 associated key 存 confirm block
            static char kConfirmBlockKey;
            objc_setAssociatedObject(alert, &kConfirmBlockKey, [onConfirm copy],
                                     OBJC_ASSOCIATION_COPY_NONATOMIC);
        }

        // 纯 C IMP：确认按钮点击回调
        SEL confirmSelHandle = NSSelectorFromString(@"__walert_confirm_handle");
        static dispatch_once_t onceToken;
        dispatch_once(&onceToken, ^{
            class_addMethod(alertClass, confirmSelHandle,
                imp_implementationWithBlock(^(id _self) {
                    void(^cb)(void) = objc_getAssociatedObject(_self, &kConfirmBlockKey);
                    if (cb) cb();
                }), "v@:");
        });

        SEL btnSel = NSSelectorFromString(@"addBtnTitle:target:sel:");
        if ([alert respondsToSelector:btnSel]) {
            ((void(*)(id, SEL, id, id, SEL))objc_msgSend)(alert, btnSel, confirmTitle, alert, confirmSelHandle);
        }

        SEL showSel = NSSelectorFromString(@"show");
        if ([alert respondsToSelector:showSel]) {
            ((void(*)(id, SEL))objc_msgSend)(alert, showSel);
        }
    } @catch (NSException *e) {}
}
```

#### 3. MioFriendDetectionVC.m — 替换 6 处 `presentViewController:`

**全局替换策略**：新增一个不依赖 `presentViewController:` 的私有弹窗方法，所有弹窗统一调用。

在 `MioFriendDetectionVC.m` 的 `@implementation` 块开头添加：

```objc
#pragma mark - 安全弹窗（绕过 presentViewController，避免 iOS 17 presentingModalViewController 闪退）

- (void)_safeAlert:(NSString *)title msg:(NSString *)msg {
    [WeChatAlertHelper showTipAlert:[NSString stringWithFormat:@"%@\n%@", title, msg]];
}

- (void)_safeConfirm:(NSString *)msg confirmTitle:(NSString *)confirmTitle onConfirm:(void(^)(void))onConfirm {
    [WeChatAlertHelper showConfirmAlert:msg confirmTitle:confirmTitle onConfirm:onConfirm];
}
```

然后逐一替换：

**① `startDetectionTapped` (line 399-409) → 替换：**

```objc
- (void)startDetectionTapped {
    if (self.detecting) return;
    [self _safeConfirm:@"将向每个好友发起转账预下单检测，对方完全无感知。是否继续？"
          confirmTitle:@"开始检测"
             onConfirm:^{ [self beginDetection]; }];
}
```

**② `clearDataTapped` (line 412-424) → 替换：**

```objc
- (void)clearDataTapped {
    [self _safeConfirm:@"是否确定清空所有检测数据？"
          confirmTitle:@"确定清空"
             onConfirm:^{
                 [MioFriendDetector clearSavedSummary];
                 [self.detector stopDetection];
                 self.detecting = NO;
                 self.detector = [[MioFriendDetector alloc] init];
                 [self refreshMainUI];
             }];
}
```

**③ `retestSelectedFriends` (line 250-261) → 替换：**

```objc
- (void)retestSelectedFriends {
    if (self.detailFriends.count == 0) return;
    NSString *msg = [NSString stringWithFormat:@"确认重新检测选中的 %lu 个好友吗？",
                     (unsigned long)self.detailFriends.count];
    [self _safeConfirm:msg confirmTitle:@"重新检测" onConfirm:^{
        [self beginRetestSelected];
    }];
}
```

**④ `deleteAllDeletedContacts` (line 297-310) → 替换：**

```objc
- (void)deleteAllDeletedContacts {
    if (self.detailFriends.count == 0) {
        [self _safeAlert:@"提示" msg:@"暂无被拉黑或删除的好友"];
        return;
    }
    [self _safeConfirm:@"确认从通讯录删除所有已拉黑/删除你的好友吗？"
          confirmTitle:@"确认删除"
             onConfirm:^{ [self performDeleteAll]; }];
}
```

**⑤ `showAlert:msg:` (line 458-463) → 替换：**

```objc
- (void)showAlert:(NSString *)title msg:(NSString *)msg {
    [self _safeAlert:title msg:msg];
}
```

**⑥ `beginDetection` completion 中的 fallback (line 446) — 已被 ⑤ 覆盖，无需额外修改。**

---

## 三、修改文件汇总

| 文件 | 操作 | 说明 |
|------|------|------|
| `WeChatAlertHelper.h` | 新增声明 | `showConfirmAlert:confirmTitle:onConfirm:` |
| `WeChatAlertHelper.m` | 新增实现 | 确认弹窗双按钮 + 回调 C IMP |
| `MioFriendDetectionVC.m` | 新增 2 个私有方法 + 替换 6 处 | `_safeAlert:_msg:` / `_safeConfirm:confirmTitle:onConfirm:` |

不再使用任何 `UIAlertController` 和 `presentViewController:`。

---

## 四、验证方法

1. 编译推送
2. 真机（iOS 17）打开好友检测页面
3. 点击"开始检测" → 确认弹窗应正常弹出，不闪退
4. 检测完成后结果弹窗正常显示
5. 进入详情页 → "重新检测" / "全部删除" 弹窗正常
6. "清空数据" 弹窗正常

---