@interface BrandProfileSettingViewController : MMUIViewController <WCActionSheetDelegate, IMMTemplateMsgAuthServiceExt, PBMessageObserverDelegate>
{
    BOOL _isNewMessageNotifySwitchOn; // +0x70
    BOOL _isReceiveMessageSwitchOn; // +0x71
    BOOL _isProvideLocationSwitchOn; // +0x72
    BOOL _hasTemplateMsgAuthCell; // +0x73
    BrandProfileReporter * _reporter; // +0x78
    MMTableViewInfo * _tableViewInfo; // +0x80
    double _tableViewWidth; // +0x88
    unsigned int _scene; // +0x90
    unsigned int _profileEnterTimeStamps; // +0x94
    id <BrandProfileSettingViewControllerDelegate> _delegate; // +0x98
    CContact * _brandContact; // +0xa0
    NSMutableDictionary * _extInfo; // +0xa8
    JSAPIGetAllUseUserInfoResponse * _jsAPIGetAllUseUserInfoResponse; // +0xb0
    MMUILabel * _emptyLabel; // +0xb8
    NSString * _appId; // +0xc0
}
- (id)loveSwitchTitleViewWithTitle:(id)arg1 icon:(id)arg2;
- (id)buildLoveBlockSwitchCellWithFixedStandardHeight:(BOOL)arg1;
- (void)dealloc;
- (void)addLocalSystemMessageWhenReceiveMessageSwitchChanged;
- (id)init;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)setBrandContact:(id)arg1;
- (void)initTableViewInfo;
- (void)initEmptyWordingView;
- (void)viewDidLayoutSubviews;
- (void)reloadTableViewInfo;
- (void)onFetchShowInSettingScopeList:(id)arg1 forUser:(id)arg2 hasSettingEntry:(BOOL)arg3;
- (void)switchNewMessageNotificationCell:(id)arg1;
- (void)switchReceiveMessageCell:(id)arg1;
- (void)switchProvideLocationCell:(id)arg1;
- (void)switchRecordScopeAuthState:(id)arg1;
- (void)switchLocationScopeAuthState:(id)arg1;
- (void)onProvideLocationConfirm;
- (void)onProvideLocationCancel;
- (void)clickTemplateMsgMgr;
- (void)switchFinderFeedsBlockCell:(id)arg1;
- (void)switchLoveBlockCell:(id)arg1;
- (void)openAuthorizedScopeVC;
- (void)openAuthList;
- (void)clickClearMessageCell;
- (void)reportClearMessage;
- (void)commitNotifyOpenIfNeeded;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)appId;
- (void)requestAuthorizedInfo;
- (void)requsetModifyUsedUserInfoWithScope:(id)arg1 Switch:(id)arg2;
- (void)handleGetBizAuthInfoResponse:(id)arg1;
- (void)handleModBizUseUserInfoResponse:(id)arg1;
- (BOOL)isInMyContactList;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)brandContact;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)profileEnterTimeStamps;
- (void)setProfileEnterTimeStamps:(unsigned int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)jsAPIGetAllUseUserInfoResponse;
- (void)setJsAPIGetAllUseUserInfoResponse:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (void)setAppId:(id)arg1;
- (void).cxx_destruct;
@end
