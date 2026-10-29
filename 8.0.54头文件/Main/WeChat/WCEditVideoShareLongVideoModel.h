@interface WCEditVideoShareLongVideoModel : NSObject
{
    BOOL _hasMiaoJianEntrance; // +0x8
    BOOL _hasWeSeeEntrance; // +0x9
    BOOL _hasFinderEntranceForLongVideo; // +0xa
    BOOL _hasFinderEntranceForShortVideo; // +0xb
    long long _minDurationFinderRequiredForShortVideo; // +0x10
    unsigned long long _entrance; // +0x18
}
- (id)initWithEntrance:(unsigned long long)arg1;
- (void)loadDynamicConfig;
- (BOOL)canShowLongVideoShareOptions;
- (BOOL)noShareOptions;
- (BOOL)isTimelineEntrance;
- (void)showShareActionSheetInView:(id)arg1;
- (void)sendWithMiaoJian:(id)arg1 callback:(id /* block */)arg2;
- (id)description;
- (BOOL)hasMiaoJianEntrance;
- (void)setHasMiaoJianEntrance:(BOOL)arg1;
- (BOOL)hasWeSeeEntrance;
- (void)setHasWeSeeEntrance:(BOOL)arg1;
- (BOOL)hasFinderEntranceForLongVideo;
- (void)setHasFinderEntranceForLongVideo:(BOOL)arg1;
- (BOOL)hasFinderEntranceForShortVideo;
- (void)setHasFinderEntranceForShortVideo:(BOOL)arg1;
- (long long)minDurationFinderRequiredForShortVideo;
- (void)setMinDurationFinderRequiredForShortVideo:(long long)arg1;
- (unsigned long long)entrance;
- (void)setEntrance:(unsigned long long)arg1;
@end

