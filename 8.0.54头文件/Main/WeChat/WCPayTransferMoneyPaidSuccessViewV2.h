@interface WCPayTransferMoneyPaidSuccessViewV2 : UIView <WCPayAddressRemarkViewDelegate, InternalFavorDescViewDelegate, WCPayLotteryViewDelegate>
{
    BOOL _m_expendFavor; // +0x8
    BOOL _m_expendAddress; // +0x9
    id <WCPayTransferMoneyPaidSuccessViewV2Delegate> _m_delegate; // +0x10
    WCPayControlData * _m_data; // +0x18
    UIImageView * _m_WeChatPayIcon; // +0x20
    UILabel * _m_successLabel; // +0x28
    UILabel * _m_tipsLabel; // +0x30
    UILabel * _m_feeLabel; // +0x38
    UILabel * _m_moneyLabel; // +0x40
    UIView * _m_firstLineView; // +0x48
    UIView * _m_lineView; // +0x50
    UILabel * _m_receiverLabel; // +0x58
    UILabel * _m_receiverValueLabel; // +0x60
    UIView * _m_receiverHeadImageView; // +0x68
    UILabel * _m_receiveDescLabel; // +0x70
    UILabel * _m_receiveDescValueLabel; // +0x78
    UILabel * _m_senderLabel; // +0x80
    UILabel * _m_senderValueLabel; // +0x88
    UILabel * _m_chargeFeeLabel; // +0x90
    UILabel * _m_chargeFeeValueLabel; // +0x98
    InternalFavorDescView * _m_favorDescView; // +0xa0
    UIButton * _m_doneButton; // +0xa8
    UILabel * _m_realMoneyLabel; // +0xb0
    UILabel * _m_realMoneyValueLabel; // +0xb8
    WCPayLotteryView * _m_lotteryView; // +0xc0
    double _m_lastElemBottomY; // +0xc8
    WCPayWebImageView * _backgroundImageView; // +0xd0
    double _m_doneButtonMarginUp; // +0xd8
    UIScrollView * _m_scrollView; // +0xe0
    UILabel * _m_originPriceLabel; // +0xe8
    UILabel * _m_originPriceValueLabel; // +0xf0
    WCPayLineSeparatorView * _m_addressRemarkView; // +0xf8
    UILabel * _noticeTitle; // +0x100
    UILabel * _noticeDesc; // +0x108
}
- (id)initWithFrame:(CGRect)arg1 withData:(id)arg2;
- (void)layoutSubviews;
- (void)refreshViewWithData:(id)arg1;
- (void)updateLayout;
- (void)updateNotice;
- (void)updateAddressRemarkView;
- (void)layoutForNoLineView;
- (void)lotteryViewDidScratchOrShake:(id)arg1 drawType:(unsigned int)arg2;
- (void)lotteryViewDidFinishScratchOrShake:(id)arg1;
- (void)lotteryViewDidClickButton:(id)arg1;
- (void)updateExposureArea;
- (void)updateWeChatPayIcon;
- (void)updateSuccessLabel;
- (void)updateTipsLabel;
- (id)moneyString;
- (void)updateMoneyLabel;
- (void)updateFirstLineView;
- (void)updateLineView;
- (void)updateReceicerLabel;
- (id)receiverValue;
- (void)updateReceiverValueLabel;
- (void)updateHeadImageView;
- (void)updateRealMoneyLabel;
- (void)updateRealMoneyValueLabel;
- (void)adjustHeadImgAndReceiverValueVertical;
- (void)updateReceiveDescLabel;
- (void)updateReceiverDescValueLabel;
- (void)updateSenderLabel;
- (void)updateSenderValueLabel;
- (void)updateChargeFeeLabel;
- (void)updateChargeFeeValueLabel;
- (void)updateFavorView;
- (void)updateDoneButton;
- (void)onDoneButtonClick;
- (double)tipsLabelMarginUp;
- (void)onInternalFavorDescViewClick;
- (void)onWCPayAddressRemarkViewExpend;
- (void)onWCPayAddressRemarkViewCopy;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_data;
- (void)setM_data:(id)arg1;
- (id)m_WeChatPayIcon;
- (void)setM_WeChatPayIcon:(id)arg1;
- (id)m_successLabel;
- (void)setM_successLabel:(id)arg1;
- (id)m_tipsLabel;
- (void)setM_tipsLabel:(id)arg1;
- (id)m_feeLabel;
- (void)setM_feeLabel:(id)arg1;
- (id)m_moneyLabel;
- (void)setM_moneyLabel:(id)arg1;
- (id)m_firstLineView;
- (void)setM_firstLineView:(id)arg1;
- (id)m_lineView;
- (void)setM_lineView:(id)arg1;
- (id)m_receiverLabel;
- (void)setM_receiverLabel:(id)arg1;
- (id)m_receiverValueLabel;
- (void)setM_receiverValueLabel:(id)arg1;
- (id)m_receiverHeadImageView;
- (void)setM_receiverHeadImageView:(id)arg1;
- (id)m_receiveDescLabel;
- (void)setM_receiveDescLabel:(id)arg1;
- (id)m_receiveDescValueLabel;
- (void)setM_receiveDescValueLabel:(id)arg1;
- (id)m_senderLabel;
- (void)setM_senderLabel:(id)arg1;
- (id)m_senderValueLabel;
- (void)setM_senderValueLabel:(id)arg1;
- (id)m_chargeFeeLabel;
- (void)setM_chargeFeeLabel:(id)arg1;
- (id)m_chargeFeeValueLabel;
- (void)setM_chargeFeeValueLabel:(id)arg1;
- (id)m_favorDescView;
- (void)setM_favorDescView:(id)arg1;
- (id)m_doneButton;
- (void)setM_doneButton:(id)arg1;
- (id)m_realMoneyLabel;
- (void)setM_realMoneyLabel:(id)arg1;
- (id)m_realMoneyValueLabel;
- (void)setM_realMoneyValueLabel:(id)arg1;
- (id)m_lotteryView;
- (void)setM_lotteryView:(id)arg1;
- (double)m_lastElemBottomY;
- (void)setM_lastElemBottomY:(double)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (double)m_doneButtonMarginUp;
- (void)setM_doneButtonMarginUp:(double)arg1;
- (id)m_scrollView;
- (void)setM_scrollView:(id)arg1;
- (id)m_originPriceLabel;
- (void)setM_originPriceLabel:(id)arg1;
- (id)m_originPriceValueLabel;
- (void)setM_originPriceValueLabel:(id)arg1;
- (BOOL)m_expendFavor;
- (void)setM_expendFavor:(BOOL)arg1;
- (id)m_addressRemarkView;
- (void)setM_addressRemarkView:(id)arg1;
- (BOOL)m_expendAddress;
- (void)setM_expendAddress:(BOOL)arg1;
- (id)noticeTitle;
- (void)setNoticeTitle:(id)arg1;
- (id)noticeDesc;
- (void)setNoticeDesc:(id)arg1;
- (void).cxx_destruct;
@end

