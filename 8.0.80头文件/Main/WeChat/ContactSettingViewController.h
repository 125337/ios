@interface ContactSettingViewController : MMUIViewController <WCActionSheetDelegate, ForwardMessageLogicDelegate, IOplogExt, IOpenImContactMgrExt, IOpenImOplogExt, IBotContactOplogExt, SetPermissionsViewControllerDelegate>
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    CContact * m_contact; // +0x78
    id <ContactInfoAssistDelegate> m_delegate; // +0x80
    WCOpLog * _wcOpLog; // +0x88
    BOOL m_isDeleteContactOplog; // +0x90
    NSString * m_recommandRemark; // +0x98
    unsigned int m_scene; // +0xa0
    SocialInfomationViewController * m_socialInfoController; // +0xa8
    BOOL m_initIsFavour; // +0xb0
    BOOL m_isHadReportAsyncRelationUpdate; // +0xb1
    ForwardMessageLogicController * m_forwardLogic; // +0xb8
    DelaySwitchSettingLogic * m_delaySwitchLogic; // +0xc0
    BOOL m_toBeDeleted; // +0xc8
    BOOL _bDisableAllOperation; // +0xc9
    BOOL _needDeleteSession; // +0xca
    BOOL _bIsUserNewSetting; // +0xcb
    unsigned int _m_uiVerify; // +0xcc
    NSString * _m_chatRoomUsrname; // +0xd0
    ContactRelatedGroupLogic * _relatedGroupLogic; // +0xd8
    id <ContactSettingViewControllerDelegate> _viewDelegate; // +0xe0
    NSString * _viewControllerTitle; // +0xe8
    CMessageWrap * _sourceMsg; // +0xf0
    unsigned long long _enter50321Path; // +0xf8
    long long _contactInfoViewSource; // +0x100
}
- (void)reportContactRelationUpdateBlackOrDeleteAction:(BOOL)arg1 isAdd:(BOOL)arg2 isResult:(BOOL)arg3 returnCode:(int)arg4;
- (void)reportContactRelationUpdateBlackOrDeleteResultActionWithRet:(int)arg1 cgiWrap:(id)arg2 isOpenIM:(BOOL)arg3;
- (void)reportContactRelationUpdateDoAction;
- (void)addNewRemarkCellWithSection:(id)arg1;
- (void)onSocialInfoHandle;
- (void)addNewPermissionCellWithSection:(id)arg1;
- (void)opNewEditSetPermission;
- (void)reloadSocialInfoController;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 inScene:(unsigned int)arg2;
- (void)dealloc;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)isInMyContactList;
- (BOOL)isShowBlackAction;
- (BOOL)isShowExposeAction;
- (BOOL)shouldRestrictContentViewSize;
- (void)removeFromBlackList;
- (void)addToBlackList;
- (void)doAddToBlackListAndExpose;
- (void)doDeleteAndExpose;
- (void)viewDidAppear:(BOOL)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doAddToBlackList;
- (void)cancelBlackListSwitch;
- (void)opBlackList;
- (void)opExpose;
- (void)doExpose:(int)arg1;
- (void)onExposeByRecommand;
- (void)doDeleteLocal;
- (void)checkDeleteContact:(id)arg1;
- (void)onArriveFundCancelDeleteContact;
- (void)onArriveFundConfirmDeleteContact;
- (void)doDeleteConfirm:(id)arg1;
- (void)opDelete:(id)arg1;
- (void)opQuickMessage;
- (void)opClearMsg;
- (void)opShareMyFriend;
- (void)opShareMyFriendCore;
- (id)getCurrentViewController;
- (void)opEditRemarkName;
- (void)opChangeWeClawAvatar;
- (void)opChangeCustasstAvatar;
- (void)makeWeClawAvatarCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeWeClawRemarkCell:(id)arg1 CellInfo:(id)arg2;
- (void)opEditWeClawRemark;
- (void)makeCustAsstAvatarCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeCustAsstNicknameCell:(id)arg1 CellInfo:(id)arg2;
- (void)opCustAsstNicknameEdit;
- (void)opCustAsstDelete;
- (void)doDeleteCustAsst;
- (void)onBotContactOplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)opFavour;
- (void)fetchStarAskPromptAndShowToast;
- (void)opEditSetPermission;
- (id)getContactSetPermissionsViewController;
- (void)realDoDeleteWithDeleteAllMsg:(BOOL)arg1;
- (void)realDoAddOrRemoveBlack:(BOOL)arg1;
- (void)onOpenImOplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)addShareContactSection;
- (void)addFavourSection;
- (void)addPermissionCellWithSection:(id)arg1;
- (void)addBlackAndExposeSection;
- (void)addRemarkCellWithSection:(id)arg1;
- (void)addDeleteSection;
- (void)makeSignCell:(id)arg1;
- (void)reloadTableView;
- (void)reloadFileHelperContactTableInfo;
- (BOOL)isNeedVerify;
- (BOOL)isContactShakeOrLBS;
- (BOOL)isOpenFromstrangerShareCard;
- (void)reportContactInfoItemClickWithReportScene:(long long)arg1 andActionResultCode:(long long)arg2;
- (void)reportDeleteContactEvent;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)m_recommandRemark;
- (void)setM_recommandRemark:(id)arg1;
- (BOOL)bDisableAllOperation;
- (void)setBDisableAllOperation:(BOOL)arg1;
- (id)m_chatRoomUsrname;
- (void)setM_chatRoomUsrname:(id)arg1;
- (unsigned int)m_uiVerify;
- (void)setM_uiVerify:(unsigned int)arg1;
- (id)relatedGroupLogic;
- (void)setRelatedGroupLogic:(id)arg1;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (BOOL)needDeleteSession;
- (void)setNeedDeleteSession:(BOOL)arg1;
- (id)viewControllerTitle;
- (void)setViewControllerTitle:(id)arg1;
- (BOOL)bIsUserNewSetting;
- (void)setBIsUserNewSetting:(BOOL)arg1;
- (id)sourceMsg;
- (void)setSourceMsg:(id)arg1;
- (unsigned long long)enter50321Path;
- (void)setEnter50321Path:(unsigned long long)arg1;
- (long long)contactInfoViewSource;
- (void)setContactInfoViewSource:(long long)arg1;
- (void).cxx_destruct;
@end
