@interface WCPreloadVideoCleanLogic : NSObject
{
    WCPreloadVideoInfo * _preloadVideoInfo; // +0x8
    unsigned int _uiLastCleanPreloadTmpFileTime; // +0x10
}
- (id)init;
- (id)getPreloadVideoInfoPath;
- (id)getPreloadRecordKey:(id)arg1;
- (void)loadPreloadRecord;
- (void)savePreloadInfo;
- (BOOL)isAddedTaskOverDailyLimit;
- (void)addPreloadRecord:(id)arg1;
- (void)removePreloadRecord:(id)arg1 shouldRemoveFile:(BOOL)arg2;
- (void)removePreloadRecordByLRU;
- (void)removePreloadTempFile:(id)arg1;
- (void)removeFile:(id)arg1;
- (void)cleanOutOfDatePreloadTempFile:(id)arg1;
- (void)setNonAutoCleanForPreloadRecord:(id)arg1;
- (unsigned int)getPreloadSizeForRecordId:(id)arg1;
- (void)setPreloadSize:(unsigned int)arg1 forRecordId:(id)arg2;
- (unsigned int)getTotalSizeForRecordId:(id)arg1;
- (void)setTotalSize:(unsigned int)arg1 forRecordId:(id)arg2;
- (unsigned int)getPreloadPercentForRecordId:(id)arg1;
- (void)setPreloadCompelted:(BOOL)arg1 forRecordId:(id)arg2;
- (BOOL)isPreloadCompleted:(id)arg1;
- (void).cxx_destruct;
@end
