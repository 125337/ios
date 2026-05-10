#import "WPAlert.h"
#import <objc/runtime.h>

@interface _WPAlertAction : NSObject
@property (nonatomic, copy) void (^block)(void);
@property (nonatomic, weak) UIViewController *alertVC;
+ (instancetype)actionWithVC:(UIViewController *)vc block:(void (^)(void))block;
- (void)execute;
@end

@implementation _WPAlertAction

+ (instancetype)actionWithVC:(UIViewController *)vc block:(void (^)(void))block {
    _WPAlertAction *a = [[_WPAlertAction alloc] init];
    a.alertVC = vc;
    a.block = block;
    return a;
}

- (void)execute {
    if (self.block) self.block();
    [self.alertVC dismissViewControllerAnimated:YES completion:nil];
}

@end

@interface _WPAlertInputAction : NSObject
@property (nonatomic, copy) void (^block)(NSString *);
@property (nonatomic, weak) UIViewController *alertVC;
@property (nonatomic, weak) UITextField *textField;
+ (instancetype)actionWithVC:(UIViewController *)vc textField:(UITextField *)tf block:(void (^)(NSString *))block;
- (void)confirm;
- (void)cancel;
@end

@implementation _WPAlertInputAction

+ (instancetype)actionWithVC:(UIViewController *)vc textField:(UITextField *)tf block:(void (^)(NSString *))block {
    _WPAlertInputAction *a = [[_WPAlertInputAction alloc] init];
    a.alertVC = vc;
    a.textField = tf;
    a.block = block;
    return a;
}

- (void)confirm {
    NSString *text = self.textField.text;
    if (self.block && text.length > 0) self.block(text);
    [self.alertVC dismissViewControllerAnimated:YES completion:nil];
}

- (void)cancel {
    [self.alertVC dismissViewControllerAnimated:YES completion:nil];
}

@end

static UIViewController *_wpAlertTopVC(UIViewController *vc) {
    if (vc) return vc;
    UIViewController *rootVC = [UIApplication sharedApplication].keyWindow.rootViewController;
    while (rootVC.presentedViewController) {
        rootVC = rootVC.presentedViewController;
    }
    return rootVC;
}

static UIViewController *_wpAlertCreateVC() {
    UIViewController *alertVC = [[UIViewController alloc] init];
    alertVC.modalPresentationStyle = UIModalPresentationOverFullScreen;
    alertVC.modalTransitionStyle = UIModalTransitionStyleCrossDissolve;

    UIView *overlay = [[UIView alloc] initWithFrame:alertVC.view.bounds];
    overlay.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    overlay.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.4];
    [alertVC.view addSubview:overlay];

    return alertVC;
}

static UIView *_wpAlertCreateBox(UIViewController *alertVC) {
    UIView *alertBox = [[UIView alloc] init];
    alertBox.backgroundColor = [UIColor whiteColor];
    alertBox.layer.cornerRadius = 14;
    alertBox.clipsToBounds = YES;
    alertBox.translatesAutoresizingMaskIntoConstraints = NO;
    [alertVC.view addSubview:alertBox];

    [NSLayoutConstraint activateConstraints:@[
        [alertBox.centerXAnchor constraintEqualToAnchor:alertVC.view.centerXAnchor],
        [alertBox.centerYAnchor constraintEqualToAnchor:alertVC.view.centerYAnchor],
        [alertBox.widthAnchor constraintEqualToConstant:300],
    ]];

    return alertBox;
}

static UILabel *_wpAlertAddTitle(UIView *alertBox, NSString *title) {
    UILabel *titleLabel = [[UILabel alloc] init];
    titleLabel.text = title;
    titleLabel.font = [UIFont boldSystemFontOfSize:17];
    titleLabel.textColor = [UIColor blackColor];
    titleLabel.textAlignment = NSTextAlignmentCenter;
    titleLabel.translatesAutoresizingMaskIntoConstraints = NO;
    [alertBox addSubview:titleLabel];

    [NSLayoutConstraint activateConstraints:@[
        [titleLabel.topAnchor constraintEqualToAnchor:alertBox.topAnchor constant:20],
        [titleLabel.leadingAnchor constraintEqualToAnchor:alertBox.leadingAnchor constant:16],
        [titleLabel.trailingAnchor constraintEqualToAnchor:alertBox.trailingAnchor constant:-16],
    ]];

    return titleLabel;
}

static UILabel *_wpAlertAddMessage(UIView *alertBox, NSString *message, UIView *topView) {
    UILabel *msgLabel = [[UILabel alloc] init];
    msgLabel.text = message;
    msgLabel.font = [UIFont systemFontOfSize:13];
    msgLabel.textColor = [UIColor blackColor];
    msgLabel.numberOfLines = 0;
    msgLabel.textAlignment = NSTextAlignmentCenter;
    msgLabel.translatesAutoresizingMaskIntoConstraints = NO;
    [alertBox addSubview:msgLabel];

    [NSLayoutConstraint activateConstraints:@[
        [msgLabel.topAnchor constraintEqualToAnchor:topView.bottomAnchor constant:8],
        [msgLabel.leadingAnchor constraintEqualToAnchor:alertBox.leadingAnchor constant:16],
        [msgLabel.trailingAnchor constraintEqualToAnchor:alertBox.trailingAnchor constant:-16],
    ]];

    return msgLabel;
}

