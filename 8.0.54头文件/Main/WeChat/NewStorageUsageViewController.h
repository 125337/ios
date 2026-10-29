@interface NewStorageUsageViewController : MMUIViewController <MMDiskUsageScannerDelegate, StorageUsageDetailViewDelegate, IChatLogDataMgrExt, StorageCacheClassDelegate, StorageDeepCleanDelete>
{
    MMUIScrollView * m_backgroundView; // +0x68
    UIView * m_headerView; // +0x70
    StorageUsageLoadingView * m_loadingView; // +0x78
    UIView * m_resultView; // +0x80
    StorageUsageSummaryView * m_summaryView; // +0x88
    StorageUsageDetailView * m_detailView; // +0x90
    StorageUsageDetailView * m_chatLogDetailView; // +0x98
    NSMutableArray * m_storedDetailViews; // +0xa0
    MMDiskUsageScaner * m_usageScanner; // +0xa8
    StorageUsageSummaryModel * m_summaryModel; // +0xb0
    UILabel * m_statmentLabel; // +0xb8
    BOOL m_hasScanned; // +0xc0
    BOOL m_isLoading; // +0xc1
    unsigned long long m_cleanSize; // +0xc8
    unsigned long long m_chatlogDBSize; // +0xd0
    double _startScanTime; // +0xd8
    NSMutableArray * _cacheClassifycation; // +0xe0
    NSArray * _deepCleanArray; // +0xe8
}
- (void)dealloc;
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
- (void)loadingResultViewWithProgress:(float)arg1 isAvailabled:(BOOL)arg2;
- (void)scanDiskBeginUseCache:(BOOL)arg1;
- (void)onDiskUsageScanProgress:(float)arg1 isAvailabled:(BOOL)arg2;
- (void)onDiskUsageScanStart;
- (void)onDiskUsageScanFinishedWithScanStat:(id)arg1;
- (void)onDiskUsageScanCancel;
- (void)onReturn;
- (void)onManageChatLogButtonClicked:(id)arg1;
- (void)onClearCacheButtonClicked:(id)arg1;
- (void)onDeepCleanButtonClicked:(id)arg1;
- (void)onChatLogDataMgrCleanSize:(unsigned long long)arg1;
- (void)onStorageCacheClean:(unsigned long long)arg1;
- (void)onStorageDeepClean:(unsigned long long)arg1;
- (double)startScanTime;
- (void)setStartScanTime:(double)arg1;
- (id)cacheClassifycation;
- (void)setCacheClassifycation:(id)arg1;
- (id)deepCleanArray;
- (void)setDeepCleanArray:(id)arg1;
- (void).cxx_destruct;
@end

