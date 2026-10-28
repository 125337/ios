@interface NewStorageUsageViewController : MMUIViewController <MMDiskUsageScannerDelegate, StorageUsageDetailViewDelegate, IChatLogDataMgrExt, MMCleanCacheMgrExt, StorageDeepCleanDelete, WCLongCacheCleanExt>
{
    MMUIScrollView * m_backgroundView; // +0x70
    UIView * m_headerView; // +0x78
    StorageUsageLoadingView * m_loadingView; // +0x80
    UIView * m_resultView; // +0x88
    StorageUsageSummaryView * m_summaryView; // +0x90
    StorageUsageDetailView * m_cacheDetailView; // +0x98
    StorageUsageDetailView * m_chatLogDetailView; // +0xa0
    StorageUsageDetailView * m_deepCleanView; // +0xa8
    StorageUsageDetailView * m_resourceView; // +0xb0
    StorageUsageDetailView * m_otherAccountView; // +0xb8
    NSMutableArray * m_storedDetailViews; // +0xc0
    MMDiskUsageScaner * m_usageScanner; // +0xc8
    StorageUsageSummaryModel * m_summaryModel; // +0xd0
    UILabel * m_statmentLabel; // +0xd8
    BOOL m_hasScanned; // +0xe0
    BOOL m_isLoading; // +0xe1
    unsigned long long m_cleanSize; // +0xe8
    unsigned long long m_chatlogDBSize; // +0xf0
    BOOL _bUseOldChatLogManage; // +0xf8
    BOOL _bShowRawMediaClean; // +0xf9
    BOOL _bAlreadyReportData; // +0xfa
    BOOL _bAnalyseMiddleImage; // +0xfb
    int _loadingRes; // +0xfc
    double _startScanTime; // +0x100
    NSMutableArray * _cacheClassifycation; // +0x108
    NSArray * _deepCleanArray; // +0x110
    NSObject<OS_dispatch_queue> * _diskAsyncQueue; // +0x118
    double _startLoadCleanData; // +0x120
    unsigned long long _cacheCanCleanSize; // +0x128
    NSTimer * _fakeProgressTimer; // +0x130
    unsigned long long _scene; // +0x138
}
- (void)dealloc;
- (id)init;
- (id)initWithScene:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)onLongPressNavBar;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)showLoadingView;
- (void)layoutLoadingView;
- (void)showResultView;
- (void)layoutResultView;
- (void)loadingResultViewWithProgress:(float)arg1 isAvailabled:(BOOL)arg2 progressType:(unsigned long long)arg3;
- (void)notifyResultWithType:(unsigned long long)arg1;
- (BOOL)showResultUsingCache;
- (void)scanDiskBeginUseCache:(BOOL)arg1;
- (void)startChatLogAndCacheScan;
- (void)onDiskUsageScanProgress:(float)arg1 isAvailabled:(BOOL)arg2;
- (void)onDiskUsageScanStart;
- (void)onDiskUsageScanFinishedWithScanStat:(id)arg1;
- (void)onDiskUsageScanCancel;
- (void)onReturn;
- (void)onManageChatLogButtonClicked:(id)arg1;
- (void)onClearCacheButtonClicked:(id)arg1;
- (void)onDeepCleanButtonClicked:(id)arg1;
- (void)onCleanResourceButtonClicked:(id)arg1;
- (void)onCleanOtherAccountButtonClicked:(id)arg1;
- (void)onGoToLongCleanCacheButton:(id)arg1;
- (void)newDeepClean:(id)arg1 tips:(id)arg2 totalSize:(unsigned long long)arg3 detailView:(id)arg4 type:(int)arg5;
- (void)onRawCleanStateChange;
- (void)onRawMediaCleanFinish;
- (void)p_realStartLoadChatLogDataMgrWithProgress:(BOOL)arg1;
- (void)onChatLogDataMgrCleanSize:(unsigned long long)arg1;
- (void)onChatLogDataLoad:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onChatLogDataLoadFinished;
- (void)reportSessionData;
- (void)reportNewTopSession;
- (void)onCacheCleanSize:(unsigned long long)arg1;
- (void)onCacheMgrGetDetailProgress:(float)arg1;
- (void)onStorageDeepClean:(unsigned long long)arg1;
- (double)startScanTime;
- (void)setStartScanTime:(double)arg1;
- (id)cacheClassifycation;
- (void)setCacheClassifycation:(id)arg1;
- (id)deepCleanArray;
- (void)setDeepCleanArray:(id)arg1;
- (id)diskAsyncQueue;
- (void)setDiskAsyncQueue:(id)arg1;
- (double)startLoadCleanData;
- (void)setStartLoadCleanData:(double)arg1;
- (BOOL)bUseOldChatLogManage;
- (void)setBUseOldChatLogManage:(BOOL)arg1;
- (BOOL)bShowRawMediaClean;
- (void)setBShowRawMediaClean:(BOOL)arg1;
- (BOOL)bAlreadyReportData;
- (void)setBAlreadyReportData:(BOOL)arg1;
- (BOOL)bAnalyseMiddleImage;
- (void)setBAnalyseMiddleImage:(BOOL)arg1;
- (unsigned long long)cacheCanCleanSize;
- (void)setCacheCanCleanSize:(unsigned long long)arg1;
- (int)loadingRes;
- (void)setLoadingRes:(int)arg1;
- (id)fakeProgressTimer;
- (void)setFakeProgressTimer:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
