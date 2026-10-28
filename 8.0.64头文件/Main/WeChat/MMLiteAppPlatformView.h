@interface MMLiteAppPlatformView : NSObject <FlutterPlatformView>
{
    long long _viewId; // +0x8
    id _args; // +0x10
    MMLiteAppView * _liteAppView; // +0x18
    FlutterMethodChannel * _channel; // +0x20
    NSObject<FlutterBinaryMessenger> * _messenger; // +0x28
    CGRect _frame; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 argument:(id)arg3 messenger:(id)arg4;
- (void)initLiteAppView;
- (id)view;
- (void)sendEvent:(id)arg1 data:(id)arg2;
- (CGRect)frame;
- (void)setFrame:(CGRect)arg1;
- (long long)viewId;
- (void)setViewId:(long long)arg1;
- (id)args;
- (void)setArgs:(id)arg1;
- (id)liteAppView;
- (void)setLiteAppView:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)messenger;
- (void)setMessenger:(id)arg1;
- (void).cxx_destruct;
@end
