@interface WAAgentRuntimeHalfScreenCardView : UIView <MagicSclFrameSetViewDelegate>
{
    BOOL _isPresented; // +0x8
    BOOL _waitingForSizeChangeToRemoveSnapshot; // +0x9
    BOOL _waitingForRenderToShow; // +0xa
    id /* block */ _onDismissedByUser; // +0x10
    UIView * _navBar; // +0x18
    UIButton * _closeButton; // +0x20
    UILabel * _titleLabel; // +0x28
    UIScrollView * _scrollView; // +0x30
    MagicSclFrameSetView * _currentFrameSetView; // +0x38
    MagicSclFrameSetView * _swappedFrameSetView; // +0x40
    UIView * _pendingShowInView; // +0x48
    UIView * _originalSuperview; // +0x50
    MMPageSheetAdapter * _adapter; // +0x58
    CGSize _halfScreenContainerSize; // +0x60
    CGRect _originalFrame; // +0x70
}
+ (id)manager;
- (id)initWithFrameInternal:(CGRect)arg1;
- (CGSize)presentWithFrameSetView:(id)arg1 title:(id)arg2 showInView:(id)arg3;
- (void)dismiss;
- (void)setupNavBarWithTitle:(id)arg1;
- (void)setupScrollViewWithBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)attachFrameSetView:(id)arg1;
- (void)swapFrameSetViewWithSnapshot;
- (void)restoreFrameSetView;
- (void)doShowInView;
- (void)onCloseButtonTapped;
- (void)onMagicSclFrameSetViewSizeChange:(id)arg1;
- (void)updateScrollContentForFrameSetView:(id)arg1;
- (BOOL)isPresented;
- (void)setIsPresented:(BOOL)arg1;
- (id /* block */)onDismissedByUser;
- (void)setOnDismissedByUser:(id /* block */)arg1;
- (id)navBar;
- (void)setNavBar:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)currentFrameSetView;
- (void)setCurrentFrameSetView:(id)arg1;
- (id)swappedFrameSetView;
- (void)setSwappedFrameSetView:(id)arg1;
- (BOOL)waitingForSizeChangeToRemoveSnapshot;
- (void)setWaitingForSizeChangeToRemoveSnapshot:(BOOL)arg1;
- (BOOL)waitingForRenderToShow;
- (void)setWaitingForRenderToShow:(BOOL)arg1;
- (id)pendingShowInView;
- (void)setPendingShowInView:(id)arg1;
- (id)originalSuperview;
- (void)setOriginalSuperview:(id)arg1;
- (CGRect)originalFrame;
- (void)setOriginalFrame:(CGRect)arg1;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (CGSize)halfScreenContainerSize;
- (void)setHalfScreenContainerSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
