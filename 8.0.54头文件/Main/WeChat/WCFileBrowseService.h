@interface WCFileBrowseService : MMUserService <IMsgExt, IFileDetailExt, WXGImportMessageNotification, MMServiceProtocol>
{
    BOOL _bOpen; // +0x8
    BOOL _bLoadingChatLogFile; // +0x9
    BOOL _bLoadingFavFile; // +0xa
    WCFileBrowseInfoDB * _browseInfoDB; // +0x10
    NSObject<OS_dispatch_queue> * _fileBrowseQueue; // +0x18
    WCFileBrowseBuildIndexOperation * _buildIndexOperation; // +0x20
    NSString * _currentSearchText; // +0x28
    NSMutableArray * _fileBrowseInfoArray; // +0x30
    NSMutableArray * _fileBrowseInfoSectionArray; // +0x38
    NSMutableArray * _favFileBrowseInfoArray; // +0x40
    NSMutableArray * _favFileBrowseInfoSectionArray; // +0x48
    NSMutableArray * _searchResultInfoSectionArray; // +0x50
    WCFileBrowseKVLog * _kvLogObj; // +0x58
}
+ (id)p_getFullDateStringOfTime:(unsigned int)arg1;
+ (id)p_getFileBrowseInfoSectionArray:(id)arg1;
- (void)onServiceInit;
- (void)reloadInfo;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)startBuildIndexOperation;
- (void)existFileBrowser;
- (BOOL)shouldOpen;
- (id)fileBrowseQueue;
- (id)getFileBrowseSectionTitleForSection:(unsigned long long)arg1 withDataType:(unsigned long long)arg2;
- (id)getFileBrowseSectionTitleForSection:(unsigned long long)arg1 withDataType:(unsigned long long)arg2 andChatName:(id)arg3;
- (unsigned long long)getFileBrowseInfoCountInSection:(unsigned long long)arg1 withDataType:(unsigned long long)arg2;
- (unsigned long long)getFileBrowseInfoCountInSection:(unsigned long long)arg1 withDataType:(unsigned long long)arg2 andChatName:(id)arg3;
- (unsigned long long)getFileBrowseSectionCountWithDataType:(unsigned long long)arg1;
- (unsigned long long)getFileBrowseSectionCountWithDataType:(unsigned long long)arg1 andChatName:(id)arg2;
- (id)getFileBrowseInfoInIndex:(id)arg1 withDataType:(unsigned long long)arg2;
- (id)getFileBrowseInfoInIndex:(id)arg1 withDataType:(unsigned long long)arg2 andChatName:(id)arg3;
- (void)checkLoadData:(id)arg1;
- (void)checkLoadFavData;
- (void)OnSearch:(id)arg1;
- (id)getAllFilesBrowseInfo;
- (id)getSearchText;
- (void)doSearch:(id)arg1 withDataType:(unsigned long long)arg2;
- (id)getSearchFileBrowseSectionTitleForSection:(unsigned long long)arg1;
- (unsigned long long)getSearchFileBrowseInfoCountInSection:(unsigned long long)arg1;
- (unsigned long long)getSearchFileBrowseSectionCount;
- (id)getSearchFileBrowseInfoInIndex:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)p_tryAddBrowseInfo:(id)arg1 MsgWrap:(id)arg2;
- (void)onImportMessageSuccess;
- (void)onImportingMessage;
- (id)getOneFileInfoOfMD5:(id)arg1 retSameMD5FilePath:(id *)arg2;
- (void)onFileDetailViewOpenMsgSvrID:(long long)arg1;
- (void)makeWholeNewKVLog;
- (id)getCurrentKVLog;
- (void)reportCurrentKVLog;
- (void)setFirstScreenAssetNum:(unsigned int)arg1 andFirstAssetIndex:(int)arg2;
- (void)setReportKVLog:(unsigned long long)arg1 withBrowseInfoArray:(id)arg2;
- (void)report21059:(id)arg1;
- (id)browseInfoDB;
- (void)setBrowseInfoDB:(id)arg1;
- (void)setFileBrowseQueue:(id)arg1;
- (id)buildIndexOperation;
- (void)setBuildIndexOperation:(id)arg1;
- (id)currentSearchText;
- (void)setCurrentSearchText:(id)arg1;
- (BOOL)bOpen;
- (void)setBOpen:(BOOL)arg1;
- (id)fileBrowseInfoArray;
- (void)setFileBrowseInfoArray:(id)arg1;
- (id)fileBrowseInfoSectionArray;
- (void)setFileBrowseInfoSectionArray:(id)arg1;
- (id)favFileBrowseInfoArray;
- (void)setFavFileBrowseInfoArray:(id)arg1;
- (id)favFileBrowseInfoSectionArray;
- (void)setFavFileBrowseInfoSectionArray:(id)arg1;
- (id)searchResultInfoSectionArray;
- (void)setSearchResultInfoSectionArray:(id)arg1;
- (BOOL)bLoadingChatLogFile;
- (void)setBLoadingChatLogFile:(BOOL)arg1;
- (BOOL)bLoadingFavFile;
- (void)setBLoadingFavFile:(BOOL)arg1;
- (id)kvLogObj;
- (void)setKvLogObj:(id)arg1;
- (void).cxx_destruct;
@end

