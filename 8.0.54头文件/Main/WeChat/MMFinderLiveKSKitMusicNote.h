@interface MMFinderLiveKSKitMusicNote : NSObject
{
    int _beginTime; // +0x8
    int _duration; // +0xc
    int _noteHeight; // +0x10
    int _noteValue; // +0x14
    double _noteHeightPercent; // +0x18
}
+ (id)genKSMusicNoteWithBegin:(int)arg1 duration:(int)arg2 noteHeight:(int)arg3 noteValue:(int)arg4;
+ (id)genKSMusicNoteWithBegin:(int)arg1 duration:(int)arg2 noteHeight:(int)arg3;
+ (double)transferNoteValueToPercent:(float)arg1;
+ (_NSRange)musicNoteRange;
- (void)checkMistakeWithNoteHeight:(float)arg1 noteValue:(float)arg2;
- (BOOL)isValid;
- (id)description;
- (int)beginTime;
- (void)setBeginTime:(int)arg1;
- (int)duration;
- (void)setDuration:(int)arg1;
- (int)noteHeight;
- (void)setNoteHeight:(int)arg1;
- (double)noteHeightPercent;
- (void)setNoteHeightPercent:(double)arg1;
- (int)noteValue;
- (void)setNoteValue:(int)arg1;
@end

