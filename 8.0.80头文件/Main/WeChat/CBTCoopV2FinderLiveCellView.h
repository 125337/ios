@interface CBTCoopV2FinderLiveCellView : CBTCoopV2AsstBoardCellView <UIGestureRecognizerDelegate>
{
    BOOL _longPressFired; // +0x8
    BOOL _isOpeningLive; // +0x9
    UIView * _tileContainer; // +0x10
    MMWebImageView * _coverImageView; // +0x18
    CAGradientLayer * _bottomGradientLayer; // +0x20
    UIView * _statusBadgeView; // +0x28
    UIImageView * _statusBadgeIcon; // +0x30
    UILabel * _statusBadgeLabel; // +0x38
    UIImageView * _sourceIcon; // +0x40
    UILabel * _sourceLabel; // +0x48
    UIView * _highlightOverlayView; // +0x50
    UITapGestureRecognizer * _tapGesture; // +0x58
    UILongPressGestureRecognizer * _pressGesture; // +0x60
    NSString * _renderedImageURL; // +0x68
}
- (void)prepareForReuse;
- (void)setupCellWithViewModel:(id)arg1;
- (unsigned long long)checkboxVerticalAlignment;
- (id)checkboxAlignmentBubbleView;
- (void)layoutSubviews;
- (void)ensureSubviews;
- (void)applyLayout;
- (void)layoutStatusBadge;
- (void)applyContentIfNeeded;
- (void)applyAccessibility;
- (id)copyableText;
- (id)menuAnchorView;
- (void)selectAllForLongPressMenu;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onTapCard;
- (id)typedViewModel;
- (id)tileContainer;
- (void)setTileContainer:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (id)statusBadgeView;
- (void)setStatusBadgeView:(id)arg1;
- (id)statusBadgeIcon;
- (void)setStatusBadgeIcon:(id)arg1;
- (id)statusBadgeLabel;
- (void)setStatusBadgeLabel:(id)arg1;
- (id)sourceIcon;
- (void)setSourceIcon:(id)arg1;
- (id)sourceLabel;
- (void)setSourceLabel:(id)arg1;
- (id)highlightOverlayView;
- (void)setHighlightOverlayView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)pressGesture;
- (void)setPressGesture:(id)arg1;
- (BOOL)longPressFired;
- (void)setLongPressFired:(BOOL)arg1;
- (BOOL)isOpeningLive;
- (void)setIsOpeningLive:(BOOL)arg1;
- (id)renderedImageURL;
- (void)setRenderedImageURL:(id)arg1;
- (void).cxx_destruct;
@end
