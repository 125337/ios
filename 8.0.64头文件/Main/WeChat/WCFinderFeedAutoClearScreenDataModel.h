@interface WCFinderFeedAutoClearScreenDataModel : NSObject
{
    BOOL _hasOCROverLap; // +0x8
    double _startPlayTime; // +0x10
    double _maxPlayTime; // +0x18
}
+ (unsigned long long)autoClearScreenType;
+ (BOOL)hasPlayEnoughWithMaxPlayTime:(double)arg1 startPlayTime:(double)arg2;
- (BOOL)isInAutoClearScreenState;
- (BOOL)updateWithVideoPlayPositionCheckStateChange:(double)arg1;
- (BOOL)hasPlayEnough;
- (double)startPlayTime;
- (void)setStartPlayTime:(double)arg1;
- (double)maxPlayTime;
- (void)setMaxPlayTime:(double)arg1;
- (BOOL)hasOCROverLap;
- (void)setHasOCROverLap:(BOOL)arg1;
@end
