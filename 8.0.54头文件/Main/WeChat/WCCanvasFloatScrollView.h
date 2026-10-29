@interface WCCanvasFloatScrollView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    WCCanvasComponentItem * _componentItem; // +0x8
    WCCanvasComponent * _component; // +0x10
    WCAdvertiseInfo * _advertiseInfo; // +0x18
    long long _orientation; // +0x20
    id <WCCanvasComponentDelegate> _componentDelegate; // +0x28
    CGPoint _beginDraggingOffset; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 componentItem:(id)arg2 advertiseInfo:(id)arg3 orientation:(long long)arg4 delegate:(id)arg5;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)initComponent;
- (void)notifyComponentStatusChanged:(BOOL)arg1;
- (void)notifyComponentReportAddExposureCount;
- (BOOL)didScrollViewScrollToTop;
- (void)setContentComponentFullScreen;
- (BOOL)didContainWebStoreComponent;
- (void)contentViewScrollToTop;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)didScrollViewEndDecelerating;
- (id)componentItem;
- (void)setComponentItem:(id)arg1;
- (id)component;
- (void)setComponent:(id)arg1;
- (id)advertiseInfo;
- (void)setAdvertiseInfo:(id)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (id)componentDelegate;
- (void)setComponentDelegate:(id)arg1;
- (CGPoint)beginDraggingOffset;
- (void)setBeginDraggingOffset:(CGPoint)arg1;
- (void).cxx_destruct;
@end

