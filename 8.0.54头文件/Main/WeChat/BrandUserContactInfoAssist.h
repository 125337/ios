@interface BrandUserContactInfoAssist : CBaseContactInfoAssist <UITableViewDelegate, UITableViewDataSource, IWCDeviceBrandMgrExt, IEnterpriseContactMgrExt, IEnterpriseBrandContactMgrExt, ICertInfoMgrExt, IHDHeadImageViewExt>
{
    UIButton * _viewMsgBtn; // +0x50
    UIButton * _followBtn; // +0x58
    BOOL _isSettingsChanged; // +0x60
    BOOL _isMuteChanged; // +0x61
    BOOL _isTopSessionSwitchOn; // +0x62
    BOOL _isReceiveMessageSwitchOn; // +0x63
    BOOL _isClickedTopSessionSwitch; // +0x64
    BOOL _isEnterpriseSessionTopChanged; // +0x65
    BOOL _needGetWorker; // +0x66
    BOOL _isEnterpriseMainBrandMuteOn; // +0x67
    NSArray * _bindWorkerList; // +0x68
    MMBrandHeadImageView * m_brandHeadView; // +0x70
    NSMutableArray * m_arrData; // +0x78
    MMTableView * m_tableView; // +0x80
    CertInfo * m_certInfo; // +0x88
    NSArray * _arrBindWeAppInfo; // +0x90
    WCADPageWrap * _profilePageWrap; // +0x98
    unsigned int _lastCertificationFlag; // +0xa0
    BOOL _isJustAddedContact; // +0xa4
    WOAPPrivacyConfirmLogic * _privacyConfirmLogic; // +0xa8
    unsigned int _searchFromIndex; // +0xb0
    NSString * _searchKeyword; // +0xb8
    NSString * _searchExtraParamsString; // +0xc0
    id <ContactInfoAssistDelegate> _delegate; // +0xc8
}
- (BOOL)isFromNotifyMessage;
- (void)recordProfilePageWrap;
- (void)profileDestory;
- (void)dealloc;
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (void)initTableView;
- (id)GetTableView;
- (void)onHDHeadImageWillAppear;
- (void)onHDHeadImageDidDisappear;
- (void)initHeaderView;
- (void)adjustNickNameAndUserNameLabelVerticalCenter;
- (void)updateNavigationBarRightButton;
- (void)initHeadImage;
- (void)initHDHeadImage;
- (void)initNickNameLabel;
- (void)initFooterView;
- (void)onBrandExpose;
- (void)updateNickNameLabel;
- (unsigned int)transToReportScene;
- (void)reloadRowData;
- (void)makeSignatureCell:(id)arg1;
- (void)makeRegisterBodyCell:(id)arg1;
- (id)getVerifySourceAttributedString;
- (void)makeVerifySourceCell:(id)arg1;
- (void)makeTrandemarkBodyCell:(id)arg1;
- (void)makePrivilegesCell:(id)arg1;
- (void)makeUrlCell:(id)arg1 withData:(id)arg2;
- (BOOL)shouldReceiveEnterpriseMessage;
- (BOOL)shouldEnterpriseStickyOnTop;
- (void)makeBlockMessageNotifyCell:(id)arg1;
- (void)makeTopSessionCell:(id)arg1;
- (void)makeEnterpriseBlockMessageCell:(id)arg1;
- (void)makeEnterpriseBrandStikyOnTopCell:(id)arg1;
- (void)makeEnterpriseChatEntryCell:(id)arg1;
- (void)makeNewMessageNotificationCell:(id)arg1;
- (void)makeTemplateMsgRecvCell:(id)arg1;
- (void)makeHideFromProfileCell:(id)arg1;
- (void)makeAllowPositionCell:(id)arg1;
- (void)makeEnterEnterpriseCell:(id)arg1;
- (void)makeServicePhoneCell:(id)arg1 withPhone:(id)arg2;
- (void)makeMerchantRatings:(id)arg1;
- (void)makeMerchantSecurityCell:(id)arg1;
- (void)makeBusinessScopeCell:(id)arg1;
- (double)widthForBusinessScopeTitleLabel;
- (void)makeDisableEnterpriseSubBrand:(id)arg1;
- (void)makeBindWeAppListCell:(id)arg1;
- (id)bindWeAppIconViewWithFrame:(CGRect)arg1 url:(id)arg2;
- (void)updateFooterView;
- (BOOL)hasDeviceUserData;
- (BOOL)isDeviceBound;
- (void)reloadView;
- (void)onContactUpdated;
- (void)reloadTableView;
- (void)checkUpdateCertInfo;
- (void)handleAddedContact;
- (void)newMessageWithContact:(id)arg1 afterDelay:(double)arg2;
- (void)updateTitleView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)makeCell:(id)arg1 row:(unsigned long long)arg2 section:(unsigned int)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onCallServicePhone:(id)arg1;
- (void)onTemplateMsgRecv;
- (void)onEnterEnterpriseChat;
- (void)onEnterEnterprise;
- (long long)calTrademarkBodyHeight;
- (long long)calRegisterBodyCellHeight;
- (long long)calSignatureCellHeight;
- (long long)calBusinessScopeCellHeight;
- (long long)calVerifySourceCellHeight;
- (long long)calPrivilegesCellHeight;
- (long long)getPrivilegeItemHeight:(id)arg1;
- (void)onBindDevice;
- (void)onAddToContacts;
- (void)finallyAddToContacts;
- (void)onShowCancelFocusTips:(id)arg1;
- (void)cancelFocus;
- (void)onWCDeviceBindEnd:(id)arg1 Error:(id)arg2;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (id)getMatchDescription:(id)arg1;
- (id)getPrivilegeIcon:(id)arg1;
- (id)getMatchTitle:(id)arg1;
- (id)getUrlItemDescription:(id)arg1;
- (id)getUrlItemUrl:(id)arg1;
- (id)getTitleKey:(id)arg1;
- (id)getBrandInfoItemAndRemoveIt:(id)arg1 fromArray:(id)arg2;
- (void)updateBindWeAppInfo;
- (void)onClickNavRightButton;
- (void)onClearContent;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onAllowPositionChanged:(id)arg1;
- (void)onProvideLocationConfirm;
- (void)onProvideLocationCancel;
- (void)onEnterWebView:(id)arg1;
- (void)onShowSwitchChanged:(id)arg1;
- (void)onBlockSwitchChanged:(id)arg1;
- (void)onTopSessionSwitchChanged:(id)arg1;
- (void)onEnterpriseBlockSwitchChanged:(id)arg1;
- (void)onEnterpriseStickyOnTopSwitchChanged:(id)arg1;
- (void)onNotificationSwitchChanged:(id)arg1;
- (void)addLocalSystemMessageWhenSwitchChanged;
- (void)opLogToSvr;
- (void)opLogToSvrForTopSession;
- (void)onShowMessage;
- (void)onSwitchEnableEnterpriseSubBrand;
- (void)onOpenBindWeAppList;
- (void)onEnableEnterpriseSubBrandBtnSwitched:(id)arg1;
- (void)switchEnableEnterpriseSubBrand;
- (void)contactAddContactOk:(id)arg1;
- (id)getAlertTitleForVerifyLogic:(id)arg1;
- (id)getAlertMessageForVerifyLogic:(id)arg1;
- (double)getVerifySourceRightWidth;
- (double)getRegisterBodyRightWidth;
- (BOOL)isContactExpired;
- (BOOL)isInCustomAlertMode;
- (void)kvReportModifyWithUserName:(id)arg1 Type:(unsigned int)arg2;
- (double)getRightLabelWidth;
- (BOOL)isTempBrandSession;
- (void)onUpdateMyContactUserFlag:(id)arg1 bitMask:(unsigned int)arg2 errCode:(int)arg3;
- (void)onUpdateMyEnterpriseContact:(id)arg1 errCode:(int)arg2;
- (void)onEnterpriseBrandSyncToSvrCompleted:(id)arg1 extParams:(id)arg2;
- (void)onEnterpriseBrandAttrChanged:(id)arg1;
- (void)OnUpdateCertInfo;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getSearchClickId;
- (id)m_arrData;
- (void)setM_arrData:(id)arg1;
- (id)searchKeyword;
- (void)setSearchKeyword:(id)arg1;
- (unsigned int)searchFromIndex;
- (void)setSearchFromIndex:(unsigned int)arg1;
- (id)searchExtraParamsString;
- (void)setSearchExtraParamsString:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

