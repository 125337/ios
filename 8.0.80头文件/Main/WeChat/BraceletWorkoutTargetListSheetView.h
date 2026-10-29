@interface BraceletWorkoutTargetListSheetView : MMPageSheetBaseView
{
    NSString * _reportSessionId; // +0x8
    id /* block */ _onTargetAdded; // +0x10
    UIView * _wrapperView; // +0x18
    UIScrollView * _containerView; // +0x20
    UIView * _contentView; // +0x28
}
- (id)initWithTargetList:(id)arg1;
- (void)pageSheetDidAppear;
- (void)initConfig;
- (void)initView;
- (id)p_highlightButtonWithFrame:(CGRect)arg1;
- (void)p_initScrollContainer:(double)arg1;
- (void)p_finishLayout:(double)arg1 height:(double)arg2;
- (void)onAddTargetClick;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (id /* block */)onTargetAdded;
- (void)setOnTargetAdded:(id /* block */)arg1;
- (id)wrapperView;
- (void)setWrapperView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
