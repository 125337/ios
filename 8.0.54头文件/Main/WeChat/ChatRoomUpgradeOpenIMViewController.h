@interface ChatRoomUpgradeOpenIMViewController : ChatRoomBaseUpgradeOpenIMViewController <MMAcceptAgreementResultViewControllerDelegate, ILinkEventExt, IGroupMgrExt>
{
    MMHeadImageView * m_headImageView; // +0x68
    MMUILabel * m_nickNameTextLabel; // +0x70
    MMImageView * m_namePostIconView; // +0x78
    unsigned int _m_scene; // +0x80
    CContact * m_chatRoomContact; // +0x88
    NSString * m_titleText; // +0x90
    NSString * m_contentText; // +0x98
    NSString * m_topTitleText; // +0xa0
}
- (void)viewDidLoad;
- (void)initData;
- (void)addContentSubView;
- (void)viewWillLayoutSubviews;
- (void)layoutView;
- (void)resetLayoutViewPosition;
- (void)layoutHeadView;
- (void)layoutTitleTextView;
- (void)doIAccept;
- (void)onCancel;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)OnUpgradeAssociateChatRoom:(id)arg1 withTicket:(id)arg2 withResult:(unsigned int)arg3 errorMsg:(id)arg4;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)reportUpgradeChatRoomOperateWithGroupUserName:(id)arg1 upgradeChatRoomOperateResult:(unsigned int)arg2 upgradeChatRoomShowSystemMessageTyp:(unsigned int)arg3;
- (id)m_chatRoomContact;
- (void)setM_chatRoomContact:(id)arg1;
- (id)m_titleText;
- (void)setM_titleText:(id)arg1;
- (id)m_contentText;
- (void)setM_contentText:(id)arg1;
- (id)m_topTitleText;
- (void)setM_topTitleText:(id)arg1;
- (unsigned int)m_scene;
- (void)setM_scene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

