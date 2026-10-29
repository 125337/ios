@interface VideoRingAudioFileProducer : MMUserService <VideRingModifyExt, MMServiceProtocol>
{
    NSMutableDictionary * _downloadTasks; // +0x8
    NSMutableDictionary * _transferTasks; // +0x10
    NSMutableDictionary * _videoDownloadTasks; // +0x18
    VideoRingNetProvider * _provider; // +0x20
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
- (id)transferTasks;
- (void)setTransferTasks:(id)arg1;
- (id)videoDownloadTasks;
- (void)setVideoDownloadTasks:(id)arg1;
- (id)provider;
- (void)setProvider:(id)arg1;
- (void).cxx_destruct;
@end

