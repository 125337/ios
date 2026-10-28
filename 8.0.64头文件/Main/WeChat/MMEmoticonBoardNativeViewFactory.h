@interface MMEmoticonBoardNativeViewFactory : NSObject <FlutterPlatformViewFactory>
{
    NSObject<FlutterBinaryMessenger> * _messenger; // +0x8
    UIViewController * _viewController; // +0x10
}
+ (id)channelNameFromViewId:(long long)arg1;
- (id)createWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;
- (id)createArgsCodec;
- (id)messenger;
- (void)setMessenger:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end
