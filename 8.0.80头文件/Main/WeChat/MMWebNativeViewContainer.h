@interface MMWebNativeViewContainer : NSObject
{
    UIView * _scrollView; // +0x8
    UIView * _nativeView; // +0x10
    MMWebContainerHookView * _nativeViewContainer; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)setScrollView:(id)arg1;
- (void)setNativeView:(id)arg1;
- (void)updateContainer;
- (void)destroy;
- (BOOL)checkNativeViewStatusAndReportIfLossed;
- (id)scrollView;
- (id)nativeView;
- (id)nativeViewContainer;
- (void).cxx_destruct;
@end
