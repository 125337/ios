@interface MMLandscapeDragBarPageSheet : MMPageSheetBaseView
{
    BOOL _enableLandscapeDragBarStyle; // +0x8
    MMPageSheetVerticalDragBar * _verticalDragBar; // +0x10
    UIView * _landscapeWrapView; // +0x18
}
- (void)setEnableLandscapeDragBarStyle:(BOOL)arg1;
- (id)pageSheetConfig;
- (void)showWithAnimated:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)showInView:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)showFromViewController:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)updateLandscapeDragBarConfig;
- (BOOL)shouldShowPortraitDragBar;
- (double)pageSheetContentWidth;
- (double)pageSheetDetailContentWidth;
- (id)pageSheetContentView;
- (double)pageSheetContentHeight;
- (id)landscapeWrapView;
- (id)verticalDragBar;
- (void)setupVerticalDragBar:(id)arg1;
- (void)pageSheetDidShow;
- (void)pageSheetDidRotation;
- (void)pageSheetWillAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (void)pageSheetLandscapeDragToDismissOffsetChanged:(double)arg1;
- (void)updateDetailViewHeight:(double)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (BOOL)enableLandscapeDragBarStyle;
- (void)setVerticalDragBar:(id)arg1;
- (void)setLandscapeWrapView:(id)arg1;
- (void).cxx_destruct;
@end
