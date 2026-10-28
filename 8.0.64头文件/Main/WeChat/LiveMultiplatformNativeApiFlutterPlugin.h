@interface LiveMultiplatformNativeApiFlutterPlugin : NSObject <MMFlutterPlugin, LiveMultiplatformNativeApi>
{
    LiveMultiplatformFlutterApi * _flutterApi; // +0x8
    UIViewController * _viewController; // +0x10
}
- (void)onAttachedToViewController:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)openNativePageParams:(id)arg1 error:(id *)arg2;
- (void)openLiveRoom:(id)arg1 commentScene:(unsigned long long)arg2 index:(unsigned long long)arg3 chnlExtra:(id)arg4;
- (void)openProfile:(id)arg1 dataItem:(id)arg2 commentScene:(unsigned long long)arg3;
- (void)getSelfFinderUsernameWithCompletion:(id /* block */)arg1;
- (id)flutterApi;
- (void)setFlutterApi:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end
