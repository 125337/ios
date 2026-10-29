@interface WCPayTransferMoneyAntiCheatUIView : UIView
{
    int _buttonCornerRadius; // +0x8
    int _lefticonMarginLeft; // +0xc
    int _wordingLabelMarginLeft; // +0x10
    int _righticonMarginLeft; // +0x14
    int _righticonMarginRight; // +0x18
    int _lefticonWidth; // +0x1c
    int _lefticonHeight; // +0x20
    int _wordingLabelTestSize; // +0x24
    int _righticonWidth; // +0x28
    int _righticonHeight; // +0x2c
    int _wordingLabelMarginVertical; // +0x30
    int _antiCheatViewMarginHorizontal; // +0x34
    WCPayTransferMoneyAntiCheatViewData * _data; // +0x38
    id <WCPayTransferMoneyAntiCheatButtonDelegate> _delegate; // +0x40
    UIButton * _contentButton; // +0x48
    MMUILabel * _wordingLabel; // +0x50
    WCPayWebImageView * _lefticonWebImageView; // +0x58
    WCPayWebImageView * _righticonWebImageView; // +0x60
}
- (id)initWithNoticeTransferMoney:(id)arg1 delegate:(id)arg2;
- (id)initWithNoticeUnionTransferMoney:(id)arg1 delegate:(id)arg2;
- (id)initWithNoticeF2FTransferMoney:(id)arg1 delegate:(id)arg2;
- (void)setLayoutParams;
- (id)initWithViewData:(id)arg1 delegate:(id)arg2;
- (void)updateView;
- (void)updateAntiCheatView;
- (void)allocContentButton;
- (void)updateContentButton;
- (void)onContentButtonClick:(id)arg1;
- (void)updateLefticon;
- (void)updateWordingLabel;
- (void)updateRighticon;
- (void)adjustView;
- (id)data;
- (void)setData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentButton;
- (void)setContentButton:(id)arg1;
- (id)wordingLabel;
- (void)setWordingLabel:(id)arg1;
- (id)lefticonWebImageView;
- (void)setLefticonWebImageView:(id)arg1;
- (id)righticonWebImageView;
- (void)setRighticonWebImageView:(id)arg1;
- (int)buttonCornerRadius;
- (void)setButtonCornerRadius:(int)arg1;
- (int)lefticonMarginLeft;
- (void)setLefticonMarginLeft:(int)arg1;
- (int)wordingLabelMarginLeft;
- (void)setWordingLabelMarginLeft:(int)arg1;
- (int)righticonMarginLeft;
- (void)setRighticonMarginLeft:(int)arg1;
- (int)righticonMarginRight;
- (void)setRighticonMarginRight:(int)arg1;
- (int)lefticonWidth;
- (void)setLefticonWidth:(int)arg1;
- (int)lefticonHeight;
- (void)setLefticonHeight:(int)arg1;
- (int)wordingLabelTestSize;
- (void)setWordingLabelTestSize:(int)arg1;
- (int)righticonWidth;
- (void)setRighticonWidth:(int)arg1;
- (int)righticonHeight;
- (void)setRighticonHeight:(int)arg1;
- (int)wordingLabelMarginVertical;
- (void)setWordingLabelMarginVertical:(int)arg1;
- (int)antiCheatViewMarginHorizontal;
- (void)setAntiCheatViewMarginHorizontal:(int)arg1;
- (void).cxx_destruct;
@end
