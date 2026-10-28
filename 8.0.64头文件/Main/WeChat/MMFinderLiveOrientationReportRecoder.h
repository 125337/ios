@interface MMFinderLiveOrientationReportRecoder : NSObject
{
    BOOL _isStartRecord; // +0x8
    unsigned long long _portraitDuration; // +0x10
    unsigned long long _landscapeDuration; // +0x18
    unsigned long long _currOrientationStartTime; // +0x20
    long long _currOrientation; // +0x28
}
- (void)startRecord;
- (void)endRecord;
- (void)updateCurrOrientation:(long long)arg1;
- (BOOL)checkIsOrientationModeChange:(long long)arg1 preOri:(long long)arg2;
- (void)updatePreOrientationModeDuration:(long long)arg1;
- (void)updateCurrOrientationStartTime;
- (unsigned long long)portraitDuration;
- (void)setPortraitDuration:(unsigned long long)arg1;
- (unsigned long long)landscapeDuration;
- (void)setLandscapeDuration:(unsigned long long)arg1;
- (unsigned long long)currOrientationStartTime;
- (void)setCurrOrientationStartTime:(unsigned long long)arg1;
- (long long)currOrientation;
- (void)setCurrOrientation:(long long)arg1;
- (BOOL)isStartRecord;
- (void)setIsStartRecord:(BOOL)arg1;
@end
