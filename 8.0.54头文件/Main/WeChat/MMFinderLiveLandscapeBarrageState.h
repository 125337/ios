@interface MMFinderLiveLandscapeBarrageState : NSObject
{
    BOOL _isStartLandscapeBarrage; // +0x8
    unsigned int _barrageTrackCnt; // +0xc
}
- (BOOL)isStartLandscapeBarrage;
- (void)setIsStartLandscapeBarrage:(BOOL)arg1;
- (unsigned int)barrageTrackCnt;
- (void)setBarrageTrackCnt:(unsigned int)arg1;
@end

