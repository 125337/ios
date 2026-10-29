@interface WCGiftCardEnvelopeView : MMUIView
{
    WCPreGiftCardData * _preCardData; // +0x8
    MMWebImageView * _headImageView; // +0x10
    UILabel * _fromUserNameLabel; // +0x18
    UILabel * _contentLabel; // +0x20
    UIButton * _acceptButton; // +0x28
    UIButton * _moreDetailButton; // +0x30
    UIButton * _seeOtherButton; // +0x38
    UIButton * _closeButton; // +0x40
    MMWebImageView * _rightImageView; // +0x48
    MMWebImageView * _giftBackGroundView; // +0x50
    id /* block */ _closeBlock; // +0x58
    id /* block */ _acceptBlock; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)giftBackGroundView;
- (id)headImageView;
- (id)fromUserNameLabel;
- (id)contentLabel;
- (id)acceptButton;
- (id)moreDetailButton;
- (id)seeOtherButton;
- (id)rightImageView;
- (id)closeButton;
- (void)setPreCardData:(id)arg1;
- (void)setCloseDidClicked:(id /* block */)arg1;
- (void)setAcceptDidClicked:(id /* block */)arg1;
- (void)closeButtonDidClicked;
- (void)acceptButtonDidClicked;
- (void)seeOtherButtonDidClicked;
- (void)event:(id)arg1;
- (id)preCardData;
- (void)setHeadImageView:(id)arg1;
- (void)setFromUserNameLabel:(id)arg1;
- (void)setContentLabel:(id)arg1;
- (void)setAcceptButton:(id)arg1;
- (void)setMoreDetailButton:(id)arg1;
- (void)setSeeOtherButton:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setRightImageView:(id)arg1;
- (void)setGiftBackGroundView:(id)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (id /* block */)acceptBlock;
- (void)setAcceptBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

