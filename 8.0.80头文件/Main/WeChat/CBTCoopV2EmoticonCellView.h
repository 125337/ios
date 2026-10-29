@interface CBTCoopV2EmoticonCellView : CBTCoopV2AsstBoardCellView <UIGestureRecognizerDelegate, MMWebImageViewDelegate, CBTCoopV2EmoticonStoreImageDelegate>
{
    BOOL _longPressFired; // +0x8
    BOOL _imageLoadFailed; // +0x9
    BOOL _isOpening; // +0xa
    MMWebImageView * _emoticonImageView; // +0x10
    UIImageView * _storeImageView; // +0x18
    MMUIActivityIndicatorView * _loadingView; // +0x20
    UIImageView * _failedImageView; // +0x28
    UILabel * _failedRetryLabel; // +0x30
    UIView * _highlightOverlayView; // +0x38
    UITapGestureRecognizer * _tapGesture; // +0x40
    UILongPressGestureRecognizer * _pressGesture; // +0x48
    NSString * _renderedImageURL; // +0x50
    NSString * _renderedStorePath; // +0x58
    CBTCoopV2EmoticonViewModel * _boundViewModel; // +0x60
}
- (void)prepareForReuse;
- (void)setupCellWithViewModel:(id)arg1;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (void)layoutSubviews;
- (void)ensureSubviews;
- (void)applyLayout;
- (void)applyContentIfNeeded;
- (void)applyWildEmoticonContent:(id)arg1;
- (void)applyStoreEmoticonContent:(id)arg1;
- (void)showFailedState;
- (void)emoticonViewModel:(id)arg1 didChangeStoreState:(unsigned long long)arg2;
- (void)applyAccessibility;
- (id)copyableText;
- (id)menuAnchorView;
- (BOOL)needsBubbleBackground;
- (void)onLoadImageOK:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)selectAllForLongPressMenu;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onTapCard;
- (id)typedViewModel;
- (id)emoticonImageView;
- (void)setEmoticonImageView:(id)arg1;
- (id)storeImageView;
- (void)setStoreImageView:(id)arg1;
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
- (id)renderedImageURL;
- (void)setRenderedImageURL:(id)arg1;
- (id)renderedStorePath;
- (void)setRenderedStorePath:(id)arg1;
- (BOOL)imageLoadFailed;
- (void)setImageLoadFailed:(BOOL)arg1;
- (BOOL)isOpening;
- (void)setIsOpening:(BOOL)arg1;
- (id)boundViewModel;
- (void)setBoundViewModel:(id)arg1;
- (void).cxx_destruct;
@end
