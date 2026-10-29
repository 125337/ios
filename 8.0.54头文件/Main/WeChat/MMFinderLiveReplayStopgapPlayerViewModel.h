@interface MMFinderLiveReplayStopgapPlayerViewModel : MMFinderLiveWcPlayerViewModel
{
    NSString * _filename; // +0x8
    MMLiveStorageCleanupPinningToken * _resourcesPinningToken; // +0x10
}
- (void)setFilename:(id)arg1;
- (id)createPlayerInfo;
- (id)generateDownloadArgsWrap;
- (id)videoSavePath;
- (id)videoFormatPath;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (id)filename;
- (id)resourcesPinningToken;
- (void)setResourcesPinningToken:(id)arg1;
- (void).cxx_destruct;
@end

