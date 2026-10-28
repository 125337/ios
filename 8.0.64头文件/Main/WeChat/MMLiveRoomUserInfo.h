@interface MMLiveRoomUserInfo : NSObject
{
    unsigned int _rewardAmountInHeat; // +0x8
    NSString * _displayNickname; // +0x10
}
- (id)displayNickname;
- (void)setDisplayNickname:(id)arg1;
- (unsigned int)rewardAmountInHeat;
- (void)setRewardAmountInHeat:(unsigned int)arg1;
- (void).cxx_destruct;
@end
