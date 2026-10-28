@interface WCPayGPLaunchControlLogic : WCPayControlLogic <WCPayGPSelectMemberControllerDelegate, PBMessageObserverDelegate, WCBaseControlLogicDeleagte, WCPayGPMemberFillMoneyControllerDelegate, ICdnComMgrExt, WCPayGPCustomizeLaunchCgiDelegate, WCPayGPLaunchViewControllerV2Delegate, WCPaySolitairePageSheetDelegate, SolitaireDisplayViewControllerDelegate>
{
    BOOL _bEnableReportLocation; // +0x38
    BOOL _bEnableReportSSID; // +0x39
    BOOL _bIsLaunchSucc; // +0x3a
    BOOL _bIsSoliThemeCut; // +0x3b
    unsigned long long _launchTimeStamp; // +0x40
    NSMutableArray * _solitaireList; // +0x48
    WCPaySolitairePageSheet * _solitairePageSheet; // +0x50
    id <WCPayGPLaunchControlLogicDelegate> _launchDelegate; // +0x58
    NSString * _currentUploadCliMsgId; // +0x60
    WCPayGPCustomizeLaunchCgi * _customizeLaunchCgi; // +0x68
    NSString * _launchBillNo; // +0x70
    long long _launchPayerCount; // +0x78
    NSString * _soliMemContentInfo; // +0x80
}
- (void)dealloc;
- (id)initWithChatroomContact:(id)arg1 fromScene:(unsigned long long)arg2;
- (id)initWithChatroomContact:(id)arg1 fromScene:(unsigned long long)arg2 amount:(long long)arg3 title:(id)arg4;
- (id)initWithQueryPfInfoData:(id)arg1;
- (void)setLaunchLogicDelegate:(id)arg1;
- (void)stopLogic;
- (void)startLogic;
- (void)setupGroupPayOperationData;
- (void)loadConfigDataCache;
- (void)setupPfData;
- (void)reportLocationAndWifi;
- (void)onWCPayGPLaunchViewControllerCancel;
- (void)onWCPayGPLaunchVCClickSelectMemberBtn:(id)arg1 withIgnoreContact:(id)arg2 withSelectMemberSource:(unsigned long long)arg3;
- (void)onWCPayGPLaunchVCClickToMemberFillMoneyMode;
- (void)onWCPayGPLaunchVCClickToMemberFillMoneyVCWithSelectedContact:(id)arg1 withUserPayAmountDict:(id)arg2;
- (id)getGroupPayReportData:(unsigned long long)arg1 launchTheme:(id)arg2;
- (void)launchCommonAARequestWithMemberCount:(unsigned int)arg1 perMemberAmount:(unsigned long long)arg2 activityTheme:(id)arg3 payerUsernameArray:(id)arg4;
- (void)launchActivityAARequestWithActivityTheme:(id)arg1 totalAmount:(unsigned long long)arg2 payerItems:(id)arg3;
- (void)launchCustomizeAARequestWithActivityTheme:(id)arg1;
- (void)onWCPayGPLaunchVCClickOrderHistoryEntry;
- (void)onWCPayGPLaunchVCNeedUploadImage:(id)arg1;
- (void)continueUploadCdnWithClientMsgId:(id)arg1 filePath:(id)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void)onWCPayGPSelectViewControllerCancel;
- (void)onWCPayGPSelectViewControllerFinish:(id)arg1;
- (void)onWCPayGPMemberFillMoneyControllerCancel;
- (void)onWCPayGPMemberFillMoneyControllerBackWithSelectContact:(id)arg1 withUserPayAmountDict:(id)arg2;
- (void)sendGroupPaySvrConfigRequest;
- (void)onGetGroupPaySvrConfigResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetCommonAALaunchResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetActivityAALaunchResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetCustomizeLaunchResp:(id)arg1;
- (void)addAAC2CMsgWithMsgContent:(id)arg1;
- (void)saveGroupPaySvrConfig:(id)arg1;
- (void)dismissAndStopLogic;
- (id)genWCRealnameInfoFromRealnameItem:(id)arg1;
- (void)openH5WithUrl:(id)arg1;
- (void)notifyViewControllerAfterLaunchSucc;
- (BOOL)showImportFromSolitaireEntry;
- (void)onWCPayGPLaunchVCClickImportFromSolitaire;
- (void)showSolitairePageSheet;
- (void)onSolitairePageSheetClickCancel;
- (void)onSolitairePageSheetClickShowDetail:(id)arg1;
- (void)onSolitairePageSheetClickImport:(id)arg1;
- (void)onSolitaireDisplayViewControllerDismiss;
- (BOOL)bEnableReportLocation;
- (void)setBEnableReportLocation:(BOOL)arg1;
- (BOOL)bEnableReportSSID;
- (void)setBEnableReportSSID:(BOOL)arg1;
- (unsigned long long)launchTimeStamp;
- (void)setLaunchTimeStamp:(unsigned long long)arg1;
- (id)solitaireList;
- (void)setSolitaireList:(id)arg1;
- (id)solitairePageSheet;
- (void)setSolitairePageSheet:(id)arg1;
- (id)launchDelegate;
- (void)setLaunchDelegate:(id)arg1;
- (id)currentUploadCliMsgId;
- (void)setCurrentUploadCliMsgId:(id)arg1;
- (id)customizeLaunchCgi;
- (void)setCustomizeLaunchCgi:(id)arg1;
- (BOOL)bIsLaunchSucc;
- (void)setBIsLaunchSucc:(BOOL)arg1;
- (id)launchBillNo;
- (void)setLaunchBillNo:(id)arg1;
- (long long)launchPayerCount;
- (void)setLaunchPayerCount:(long long)arg1;
- (BOOL)bIsSoliThemeCut;
- (void)setBIsSoliThemeCut:(BOOL)arg1;
- (id)soliMemContentInfo;
- (void)setSoliMemContentInfo:(id)arg1;
- (void).cxx_destruct;
@end