static UITextField *_wpAlertAddInput(UIView *alertBox, NSString *defaultValue, NSString *placeholder, UIView *topView) {
    UITextField *textField = [[UITextField alloc] init];
    textField.text = defaultValue;
    textField.placeholder = placeholder;
    textField.font = [UIFont systemFontOfSize:14];
    textField.textColor = [UIColor blackColor];
    textField.borderStyle = UITextBorderStyleRoundedRect;
    textField.translatesAutoresizingMaskIntoConstraints = NO;
    [alertBox addSubview:textField];

    [NSLayoutConstraint activateConstraints:@[
        [textField.topAnchor constraintEqualToAnchor:topView.bottomAnchor constant:8],
        [textField.leadingAnchor constraintEqualToAnchor:alertBox.leadingAnchor constant:16],
        [textField.trailingAnchor constraintEqualToAnchor:alertBox.trailingAnchor constant:-16],
        [textField.heightAnchor constraintEqualToConstant:36],
    ]];

    return textField;
}

static void _wpAlertAddButtonBar(UIView *alertBox, UIView *topView, NSString *buttonTitle, UIViewController *alertVC, void (^handler)(void)) {
    UIView *divider = [[UIView alloc] init];
    divider.translatesAutoresizingMaskIntoConstraints = NO;
    divider.backgroundColor = [UIColor colorWithRed:0.82 green:0.82 blue:0.82 alpha:1.0];
    [alertBox addSubview:divider];

    _WPAlertAction *action = [_WPAlertAction actionWithVC:alertVC block:handler];

    UIButton *okBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    [okBtn setTitle:buttonTitle forState:UIControlStateNormal];
    okBtn.titleLabel.font = [UIFont systemFontOfSize:17];
    [okBtn setTitleColor:[UIColor colorWithRed:0.0 green:0.48 blue:1.0 alpha:1.0] forState:UIControlStateNormal];
    okBtn.translatesAutoresizingMaskIntoConstraints = NO;
    objc_setAssociatedObject(okBtn, "wpAction", action, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [okBtn addTarget:action action:@selector(execute) forControlEvents:UIControlEventTouchUpInside];
    [alertBox addSubview:okBtn];

    [NSLayoutConstraint activateConstraints:@[
        [divider.topAnchor constraintEqualToAnchor:topView.bottomAnchor constant:16],
        [divider.leadingAnchor constraintEqualToAnchor:alertBox.leadingAnchor],
        [divider.trailingAnchor constraintEqualToAnchor:alertBox.trailingAnchor],
        [divider.heightAnchor constraintEqualToConstant:0.5],

        [okBtn.topAnchor constraintEqualToAnchor:divider.bottomAnchor],
        [okBtn.leadingAnchor constraintEqualToAnchor:alertBox.leadingAnchor],
        [okBtn.trailingAnchor constraintEqualToAnchor:alertBox.trailingAnchor],
        [okBtn.heightAnchor constraintEqualToConstant:44],
        [okBtn.bottomAnchor constraintEqualToAnchor:alertBox.bottomAnchor],
    ]];
}

static void _wpAlertAddDoubleButtonBar(UIView *alertBox, UIView *topView, NSString *cancelTitle, NSString *confirmTitle, UIViewController *alertVC, UITextField *textField, void (^handler)(NSString *)) {
    UIView *divider = [[UIView alloc] init];
    divider.translatesAutoresizingMaskIntoConstraints = NO;
    divider.backgroundColor = [UIColor colorWithRed:0.82 green:0.82 blue:0.82 alpha:1.0];
    [alertBox addSubview:divider];

    _WPAlertInputAction *action = [_WPAlertInputAction actionWithVC:alertVC textField:textField block:handler];

    UIButton *cancelBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    [cancelBtn setTitle:cancelTitle forState:UIControlStateNormal];
    cancelBtn.titleLabel.font = [UIFont systemFontOfSize:17];
    [cancelBtn setTitleColor:[UIColor colorWithRed:0.55 green:0.55 blue:0.55 alpha:1.0] forState:UIControlStateNormal];
    cancelBtn.translatesAutoresizingMaskIntoConstraints = NO;
    [cancelBtn addTarget:action action:@selector(cancel) forControlEvents:UIControlEventTouchUpInside];
    [alertBox addSubview:cancelBtn];

    UIView *sep = [[UIView alloc] init];
    sep.translatesAutoresizingMaskIntoConstraints = NO;
    sep.backgroundColor = [UIColor colorWithRed:0.82 green:0.82 blue:0.82 alpha:1.0];
    [alertBox addSubview:sep];

    UIButton *confirmBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    [confirmBtn setTitle:confirmTitle forState:UIControlStateNormal];
    confirmBtn.titleLabel.font = [UIFont systemFontOfSize:17];
    [confirmBtn setTitleColor:[UIColor colorWithRed:0.0 green:0.48 blue:1.0 alpha:1.0] forState:UIControlStateNormal];
    confirmBtn.translatesAutoresizingMaskIntoConstraints = NO;
    objc_setAssociatedObject(confirmBtn, "wpAction", action, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [confirmBtn addTarget:action action:@selector(confirm) forControlEvents:UIControlEventTouchUpInside];
    [alertBox addSubview:confirmBtn];

    [NSLayoutConstraint activateConstraints:@[
        [divider.topAnchor constraintEqualToAnchor:topView.bottomAnchor constant:16],
        [divider.leadingAnchor constraintEqualToAnchor:alertBox.leadingAnchor],
        [divider.trailingAnchor constraintEqualToAnchor:alertBox.trailingAnchor],
        [divider.heightAnchor constraintEqualToConstant:0.5],

        [cancelBtn.topAnchor constraintEqualToAnchor:divider.bottomAnchor],
        [cancelBtn.leadingAnchor constraintEqualToAnchor:alertBox.leadingAnchor],
        [cancelBtn.heightAnchor constraintEqualToConstant:44],
        [cancelBtn.bottomAnchor constraintEqualToAnchor:alertBox.bottomAnchor],

        [sep.topAnchor constraintEqualToAnchor:divider.bottomAnchor],
        [sep.bottomAnchor constraintEqualToAnchor:alertBox.bottomAnchor],
        [sep.leadingAnchor constraintEqualToAnchor:cancelBtn.trailingAnchor],
        [sep.widthAnchor constraintEqualToConstant:0.5],

        [confirmBtn.topAnchor constraintEqualToAnchor:divider.bottomAnchor],
        [confirmBtn.leadingAnchor constraintEqualToAnchor:sep.trailingAnchor],
        [confirmBtn.trailingAnchor constraintEqualToAnchor:alertBox.trailingAnchor],
        [confirmBtn.heightAnchor constraintEqualToConstant:44],
        [confirmBtn.bottomAnchor constraintEqualToAnchor:alertBox.bottomAnchor],

        [cancelBtn.widthAnchor constraintEqualToAnchor:confirmBtn.widthAnchor],
    ]];
}

@implementation WPAlert

+ (void)showTip:(NSString *)title message:(NSString *)message from:(UIViewController *)vc {
    [self showTip:title message:message buttonTitle:@"我晓得了" from:vc];
}

+ (void)showTip:(NSString *)title message:(NSString *)message buttonTitle:(NSString *)buttonTitle from:(UIViewController *)vc {
    dispatch_async(dispatch_get_main_queue(), ^{
        UIViewController *alertVC = _wpAlertCreateVC();
        UIView *alertBox = _wpAlertCreateBox(alertVC);
        UILabel *titleLabel = _wpAlertAddTitle(alertBox, title);
        UILabel *msgLabel = _wpAlertAddMessage(alertBox, message, titleLabel);
        _wpAlertAddButtonBar(alertBox, msgLabel, buttonTitle, alertVC, nil);

        UIViewController *presenter = _wpAlertTopVC(vc);
        if (presenter) {
            [presenter presentViewController:alertVC animated:YES completion:nil];
        }
    });
}

+ (void)showInput:(NSString *)title placeholder:(NSString *)placeholder defaultValue:(NSString *)defaultValue confirmTitle:(NSString *)confirmTitle from:(UIViewController *)vc handler:(void (^)(NSString *text))handler {
    dispatch_async(dispatch_get_main_queue(), ^{
        UIViewController *alertVC = _wpAlertCreateVC();
        UIView *alertBox = _wpAlertCreateBox(alertVC);
        UILabel *titleLabel = _wpAlertAddTitle(alertBox, title);
        UITextField *textField = _wpAlertAddInput(alertBox, defaultValue, placeholder, titleLabel);
        _wpAlertAddDoubleButtonBar(alertBox, textField, @"取消", confirmTitle, alertVC, textField, handler);

        UIViewController *presenter = _wpAlertTopVC(vc);
        if (presenter) {
            [presenter presentViewController:alertVC animated:YES completion:nil];
        }
    });
}

+ (void)showCustom:(NSString *)title message:(NSString *)message buttonTitle:(NSString *)buttonTitle from:(UIViewController *)vc {
    dispatch_async(dispatch_get_main_queue(), ^{
        UIViewController *alertVC = _wpAlertCreateVC();
        UIView *alertBox = _wpAlertCreateBox(alertVC);
        UILabel *titleLabel = _wpAlertAddTitle(alertBox, title);
        UILabel *msgLabel = _wpAlertAddMessage(alertBox, message, titleLabel);
        _wpAlertAddButtonBar(alertBox, msgLabel, buttonTitle, alertVC, nil);

        UIViewController *presenter = _wpAlertTopVC(vc);
        if (presenter) {
            [presenter presentViewController:alertVC animated:YES completion:nil];
        }
    });
}

@end
