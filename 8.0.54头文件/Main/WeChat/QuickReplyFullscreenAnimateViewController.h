@interface QuickReplyFullscreenAnimateViewController : MMWindowViewController
{
    UIView * _animateTopView; // +0x78
    UIView * _customBackgroundView; // +0x80
    UIView * _animateContentView; // +0x88
    UIView * _animateBottomBlurView; // +0x90
    UIView * _animateBottomView; // +0x98
    UIView * _backgroundMaskView; // +0xa0
    UIView * _backgroundView; // +0xa8
    UIVisualEffectView * _foregroundBlurView; // +0xb0
    UIView * _presentingVCSnapshotView; // +0xb8
    UIView * _rootSnapshotView; // +0xc0
    double _targetCellOffset; // +0xc8
    MMPageSheetAdapter * _pageSheet; // +0xd0
    CMessageWrap * _targetMessage; // +0xd8
    CContact * _sessionContact; // +0xe0
}
+ (void)showFullscreenAnimateWith:(id)arg1 openSessionContact:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)backgroundFadeInAnimate;
- (void)sessionViewPopUpAnimate;
- (void)sessionSnapshotFadeOutAnimate;
- (void)slideRightAnimate;
- (double)popupAnimateEndY;
- (double)bottomViewHeight;
- (BOOL)shouldHandleStatusBarAppearance;
- (void)dismissToRoot:(id /* block */)arg1;
- (void)openSessionWithComplete:(id /* block */)arg1;
- (id)animateTopView;
- (void)setAnimateTopView:(id)arg1;
- (id)customBackgroundView;
- (void)setCustomBackgroundView:(id)arg1;
- (id)animateContentView;
- (void)setAnimateContentView:(id)arg1;
- (id)animateBottomBlurView;
- (void)setAnimateBottomBlurView:(id)arg1;
- (id)animateBottomView;
- (void)setAnimateBottomView:(id)arg1;
- (id)backgroundMaskView;
- (void)setBackgroundMaskView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)foregroundBlurView;
- (void)setForegroundBlurView:(id)arg1;
- (id)presentingVCSnapshotView;
- (void)setPresentingVCSnapshotView:(id)arg1;
- (id)rootSnapshotView;
- (void)setRootSnapshotView:(id)arg1;
- (double)targetCellOffset;
- (void)setTargetCellOffset:(double)arg1;
- (id)pageSheet;
- (void)setPageSheet:(id)arg1;
- (id)targetMessage;
- (void)setTargetMessage:(id)arg1;
- (id)sessionContact;
- (void)setSessionContact:(id)arg1;
- (void).cxx_destruct;
@end

