@interface WCPayMainViewLogicController : NSObject <IWCPayControlLogicExt, WCPayOpenECardControlLogicExt, WCPayWalletGetAllFunctionCgiDelegate, LocationRetrieveDelegate, WCPayGetGDPRInfoCgiDelegate, KindaPageExt>
{
    BOOL _bHasGetPayCardList; // +0x8
    BOOL _bNeedUpdateOnAppear; // +0x9
    BOOL _bHasSubTitleCell; // +0xa
    BOOL _bHasPreloadWeAppEnv; // +0xb
    BOOL _bHasPrefetchWeApp; // +0xc
    unsigned int _paycardListLogicTag; // +0x10
    WCPayControlData * _data; // +0x18
    id <WCPayMainViewLogicControllerDelegate> _delegate; // +0x20
    WCPayWalletGetAllFunctionCgi * _getAllFunctionCgi; // +0x28
    GetAllFunctionResponse * _walletFunctionResp; // +0x30
    LocationRetriever * _locationRetriver; // +0x38
    WCPayJumpRemindControlLogic * _jumpRemindControlLogic; // +0x40
    WCPayGetGDPRInfoCgi * _getGDPRinfoCgi; // +0x48
}
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)setupData;
- (void)getViewDataFromSvr;
- (void)getWalletFounctionDataFromSvr;
- (void)setupReportData;
- (void)checkLocationAndWifiData;
- (void)refreshWithData:(id)arg1;
- (id)getControlData;
- (void)refreshViewDataWhenPopOrDismiss;
- (void)setNeedUpdateOnAppear;
- (BOOL)checkIfNeedUpdateOnAppear;
- (id)getEnterManageSettingWording;
- (id)getAllFunctionDetailData;
- (id)getLastActivityItemIndexPath;
- (BOOL)useSmallBottomMarginInSection;
- (long long)dataSectionCount;
- (id)dataGroupInfoWithSection:(long long)arg1;
- (long long)dataRowCountWithSectionIndex:(long long)arg1;
- (id)dataItemWithIndexPath:(id)arg1;
- (id)dataHeaderWithSectionIndex:(long long)arg1;
- (void)handleCollectionViewDidSelectWithIndexPath:(id)arg1;
- (void)OnKindaWebViewClose;
- (void)onKindaWebViewPassParams:(id)arg1 returnParams:(id)arg2;
- (void)OnPayCardListChanged:(id)arg1;
- (void)onContinuePayCardListChanged:(id)arg1;
- (void)OnGetLocalCachePayCardList:(id)arg1;
- (void)openECardLogicDidSuccess:(id)arg1;
- (void)onGetWalletAllFunctionCgiResp:(id)arg1;
- (void)checkAndPreloadMiniApp;
- (void)checkAndPrefetchMiniApp;
- (void)calcHasSubTitleCell;
- (void)OnWCPayGetGDPRInfoCgiResponseOK:(id)arg1;
- (void)OnWCPayGetGDPRInfoCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)stopPayCardListLogic;
- (id)data;
- (void)setData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)getAllFunctionCgi;
- (void)setGetAllFunctionCgi:(id)arg1;
- (id)walletFunctionResp;
- (void)setWalletFunctionResp:(id)arg1;
- (id)locationRetriver;
- (void)setLocationRetriver:(id)arg1;
- (id)jumpRemindControlLogic;
- (void)setJumpRemindControlLogic:(id)arg1;
- (id)getGDPRinfoCgi;
- (void)setGetGDPRinfoCgi:(id)arg1;
- (unsigned int)paycardListLogicTag;
- (void)setPaycardListLogicTag:(unsigned int)arg1;
- (BOOL)bHasGetPayCardList;
- (void)setBHasGetPayCardList:(BOOL)arg1;
- (BOOL)bNeedUpdateOnAppear;
- (void)setBNeedUpdateOnAppear:(BOOL)arg1;
- (BOOL)bHasSubTitleCell;
- (void)setBHasSubTitleCell:(BOOL)arg1;
- (BOOL)bHasPreloadWeAppEnv;
- (void)setBHasPreloadWeAppEnv:(BOOL)arg1;
- (BOOL)bHasPrefetchWeApp;
- (void)setBHasPrefetchWeApp:(BOOL)arg1;
- (void).cxx_destruct;
@end
