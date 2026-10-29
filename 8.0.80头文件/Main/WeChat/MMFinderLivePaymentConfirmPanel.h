@interface MMFinderLivePaymentConfirmPanel : MMLandscapeDragBarPageSheet
{
    BOOL _confirmed; // +0x8
    BOOL _callbackFired; // +0x9
    id /* block */ _confirmBlock; // +0x10
    id /* block */ _cancelBlock; // +0x18
    MMFinderLivePaymentConfirmPanelModel * _model; // +0x20
    UIView * _contentView; // +0x28
    UIView * _grabberView; // +0x30
    UIImageView * _beanIconView; // +0x38
    MMUILabel * _priceLabel; // +0x40
    MMUILabel * _titleLabel; // +0x48
    UIView * _cardView; // +0x50
    WCFinderHeadImageView * _avatarView; // +0x58
    MMUILabel * _nicknameLabel; // +0x60
    WCFinderAuthInfoIconView * _authIconView; // +0x68
    MMUILabel * _topicLabel; // +0x70
    MMUILabel * _timeLabel; // +0x78
    UIButton * _cancelButton; // +0x80
    UIButton * _confirmButton; // +0x88
}
- (id)initWithModel:(id)arg1;
- (void)dealloc;
- (void)initUI;
- (void)updateContent;
- (void)layoutSubviews;
- (BOOL)isLandscapeDragBarStyleActive;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)onCancelButtonClicked;
- (void)onConfirmButtonClicked;
- (void)pageSheetDidDismiss;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)grabberView;
- (void)setGrabberView:(id)arg1;
- (id)beanIconView;
- (void)setBeanIconView:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)topicLabel;
- (void)setTopicLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (BOOL)confirmed;
- (void)setConfirmed:(BOOL)arg1;
- (BOOL)callbackFired;
- (void)setCallbackFired:(BOOL)arg1;
- (void).cxx_destruct;
@end
