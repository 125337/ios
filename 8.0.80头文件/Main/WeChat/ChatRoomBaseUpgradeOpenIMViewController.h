@interface ChatRoomBaseUpgradeOpenIMViewController : MMAcceptAgreementBaseViewController <ILinkEventExt>
{
    MMUILabel * m_topTitleLabel; // +0x70
    RichTextView * m_titleTextView; // +0x78
    MMUILabel * m_contentTextLabel; // +0x80
    UIButton * m_iAcceptBtn; // +0x88
    NSString * _m_titleText; // +0x90
    NSString * _m_contentText; // +0x98
    NSString * _m_topTitleText; // +0xa0
}
- (void)setUpNavigation;
- (void)layoutTopTitleLable;
- (void)layoutTitleTextView;
- (void)layoutContentTextLabel;
- (void)layoutIAcceptBtn;
- (void)doIAccept;
- (void)onCancel;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)m_topTitleLabel;
- (void)setM_topTitleLabel:(id)arg1;
- (id)m_titleTextView;
- (void)setM_titleTextView:(id)arg1;
- (id)m_contentTextLabel;
- (void)setM_contentTextLabel:(id)arg1;
- (id)m_iAcceptBtn;
- (void)setM_iAcceptBtn:(id)arg1;
- (id)m_titleText;
- (void)setM_titleText:(id)arg1;
- (id)m_contentText;
- (void)setM_contentText:(id)arg1;
- (id)m_topTitleText;
- (void)setM_topTitleText:(id)arg1;
- (void).cxx_destruct;
@end
