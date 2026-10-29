@interface CBTCoopV2PhotoAccountArticleCellView : CBTCoopV2AsstBoardCellView <UIGestureRecognizerDelegate>
{
    BOOL _contentDirty; // +0x8
    BOOL _longPressFired; // +0x9
    MMUIView * _contentContainer; // +0x10
    MMWebImageView * _coverImageView; // +0x18
    CBTCoopV2AsstBoardCommonCellContentView * _commonContentView; // +0x20
    UIView * _highlightOverlayView; // +0x28
    UITapGestureRecognizer * _tapGesture; // +0x30
    UILongPressGestureRecognizer * _pressGesture; // +0x38
    NSString * _appliedCoverImageURL; // +0x40
    long long _appliedCoverContentMode; // +0x48
}
- (id)photoViewModel;
- (void)prepareForReuse;
- (void)setupCellWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)ensureSubviews;
- (void)applyLayout;
- (double)preferredBubbleWidth;
- (id)titleTextColor;
- (id)subtitleTextColor;
- (id)subtitleText;
- (void)applyCoverImageIfNeeded;
- (void)showPlaceholderImage;
- (void)updateSourceInfo;
- (void)updateCoverImage;
- (id)menuAnchorView;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (double)checkboxArrowTopMarginInBubbleView;
- (double)checkboxArrowHeight;
- (void)selectAllForLongPressMenu;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onContentTap;
- (void)setupAccessibility;
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (id)contentContainer;
- (id)coverImageView;
- (id)commonContentView;
- (void)setCommonContentView:(id)arg1;
- (id)highlightOverlayView;
- (void)setHighlightOverlayView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)pressGesture;
- (void)setPressGesture:(id)arg1;
- (id)appliedCoverImageURL;
- (void)setAppliedCoverImageURL:(id)arg1;
- (long long)appliedCoverContentMode;
- (void)setAppliedCoverContentMode:(long long)arg1;
- (BOOL)contentDirty;
- (void)setContentDirty:(BOOL)arg1;
- (BOOL)longPressFired;
- (void)setLongPressFired:(BOOL)arg1;
- (void).cxx_destruct;
@end
