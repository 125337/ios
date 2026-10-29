@interface SendVerifyMsgViewController : MMUIViewController <MMTableViewInfoDelegate, ILinkEventExt, UITextViewDelegate, IContactTagViewControllerExt, NewContactTagViewControllerDelegate, MMUIViewControllerExt, UITextFieldDelegate, contactVerifyLogicDelegate>
{
    CContact * m_oVerifyContact; // +0x68
    CContactVerifyLogic * m_oContactVerifyLogic; // +0x70
    NSString * m_recommandRemark; // +0x78
    BOOL m_bSetRemark; // +0x80
    BOOL m_bNeedReloadSubviews; // +0x81
    BOOL m_bNotCancel; // +0x82
    BOOL m_bHasRemark; // +0x83
    BOOL m_bHasTag; // +0x84
    unsigned int m_uiRecomandRemarkScene; // +0x88
    NSString * m_placeholder; // +0x90
    BOOL m_isHadShowSocialBlackSwitchTip; // +0x98
    MMTextView * m_tfVerifyMsg; // +0xa0
    MMUITextField * m_tfRemark; // +0xa8
    MMTableViewInfo * m_tableViewInfo; // +0xb0
    BOOL m_bIsDisableAllPermissionContact; // +0xb8
    NSString * m_moreLimitFootTitle; // +0xc0
    BOOL m_isSocialBlackValue; // +0xc8
    BOOL m_isOutsiderValue; // +0xc9
    BOOL m_isWCBlackValue; // +0xca
    BOOL m_clicfgSetDefaultChatonlyTwoHadSet; // +0xcb
    UIView * m_defaultChatonlyTwoSectionHeadView; // +0xd0
    UIButton * m_sendButton; // +0xd8
    UIButton * m_disableButton; // +0xe0
    BOOL m_hadClickDiableButton; // +0xe8
    WCTableViewNormalCellManager * m_socialPermissionCellInfo; // +0xf0
    WCTableViewNormalCellManager * m_snsPermissionCellInfo; // +0xf8
    NSMutableArray * m_tagItemList; // +0x100
    NSMutableArray * m_originTagItemList; // +0x108
    NSArray * m_originalArrSelectedTagId; // +0x110
    NSArray * m_handleOriginalArrSelectedTagId; // +0x118
    MMUILabel * m_tagNameLabel; // +0x120
    NSDate * m_pushInDate; // +0x128
    BOOL m_changeWCBlacklist; // +0x130
    BOOL m_changeWCOutsider; // +0x131
    BOOL m_changeWCOnlyChat; // +0x132
    BOOL m_hadSendOrVerifyDone; // +0x133
    unsigned int m_notionVibrateNumber; // +0x134
    unsigned int m_startTime; // +0x138
    ContactProfileRecommendInfo * m_profileRecommendInfo; // +0x140
    BOOL m_isShowRighImage; // +0x148
    BOOL _m_bVerifyToMe; // +0x149
    BOOL _hasFilledRemark; // +0x14a
    BOOL _recomRemarkIsClick; // +0x14b
    BOOL _recomRemarkClickStatus; // +0x14c
    BOOL _remarkSelectorUsed; // +0x14d
    BOOL _descSelectorIconExpo; // +0x14e
    BOOL _descSelectorIconClick; // +0x14f
    BOOL _descSelectorIconUsed; // +0x150
    BOOL _hasFilledOrSavedHelloMsg; // +0x151
    BOOL _hasEditHelloMsg; // +0x152
    unsigned int _m_uiOpCode; // +0x154
    CContact * m_oChatContact; // +0x158
    CMessageWrap * m_oSourceMsg; // +0x160
    NSString * recommandRemark; // +0x168
    SendVerifyMsgLogicController * m_logicVC; // +0x170
    id <SendVerifyMsgViewControllerDelegate> _m_delegate; // +0x178
    unsigned long long _m_qrCodeAddFriendScene; // +0x180
    NSString * _verifyContent; // +0x188
    long long _contactInfoViewSource; // +0x190
    WCTableViewNormalCellManager * _m_sectionInfoTagCellInfo; // +0x198
    long long _addRemarkCode; // +0x1a0
    long long _recomRemarkType; // +0x1a8
    long long _cardImgCount; // +0x1b0
    long long _descriptionCharLength; // +0x1b8
    NSMutableSet * _editViewNewlyCreatedTags; // +0x1c0
    NSMutableSet * _editViewAddedTags; // +0x1c8
    NSMutableSet * _tableViewNewlyCreatedTags; // +0x1d0
    NSMutableSet * _tableViewAddedTags; // +0x1d8
    NSString * _remarkReportSessionId; // +0x1e0
}
+ (unsigned int)getSendVerifySourceSceneWithFriendScene:(unsigned int)arg1;
- (id)init;
- (void)MMUIViewControllerDidBePopOrDismiss:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)makeBottomView;
- (void)setRightButtonType:(BOOL)arg1;
- (void)reloadTableViewInfo;
- (BOOL)isShowSendVerifySession;
- (id)getContactVerifyVerifyToMeTipHeader;
- (void)reloadPermissionTableViewCellInfo;
- (void)reloadPermissionTableViewCellInfoWithClicfgSetDefaultChatonlyTwo;
- (id)genDefaultChatonlyTwoSectionHeadView;
- (void)shakeDefaultChatonlyTwoSectionHeadView;
- (void)reloadOpenIMPermissionTableViewCellInfo;
- (void)reloadContactsViewTagListViewData;
- (BOOL)needRecommBtn;
- (BOOL)needSlideTextBtn;
- (BOOL)needLocalRecommRemark;
- (id)makeRecommBtnView;
- (id)makeSelectTextAsRemarkView;
- (id)makeLocalRecommRemarkView;
- (void)updateSavedHelloMsgView;
- (void)makeSavedHelloMsgView:(id)arg1;
- (void)onLongPressSavedHelloMsg;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onClearSavedHello;
- (void)useRecommandRemark;
- (void)useProfileRecommendRemark;
- (void)showSelectRemarkHalfScreen;
- (id)getLastReceivedHelloMsg;
- (void)initData;
- (void)reloadData;
- (void)saveDataToStrangerCache;
- (void)reloadTagListData;
- (BOOL)checkIsHasSessionAddContactNotMMContact;
- (BOOL)checkIsHasSessionSendRuestNotMMContact;
- (void)makeTagsCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeDescCell:(id)arg1 CellInfo:(id)arg2;
- (void)onCancel;
- (void)onBackButtonClicked;
- (void)onReturn;
- (void)viewDidBeInteractivePoped;
- (void)onHideKeyBoard;
- (void)onRemarkHideKeyBoard;
- (void)onRemarkShowKeyBoard;
- (void)onSendVerifyMsg;
- (void)onVerifyOK;
- (void)showContactVerifyLimitFail:(id)arg1;
- (void)onClickDefaultChatonlyTwoDisableButton;
- (void)setSendButtonUserInteractionEnabled:(BOOL)arg1;
- (void)opSocialBlackPermission;
- (void)opAllPermission;
- (void)onPermissionClicfgSetDefaultChatonlyTwo;
- (void)doOpSocialBlackPermission:(BOOL)arg1;
- (void)changeSocialBlackPermissionTwo:(BOOL)arg1;
- (void)opOutsider:(id)arg1;
- (void)opWCBlacklist:(id)arg1;
- (void)onContactVerifyFail;
- (void)contactSendRequestOk:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)makeEdit:(id)arg1;
- (void)initRemarkEdit;
- (void)makeRemarkEdit:(id)arg1;
- (id)makeSendButton;
- (id)makeDisableButtonFromSendButton:(id)arg1;
- (void)showTagEdit;
- (void)showDescEdit:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)onModifyContactTagList:(id)arg1 reResult:(BOOL)arg2;
- (id)navigationBarBackgroundColor;
- (void)reportSendVerifyMsg;
- (id)getSelectTagNameListStr;
- (id)getNewCreateSelectTagNameListStr;
- (void)reportRemarkContactTagWithOpResult:(BOOL)arg1;
- (void)onTagVCDismissWithEditViewNewlyCreatedTags:(id)arg1 addedTags:(id)arg2 tableViewNewlyCreatedTags:(id)arg3 addedTags:(id)arg4;
- (void)reportSavedHelloMsg:(long long)arg1;
- (id)getSendRequestDelegate;
- (void)setupReportData;
- (id)m_oVerifyContact;
- (void)setM_oVerifyContact:(id)arg1;
- (id)m_oChatContact;
- (void)setM_oChatContact:(id)arg1;
- (id)m_oSourceMsg;
- (void)setM_oSourceMsg:(id)arg1;
- (id)recommandRemark;
- (void)setRecommandRemark:(id)arg1;
- (id)m_logicVC;
- (void)setM_logicVC:(id)arg1;
- (BOOL)m_isShowRighImage;
- (void)setM_isShowRighImage:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned long long)m_qrCodeAddFriendScene;
- (void)setM_qrCodeAddFriendScene:(unsigned long long)arg1;
- (BOOL)m_bVerifyToMe;
- (void)setM_bVerifyToMe:(BOOL)arg1;
- (id)verifyContent;
- (void)setVerifyContent:(id)arg1;
- (unsigned int)m_uiOpCode;
- (void)setM_uiOpCode:(unsigned int)arg1;
- (long long)contactInfoViewSource;
- (void)setContactInfoViewSource:(long long)arg1;
- (id)m_sectionInfoTagCellInfo;
- (void)setM_sectionInfoTagCellInfo:(id)arg1;
- (BOOL)hasFilledRemark;
- (void)setHasFilledRemark:(BOOL)arg1;
- (long long)addRemarkCode;
- (void)setAddRemarkCode:(long long)arg1;
- (long long)recomRemarkType;
- (void)setRecomRemarkType:(long long)arg1;
- (BOOL)recomRemarkIsClick;
- (void)setRecomRemarkIsClick:(BOOL)arg1;
- (BOOL)recomRemarkClickStatus;
- (void)setRecomRemarkClickStatus:(BOOL)arg1;
- (BOOL)remarkSelectorUsed;
- (void)setRemarkSelectorUsed:(BOOL)arg1;
- (long long)cardImgCount;
- (void)setCardImgCount:(long long)arg1;
- (long long)descriptionCharLength;
- (void)setDescriptionCharLength:(long long)arg1;
- (id)editViewNewlyCreatedTags;
- (void)setEditViewNewlyCreatedTags:(id)arg1;
- (id)editViewAddedTags;
- (void)setEditViewAddedTags:(id)arg1;
- (id)tableViewNewlyCreatedTags;
- (void)setTableViewNewlyCreatedTags:(id)arg1;
- (id)tableViewAddedTags;
- (void)setTableViewAddedTags:(id)arg1;
- (id)remarkReportSessionId;
- (void)setRemarkReportSessionId:(id)arg1;
- (BOOL)descSelectorIconExpo;
- (void)setDescSelectorIconExpo:(BOOL)arg1;
- (BOOL)descSelectorIconClick;
- (void)setDescSelectorIconClick:(BOOL)arg1;
- (BOOL)descSelectorIconUsed;
- (void)setDescSelectorIconUsed:(BOOL)arg1;
- (BOOL)hasFilledOrSavedHelloMsg;
- (void)setHasFilledOrSavedHelloMsg:(BOOL)arg1;
- (BOOL)hasEditHelloMsg;
- (void)setHasEditHelloMsg:(BOOL)arg1;
- (void).cxx_destruct;
@end

