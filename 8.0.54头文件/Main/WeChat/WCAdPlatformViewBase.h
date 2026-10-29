@interface WCAdPlatformViewBase : NSObject <FlutterPlatformView>
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)handleJsEvent:(id)arg1 params:(id)arg2 needCallback:(BOOL)arg3 result:(id /* block */)arg4;
- (id)view;
@end

