@interface WCPayPaidSuccessStatusViewController : WCPayBaseViewController
{
    id <WCPayPaidSuccessStatusViewControllerDelegate> _delegate; // +0x98
    NSString * _nsTitle; // +0xa0
    UIColor * _backgroundColor; // +0xa8
    WCPayPaidSuccessStatusModel * _statusModel; // +0xb0
    NSMutableArray * _details; // +0xb8
    NSMutableArray * _bottomTips; // +0xc0
    unsigned long long _vcType; // +0xc8
    unsigned long long _vcStatus; // +0xd0
    UIView * _m_statusDetailView; // +0xd8
    UIView * _m_topLineView; // +0xe0
    UIView * _m_bottomLineView; // +0xe8
    UILabel * _lastValueLabel; // +0xf0
    UIButton * _m_doneButton; // +0xf8
    UIView * _m_statusBriefView; // +0x100
    UIView * _m_statusImageView; // +0x108
    UIImageView * _m_statusIconView; // +0x110
    UILabel * _m_statusFirstLabel; // +0x118
    UILabel * _m_statusSecondLabel; // +0x120
    UILabel * _m_statusSecondDescLabel; // +0x128
    UILabel * _m_statusThirdLabel; // +0x130
    UILabel * _m_statusThirdDescLabel; // +0x138
}
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)updateView;
- (void)initNavigationBar;
- (void)onDone;
- (void)updateStatusBriefView;
- (void)updateStatusLabelView;
- (void)updateTransToBankCardDetailView;
- (void)updateDetailLabelView;
- (void)updateDoneBtn;
- (void)updateTopLineView;
- (void)updateBottomLineView;
- (void)updateStausImageView;
- (void)updateSuccessStatusImageView;
- (id)getStatusImage:(unsigned int)arg1;
- (id)getStatusBarColor:(unsigned int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)nsTitle;
- (void)setNsTitle:(id)arg1;
- (id)backgroundColor;
- (id)statusModel;
- (void)setStatusModel:(id)arg1;
- (id)details;
- (void)setDetails:(id)arg1;
- (id)bottomTips;
- (void)setBottomTips:(id)arg1;
- (unsigned long long)vcType;
- (void)setVcType:(unsigned long long)arg1;
- (unsigned long long)vcStatus;
- (void)setVcStatus:(unsigned long long)arg1;
- (id)m_statusDetailView;
- (void)setM_statusDetailView:(id)arg1;
- (id)m_topLineView;
- (void)setM_topLineView:(id)arg1;
- (id)m_bottomLineView;
- (void)setM_bottomLineView:(id)arg1;
- (id)lastValueLabel;
- (void)setLastValueLabel:(id)arg1;
- (id)m_doneButton;
- (void)setM_doneButton:(id)arg1;
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
- (id)m_statusThirdDescLabel;
- (void)setM_statusThirdDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
