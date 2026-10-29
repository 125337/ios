@interface CBTAsstA2aCellView : CBTCoopV2AsstBoardCellView <UIGestureRecognizerDelegate>
{
    BOOL _longPressFired; // +0x8
    UIView * _cardBackgroundView; // +0x10
    UIView * _iconContainerView; // +0x18
    UIView * _backRingView; // +0x20
    UIView * _backCardView; // +0x28
    UIView * _frontRingView; // +0x30
    UIView * _frontCardView; // +0x38
    UIImageView * _eyeImageView; // +0x40
    UILabel * _titleLabel; // +0x48
    UILabel * _subtitleLabel; // +0x50
    UIView * _highlightOverlayView; // +0x58
    UILongPressGestureRecognizer * _pressGesture; // +0x60
    CBTAsstBoardBaseViewModel * _lastReportVM; // +0x68
}
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)menuAnchorView;
- (id)copyableText;
- (void)ensureSubviews;
- (void)applyViewModel;
- (id)typedViewModel;
- (id)cardBackgroundColor;
- (id)iconCardColor;
- (id)titleColor;
- (id)subtitleColor;
- (BOOL)needsBubbleBackground;
- (id)getBubbleColor;
- (BOOL)isBubbleRightAligned;
- (void)handleCardTap;
- (void)setupAmoebaViewReportingWithViewModel:(id)arg1;
- (id)networkChatEntryParamsWithViewModel:(id)arg1;
- (void)selectAllForLongPressMenu;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onPressGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)cardBackgroundView;
- (void)setCardBackgroundView:(id)arg1;
- (id)iconContainerView;
- (void)setIconContainerView:(id)arg1;
- (id)backRingView;
- (void)setBackRingView:(id)arg1;
- (id)backCardView;
- (void)setBackCardView:(id)arg1;
- (id)frontRingView;
- (void)setFrontRingView:(id)arg1;
- (id)frontCardView;
- (void)setFrontCardView:(id)arg1;
- (id)eyeImageView;
- (void)setEyeImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)highlightOverlayView;
- (void)setHighlightOverlayView:(id)arg1;
- (id)pressGesture;
- (void)setPressGesture:(id)arg1;
- (BOOL)longPressFired;
- (void)setLongPressFired:(BOOL)arg1;
- (id)lastReportVM;
- (void)setLastReportVM:(id)arg1;
- (void).cxx_destruct;
@end
