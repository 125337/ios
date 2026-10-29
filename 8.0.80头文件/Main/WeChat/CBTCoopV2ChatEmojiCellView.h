@interface CBTCoopV2ChatEmojiCellView : CBTCoopV2AsstBoardCellView <UIGestureRecognizerDelegate, CBTCoopV2ChatEmojiImageDelegate>
{
    BOOL _longPressFired; // +0x8
    BOOL _imageLoadFailed; // +0x9
    UIImageView * _emojiImageView; // +0x10
    MMUIActivityIndicatorView * _loadingView; // +0x18
    UIImageView * _failedImageView; // +0x20
    UILabel * _failedRetryLabel; // +0x28
    UIView * _highlightOverlayView; // +0x30
    UITapGestureRecognizer * _tapGesture; // +0x38
    UILongPressGestureRecognizer * _pressGesture; // +0x40
    NSString * _renderedImagePath; // +0x48
    CBTCoopV2ChatEmojiViewModel * _boundViewModel; // +0x50
}
- (void)prepareForReuse;
- (void)setupCellWithViewModel:(id)arg1;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (void)layoutSubviews;
- (void)ensureSubviews;
- (void)applyLayout;
- (void)applyContentIfNeeded;
- (void)showFailedState;
- (void)chatEmojiViewModel:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)applyAccessibility;
- (id)copyableText;
- (id)menuAnchorView;
- (BOOL)needsBubbleBackground;
- (void)selectAllForLongPressMenu;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onTapCard;
- (id)typedViewModel;
- (id)emojiImageView;
- (void)setEmojiImageView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)failedImageView;
- (void)setFailedImageView:(id)arg1;
- (id)failedRetryLabel;
- (void)setFailedRetryLabel:(id)arg1;
- (id)highlightOverlayView;
- (void)setHighlightOverlayView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)pressGesture;
- (void)setPressGesture:(id)arg1;
- (BOOL)longPressFired;
- (void)setLongPressFired:(BOOL)arg1;
- (id)renderedImagePath;
- (void)setRenderedImagePath:(id)arg1;
- (BOOL)imageLoadFailed;
- (void)setImageLoadFailed:(BOOL)arg1;
- (id)boundViewModel;
- (void)setBoundViewModel:(id)arg1;
- (void).cxx_destruct;
@end
