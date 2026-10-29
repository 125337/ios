@interface WCPayTransferToBankCardPaidSuccessViewController : WCPayBaseViewController
{
    id <WCPayTransferToBankCardPaidSuccessViewControllerDelegate> m_delegate; // +0x98
    unsigned long long _vcType; // +0xa0
    UILabel * _m_statusLabel; // +0xa8
    UILabel * _m_arriveStatusLabel; // +0xb0
    UIView * _m_statusDetailView; // +0xb8
    UIView * _m_topLineView; // +0xc0
    UIView * _m_bottomLineView; // +0xc8
    UIView * _m_amountLabelView; // +0xd0
    UILabel * _m_amountLabel; // +0xd8
    UILabel * _m_amountValueLabel; // +0xe0
    UIView * _m_chargeFeeLabelView; // +0xe8
    UILabel * _m_chargeFeeLabel; // +0xf0
    UILabel * _m_chargeFeeValueLabel; // +0xf8
    UIView * _m_receiverLabelView; // +0x100
    UILabel * _m_receiverLabel; // +0x108
    UILabel * _m_receiverValueLabel; // +0x110
    UIView * _m_receiverAccountLabelView; // +0x118
    UILabel * _m_receiverAccountLabel; // +0x120
    UILabel * _m_receiverAccountValueLabel; // +0x128
    UIView * _m_transferDescLabelView; // +0x130
    UILabel * _m_transferDescLabel; // +0x138
    UILabel * _m_transferDescValueLabel; // +0x140
    UIView * _m_transferTimeLabelView; // +0x148
    UILabel * _m_transferTimeLabel; // +0x150
    UILabel * _m_transferTimeValueLabel; // +0x158
    UIView * _m_arriveTimeLabelView; // +0x160
    UILabel * _m_arriveTimeLabel; // +0x168
    UILabel * _m_arriveTimeValueLabel; // +0x170
    UIView * _m_noticeLabelView; // +0x178
    UILabel * _m_noticeLabel; // +0x180
    UILabel * _m_noticeValueLabel; // +0x188
    UIView * _m_statusBriefView; // +0x190
    UIView * _m_statusImageView; // +0x198
    UIImageView * _m_statusIconView; // +0x1a0
    UILabel * _m_statusFirstLabel; // +0x1a8
    UILabel * _m_statusSecondLabel; // +0x1b0
    UILabel * _m_statusSecondDescLabel; // +0x1b8
    UILabel * _m_statusThirdLabel; // +0x1c0
    UILabel * _m_currentStatusLabel; // +0x1c8
    double _detailTitleWidth; // +0x1d0
    UIView * _lastLabelView; // +0x1d8
    UIButton * _m_doneButton; // +0x1e0
    UIScrollView * _m_backgroundView; // +0x1e8
    double _m_finalDetailTitleWidth; // +0x1f0
}
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)updateBackgroundView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)updateStatusBriefView;
- (void)updateStausImageView;
- (void)updateSuccessStatusImageView;
- (void)updateStatusLabelView;
- (id)getSecondLabelTitle:(unsigned int)arg1;
- (id)getStatusBarColor:(unsigned int)arg1;
- (id)getStatusImage:(unsigned int)arg1;
- (void)updateTransToBankCardDetailView;
- (void)updateDoneBtn;
- (void)updateTopLineView;
- (void)updateBottomLineView;
- (void)updateAmountLabel;
- (void)updateAmountValueLabel;
- (void)updateChargeFeeLabel;
- (void)updateChargeFeeValueLabel;
- (void)updateReceiverLabel;
- (void)updateReceiverValueLabel;
- (void)updateReceiverAccountLabel;
- (void)updateReceiverAccountValueLabel;
- (void)updateTransferDescLabel;
- (void)updateTransferDescValueLabel;
- (void)updateTransTimeLabel;
- (void)updateTransTimeValueLabel;
- (void)updateArriveTimeLabel;
- (void)updateArriveTimeValueLabel;
- (void)updateNoticeLabel;
- (void)updateNoticeValueLabel;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)onDone;
- (unsigned long long)vcType;
- (void)setVcType:(unsigned long long)arg1;
- (id)m_statusLabel;
- (void)setM_statusLabel:(id)arg1;
- (id)m_arriveStatusLabel;
- (void)setM_arriveStatusLabel:(id)arg1;
- (id)m_statusDetailView;
- (void)setM_statusDetailView:(id)arg1;
- (id)m_topLineView;
- (void)setM_topLineView:(id)arg1;
- (id)m_bottomLineView;
- (void)setM_bottomLineView:(id)arg1;
- (id)m_amountLabelView;
- (void)setM_amountLabelView:(id)arg1;
- (id)m_amountLabel;
- (void)setM_amountLabel:(id)arg1;
- (id)m_amountValueLabel;
- (void)setM_amountValueLabel:(id)arg1;
- (id)m_chargeFeeLabelView;
- (void)setM_chargeFeeLabelView:(id)arg1;
- (id)m_chargeFeeLabel;
- (void)setM_chargeFeeLabel:(id)arg1;
- (id)m_chargeFeeValueLabel;
- (void)setM_chargeFeeValueLabel:(id)arg1;
- (id)m_receiverLabelView;
- (void)setM_receiverLabelView:(id)arg1;
- (id)m_receiverLabel;
- (void)setM_receiverLabel:(id)arg1;
- (id)m_receiverValueLabel;
- (void)setM_receiverValueLabel:(id)arg1;
- (id)m_receiverAccountLabelView;
- (void)setM_receiverAccountLabelView:(id)arg1;
- (id)m_receiverAccountLabel;
- (void)setM_receiverAccountLabel:(id)arg1;
- (id)m_receiverAccountValueLabel;
- (void)setM_receiverAccountValueLabel:(id)arg1;
- (id)m_transferDescLabelView;
- (void)setM_transferDescLabelView:(id)arg1;
- (id)m_transferDescLabel;
- (void)setM_transferDescLabel:(id)arg1;
- (id)m_transferDescValueLabel;
- (void)setM_transferDescValueLabel:(id)arg1;
- (id)m_transferTimeLabelView;
- (void)setM_transferTimeLabelView:(id)arg1;
- (id)m_transferTimeLabel;
- (void)setM_transferTimeLabel:(id)arg1;
- (id)m_transferTimeValueLabel;
- (void)setM_transferTimeValueLabel:(id)arg1;
- (id)m_arriveTimeLabelView;
- (void)setM_arriveTimeLabelView:(id)arg1;
- (id)m_arriveTimeLabel;
- (void)setM_arriveTimeLabel:(id)arg1;
- (id)m_arriveTimeValueLabel;
- (void)setM_arriveTimeValueLabel:(id)arg1;
- (id)m_noticeLabelView;
- (void)setM_noticeLabelView:(id)arg1;
- (id)m_noticeLabel;
- (void)setM_noticeLabel:(id)arg1;
- (id)m_noticeValueLabel;
- (void)setM_noticeValueLabel:(id)arg1;
- (id)m_statusBriefView;
- (void)setM_statusBriefView:(id)arg1;
- (id)m_statusImageView;
- (void)setM_statusImageView:(id)arg1;
- (id)m_statusIconView;
- (void)setM_statusIconView:(id)arg1;
- (id)m_statusFirstLabel;
- (void)setM_statusFirstLabel:(id)arg1;
- (id)m_statusSecondLabel;
- (void)setM_statusSecondLabel:(id)arg1;
- (id)m_statusSecondDescLabel;
- (void)setM_statusSecondDescLabel:(id)arg1;
- (id)m_statusThirdLabel;
- (void)setM_statusThirdLabel:(id)arg1;
- (id)m_currentStatusLabel;
- (void)setM_currentStatusLabel:(id)arg1;
- (double)detailTitleWidth;
- (void)setDetailTitleWidth:(double)arg1;
- (id)lastLabelView;
- (void)setLastLabelView:(id)arg1;
- (id)m_doneButton;
- (void)setM_doneButton:(id)arg1;
- (id)m_backgroundView;
- (void)setM_backgroundView:(id)arg1;
- (double)m_finalDetailTitleWidth;
- (void)setM_finalDetailTitleWidth:(double)arg1;
- (void).cxx_destruct;
@end
