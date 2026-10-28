@interface VideoRingAudioFileProducer : MMUserService <VideRingModifyExt, MMServiceProtocol>
{
    NSMutableDictionary * _downloadTasks; // +0x8
    VideoRingNetProvider * _provider; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)produceAudioFileWithRingBack:(id)arg1;
- (void)storageVibrateFileForLongTerm:(id)arg1;
- (void)onGlobalRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (void)onExclusiveRingModified:(id)arg1 opType:(unsigned long long)arg2;
- (void)checkNotificationRingFileForRingDetail:(id)arg1;
- (id)downloadTasks;
- (void)setDownloadTasks:(id)arg1;
- (id)provider;
- (void)setProvider:(id)arg1;
- (void).cxx_destruct;
@end
