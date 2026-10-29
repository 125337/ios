@interface WCFinderAdReportMeta : NSObject
{
    BOOL _hasEndExpose; // +0x8
    unsigned long long _playCount; // +0x10
    unsigned long long _outerDuration; // +0x18
    unsigned long long _outerShowTimeStamp; // +0x20
    unsigned long long _commentAdOuterShowTimestamp; // +0x28
    unsigned long long _playTotalTime; // +0x30
    unsigned long long _videoTotalTime; // +0x38
    NSMutableSet * _playSequenceSet; // +0x40
    unsigned long long _actionType; // +0x48
    long long _needReportCount; // +0x50
}
- (id)playSequenceSet;
- (unsigned long long)playCount;
- (void)setPlayCount:(unsigned long long)arg1;
- (unsigned long long)outerDuration;
- (void)setOuterDuration:(unsigned long long)arg1;
- (unsigned long long)outerShowTimeStamp;
- (void)setOuterShowTimeStamp:(unsigned long long)arg1;
- (unsigned long long)commentAdOuterShowTimestamp;
- (void)setCommentAdOuterShowTimestamp:(unsigned long long)arg1;
- (unsigned long long)playTotalTime;
- (void)setPlayTotalTime:(unsigned long long)arg1;
- (unsigned long long)videoTotalTime;
- (void)setVideoTotalTime:(unsigned long long)arg1;
- (void)setPlaySequenceSet:(id)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (long long)needReportCount;
- (void)setNeedReportCount:(long long)arg1;
- (BOOL)hasEndExpose;
- (void)setHasEndExpose:(BOOL)arg1;
- (void).cxx_destruct;
@end

