@interface EmotionRewardExtInfo : NSObject
{
    unsigned long long _rewardScene; // +0x8
    long long _extranceScene; // +0x10
}
- (unsigned long long)rewardScene;
- (void)setRewardScene:(unsigned long long)arg1;
- (long long)extranceScene;
- (void)setExtranceScene:(long long)arg1;
@end

