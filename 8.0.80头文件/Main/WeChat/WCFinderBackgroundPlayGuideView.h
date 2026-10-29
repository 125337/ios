@interface WCFinderBackgroundPlayGuideView : UIView <WCFinderStreamProfileDragBarViewDelegate>
{
    BOOL _backgroundPlayGuideDismissing; // +0x8
    BOOL _backgroundPlayGuideDidFinishDismiss; // +0x9
    id /* block */ _confirmAction; // +0x10
    id /* block */ _didDismissAction; // +0x18
    UIView * _backgroundPlayGuideDimmingView; // +0x20
    UIButton * _backgroundPlayGuideCloseButton; // +0x28
    UIView * _backgroundPlayGuideSheetView; // +0x30
    UIImageView * _backgroundPlayGuideImageView; // +0x38
    WCFinderStreamProfileDragBarView * _backgroundPlayGuideDragBarView; // +0x40
    CGSize _backgroundPlayGuidePresentedSize; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (id)guideImage;
- (void)showInView:(id)arg1;
- (void)layoutSubviews;
- (void)dismissAnimated:(BOOL)arg1;
- (void)finishDismiss;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dragBarViewWillBegin:(id)arg1;
- (double)dragBarViewExpandMinHeight:(id)arg1;
- (double)dragBarViewExpandMaxHeight:(id)arg1;
- (void)dragBarView:(id)arg1 draggingCloseChangeProgress:(double)arg2;
- (void)dragBarView:(id)arg1 beginAnimatedClose:(BOOL)arg2;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(BOOL)arg2;
- (id /* block */)confirmAction;
- (void)setConfirmAction:(id /* block */)arg1;
- (id /* block */)didDismissAction;
- (void)setDidDismissAction:(id /* block */)arg1;
- (id)backgroundPlayGuideDimmingView;
- (void)setBackgroundPlayGuideDimmingView:(id)arg1;
- (id)backgroundPlayGuideCloseButton;
- (void)setBackgroundPlayGuideCloseButton:(id)arg1;
- (id)backgroundPlayGuideSheetView;
- (void)setBackgroundPlayGuideSheetView:(id)arg1;
- (id)backgroundPlayGuideImageView;
- (void)setBackgroundPlayGuideImageView:(id)arg1;
- (id)backgroundPlayGuideDragBarView;
- (void)setBackgroundPlayGuideDragBarView:(id)arg1;
- (BOOL)backgroundPlayGuideDismissing;
- (void)setBackgroundPlayGuideDismissing:(BOOL)arg1;
- (BOOL)backgroundPlayGuideDidFinishDismiss;
- (void)setBackgroundPlayGuideDidFinishDismiss:(BOOL)arg1;
- (CGSize)backgroundPlayGuidePresentedSize;
- (void)setBackgroundPlayGuidePresentedSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
