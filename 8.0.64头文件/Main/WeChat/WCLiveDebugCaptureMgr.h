@interface WCLiveDebugCaptureMgr : MMUserService <MMServiceProtocol>
{
    BOOL _isRestartReading; // +0x8
    NSString * _videoPath; // +0x10
    AVURLAsset * _videoAsset; // +0x18
    AVAssetTrack * _videoTrack; // +0x20
    AVAssetReader * _videoReader; // +0x28
    AVAssetReaderTrackOutput * _readerOutput; // +0x30
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)startMockCaptureWithVideoPath:(id)arg1;
- (BOOL)isMockCaptureStated;
- (opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (void)stopMockCapture;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)videoAsset;
- (void)setVideoAsset:(id)arg1;
- (id)videoTrack;
- (void)setVideoTrack:(id)arg1;
- (id)videoReader;
- (void)setVideoReader:(id)arg1;
- (id)readerOutput;
- (void)setReaderOutput:(id)arg1;
- (BOOL)isRestartReading;
- (void)setIsRestartReading:(BOOL)arg1;
- (void).cxx_destruct;
@end
