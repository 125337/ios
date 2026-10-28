@interface PreloadVideoCleanLogic : NSObject
{
    NSMutableDictionary * _dicOldRecord; // +0x8
    MsgPreloadVideoInfo * _preloadVideoInfo; // +0x10
    unsigned int _uiLastCleanPreloadTmpFileTime; // +0x18
}
- (id)init;
- (id)getOldRecordPath;
- (void)loadOldRecord;
- (void)saveOldPreloadRecord;
- (void)cleanOldRecordCache;
- (id)getPreloadVideoInfoPath;
- (id)getPreloadRecordKey:(id)arg1;
- (void)loadPreloadRecord;
- (void)savePreloadInfo;
- (BOOL)isAddedTaskOverDailyLimit;
- (void)addPreloadRecord:(id)arg1;
- (void)removePreloadRecord:(id)arg1 shouldRemoveFile:(BOOL)arg2;
- (void)removePreloadRecordByLRU;
- (void)removePreloadTempFile:(id)arg1;
- (void)cleanOutOfDatePreloadTempFile:(id)arg1;
- (unsigned long long)cleanAllPreloadTempFileWithDownloadingMsg:(id)arg1;
- (unsigned long long)cleanAllPreloadTempFileWithRecords:(id)arg1;
- (void)setNonAutoCleanForPreloadRecord:(id)arg1;
- (unsigned int)getPreloadSizeForRecordId:(id)arg1;
- (void)setPreloadSize:(unsigned int)arg1 forRecordId:(id)arg2;
- (void)onDeleteCacheForChatName:(id)arg1;
- (void).cxx_destruct;
@end
