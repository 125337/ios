@interface WCMomentsPlayerSourceDetermination : NSObject
{
    BOOL _HDFileExists; // +0x8
    BOOL _LDFileExists; // +0x9
    BOOL _canSwitchSource; // +0xa
    BOOL _canPlayHDRVideos; // +0xb
    NSString * _tag; // +0x10
    long long _mediaSource; // +0x18
    long long _previousSourceStatus; // +0x20
    long long _currentSourceStatus; // +0x28
    long long _previewSourceMode; // +0x30
    long long _previewRequestReason; // +0x38
    WCMomentsMediaPredictedResult * _predictedResult; // +0x40
}
- (id)description;
- (id)tag;
- (void)setTag:(id)arg1;
- (long long)mediaSource;
- (void)setMediaSource:(long long)arg1;
- (long long)previousSourceStatus;
- (void)setPreviousSourceStatus:(long long)arg1;
- (long long)currentSourceStatus;
- (void)setCurrentSourceStatus:(long long)arg1;
- (BOOL)HDFileExists;
- (void)setHDFileExists:(BOOL)arg1;
- (BOOL)LDFileExists;
- (void)setLDFileExists:(BOOL)arg1;
- (BOOL)canSwitchSource;
- (void)setCanSwitchSource:(BOOL)arg1;
- (long long)previewSourceMode;
- (void)setPreviewSourceMode:(long long)arg1;
- (long long)previewRequestReason;
- (void)setPreviewRequestReason:(long long)arg1;
- (BOOL)canPlayHDRVideos;
- (void)setCanPlayHDRVideos:(BOOL)arg1;
- (id)predictedResult;
- (void)setPredictedResult:(id)arg1;
- (void).cxx_destruct;
@end
