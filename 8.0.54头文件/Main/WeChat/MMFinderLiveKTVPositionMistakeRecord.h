@interface MMFinderLiveKTVPositionMistakeRecord : NSObject
{
    int _mistakeDis; // +0x8
    int _maxAcceptMistake; // +0xc
    int _positionUpdateInterval; // +0x10
}
- (int)mistakeDis;
- (void)setMistakeDis:(int)arg1;
- (int)maxAcceptMistake;
- (void)setMaxAcceptMistake:(int)arg1;
- (int)positionUpdateInterval;
- (void)setPositionUpdateInterval:(int)arg1;
@end

