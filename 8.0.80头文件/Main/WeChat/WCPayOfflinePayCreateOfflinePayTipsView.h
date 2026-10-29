@interface WCPayOfflinePayCreateOfflinePayTipsView : MMUIView <ILinkEventExt>
{
    id <WCPayOfflinePayCreateOffinePayTipsViewDelegate> _delegate; // +0x8
    UIImageView * _iconImgView; // +0x10
    MMUILabel * _tipsLabel; // +0x18
    UIButton * _confirmBtn; // +0x20
    UIImageView * _m_iconForSafeTips; // +0x28
    MMUILabel * _m_LabelForSafeTips; // +0x30
    UIImageView * _m_arrowForSafeTips; // +0x38
    UIButton * _safeTipsCoverBtn; // +0x40
    UIView * _protocolView; // +0x48
    UIImageView * _protocolImgView; // +0x50
    RichTextView * _protocolTextView; // +0x58
    UIButton * _protocolCoverBtn; // +0x60
}
- (double)layoutForKey:(id)arg1;
- (id)initCreateOfflinePayTipsViewWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (id)initReCreateOfflinePayTipsViewWithFrame:(CGRect)arg1 delegate:(id)arg2 tipsWording:(id)arg3 btnWording:(id)arg4;
- (void)setupContentView:(id)arg1 btnWording:(id)arg2;
- (void)updateCoverButtonForSafeTips;
- (void)updateIconForSafeTips;
- (void)updateLabelForSafeTips;
- (void)updateArrowForSafeTips;
- (void)adjustBottomTips;
- (void)updateProtocolView;
- (void)confirmBtnPress:(id)arg1;
- (void)clickSafeTips;
- (void)shakeProtocolView;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)protocolBtnClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconImgView;
- (void)setIconImgView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)m_iconForSafeTips;
- (void)setM_iconForSafeTips:(id)arg1;
- (id)m_LabelForSafeTips;
- (void)setM_LabelForSafeTips:(id)arg1;
- (id)m_arrowForSafeTips;
- (void)setM_arrowForSafeTips:(id)arg1;
- (id)safeTipsCoverBtn;
- (void)setSafeTipsCoverBtn:(id)arg1;
- (id)protocolView;
- (void)setProtocolView:(id)arg1;
- (id)protocolImgView;
- (void)setProtocolImgView:(id)arg1;
- (id)protocolTextView;
- (void)setProtocolTextView:(id)arg1;
- (id)protocolCoverBtn;
- (void)setProtocolCoverBtn:(id)arg1;
- (void).cxx_destruct;
@end
