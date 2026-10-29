@interface MMFluencyScoreRecord : NSObject <NSCopying>
{
    float _score; // +0x8
    int _miss0FrameCount; // +0xc
    int _miss1FrameCount; // +0x10
    int _miss2FrameCount; // +0x14
    int _miss3FrameCount; // +0x18
    int _miss4FrameCount; // +0x1c
    int _miss5OrMoreFrameCount; // +0x20
    float _smoothRate; // +0x24
    float _freezeRate; // +0x28
    NSString * _ID; // +0x30
    double _startTime; // +0x38
    double _stopTime; // +0x40
    NSArray * _caDisplayLinkDurations; // +0x48
    NSArray * _caDisplayLinkStartTimes; // +0x50
}
+ (id)scoresOfRecords:(id)arg1;
+ (id)smoothRateOfRecords:(id)arg1;
+ (id)freezeRateOfRecords:(id)arg1;
+ (void)calculateScore:(id)arg1 score:(float *)arg2 miss0FrameCount:(int *)arg3 miss1FrameCount:(int *)arg4 miss2FrameCount:(int *)arg5 miss3FrameCount:(int *)arg6 miss4FrameCount:(int *)arg7 miss5OrMoreFrameCount:(int *)arg8 smoothRate:(float *)arg9 freezeRate:(float *)arg10;
+ (double)worstDiscrete;
- (void)recalculate;
- (id)formatVCID;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)ID;
- (void)setID:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)stopTime;
- (void)setStopTime:(double)arg1;
- (id)caDisplayLinkDurations;
- (void)setCaDisplayLinkDurations:(id)arg1;
- (id)caDisplayLinkStartTimes;
- (void)setCaDisplayLinkStartTimes:(id)arg1;
- (float)score;
- (void)setScore:(float)arg1;
- (int)miss0FrameCount;
- (void)setMiss0FrameCount:(int)arg1;
- (int)miss1FrameCount;
- (void)setMiss1FrameCount:(int)arg1;
- (int)miss2FrameCount;
- (void)setMiss2FrameCount:(int)arg1;
- (int)miss3FrameCount;
- (void)setMiss3FrameCount:(int)arg1;
- (int)miss4FrameCount;
- (void)setMiss4FrameCount:(int)arg1;
- (int)miss5OrMoreFrameCount;
- (void)setMiss5OrMoreFrameCount:(int)arg1;
- (float)smoothRate;
- (void)setSmoothRate:(float)arg1;
- (float)freezeRate;
- (void)setFreezeRate:(float)arg1;
- (void).cxx_destruct;
@end

