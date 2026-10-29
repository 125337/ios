@interface KSIpodAudioDataProvider : KSAudioDataProvider
{
    BOOL _isReady; // +0x38
    AVAssetExportSession * _exportSession; // +0x40
    NSArray * _fileTypes; // +0x48
}
- (id)initWithSongInfo:(id)arg1 queue:(id)arg2 context:(void *)arg3;
- (void)dealloc;
- (void)close:(BOOL)arg1;
- (BOOL)prepareAudioData;
- (BOOL)isReady;
- (id)audioFileTypes;
- (id)mimeType;
- (void)exportdidComplete;
- (id)fileTypes;
- (void)setFileTypes:(id)arg1;
- (void).cxx_destruct;
@end

