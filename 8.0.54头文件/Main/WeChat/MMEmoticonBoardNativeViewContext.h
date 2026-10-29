@interface MMEmoticonBoardNativeViewContext : NSObject
{
    UIViewController * _viewController; // +0x8
    long long _viewId; // +0x10
    FlutterMethodChannel * _channel; // +0x18
    CGRect _frame; // +0x20
}
- (id)description;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (long long)viewId;
- (void)setViewId:(long long)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (CGRect)frame;
- (void)setFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end

