@interface WCFinderEditComposeReportInfo : NSObject
{
    BOOL _skipVideoCompose; // +0x8
    BOOL _useVideoCompositionLib; // +0x9
    BOOL _keepsProcessInBackground; // +0xa
    long long _mediaType; // +0x10
    unsigned long long _audioTrackType; // +0x18
    unsigned long long _retryType; // +0x20
    unsigned long long _applicationResignActiveTimes; // +0x28
    unsigned long long _applicationSuspendTimes; // +0x30
    unsigned long long _autoRetryExportTimes; // +0x38
    NSMutableArray * _audioSessionStatus; // +0x40
}
- (void)setupWithVideoCompositionAttr:(id)arg1 videoEncodeTask:(id)arg2;
- (BOOL)isSkipVideoCompose;
- (void)setSkipVideoCompose:(BOOL)arg1;
- (long long)mediaType;
- (void)setMediaType:(long long)arg1;
- (unsigned long long)audioTrackType;
- (void)setAudioTrackType:(unsigned long long)arg1;
- (BOOL)useVideoCompositionLib;
- (void)setUseVideoCompositionLib:(BOOL)arg1;
- (unsigned long long)retryType;
- (void)setRetryType:(unsigned long long)arg1;
- (unsigned long long)applicationResignActiveTimes;
- (void)setApplicationResignActiveTimes:(unsigned long long)arg1;
- (unsigned long long)applicationSuspendTimes;
- (void)setApplicationSuspendTimes:(unsigned long long)arg1;
- (BOOL)keepsProcessInBackground;
- (void)setKeepsProcessInBackground:(BOOL)arg1;
- (unsigned long long)autoRetryExportTimes;
- (void)setAutoRetryExportTimes:(unsigned long long)arg1;
- (id)audioSessionStatus;
- (void)setAudioSessionStatus:(id)arg1;
- (void).cxx_destruct;
@end
