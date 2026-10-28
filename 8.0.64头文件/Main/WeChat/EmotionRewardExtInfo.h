@interface EmotionRewardExtInfo : NSObject
{
    int _extranceScene; // +0x8
    unsigned long long _rewardScene; // +0x10
}
- (unsigned long long)rewardScene;
- (void)setRewardScene:(unsigned long long)arg1;
- (int)extranceScene;
- (void)setExtranceScene:(int)arg1;
@end
