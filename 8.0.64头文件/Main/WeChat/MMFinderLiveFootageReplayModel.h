@interface MMFinderLiveFootageReplayModel : NSObject
{
    BOOL _rotationEnabled; // +0x8
    unsigned int _startOffset; // +0xc
    unsigned int _endOffset; // +0x10
    NSString * _replayUri; // +0x18
    unsigned long long _replayLiveId; // +0x20
    NSString * _replayFinderUsername; // +0x28
    unsigned long long _replayObjectId; // +0x30
    NSString * _replayObjectNonceId; // +0x38
    NSString * _reportSongId; // +0x40
    NSString * _reportSongName; // +0x48
}
- (id)replayUri;
- (void)setReplayUri:(id)arg1;
- (unsigned int)startOffset;
- (void)setStartOffset:(unsigned int)arg1;
- (unsigned int)endOffset;
- (void)setEndOffset:(unsigned int)arg1;
- (BOOL)rotationEnabled;
- (void)setRotationEnabled:(BOOL)arg1;
- (unsigned long long)replayLiveId;
- (void)setReplayLiveId:(unsigned long long)arg1;
- (id)replayFinderUsername;
- (void)setReplayFinderUsername:(id)arg1;
- (unsigned long long)replayObjectId;
- (void)setReplayObjectId:(unsigned long long)arg1;
- (id)replayObjectNonceId;
- (void)setReplayObjectNonceId:(id)arg1;
- (id)reportSongId;
- (void)setReportSongId:(id)arg1;
- (id)reportSongName;
- (void)setReportSongName:(id)arg1;
- (void).cxx_destruct;
@end
