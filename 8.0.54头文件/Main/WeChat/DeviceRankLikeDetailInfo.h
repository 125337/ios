@interface DeviceRankLikeDetailInfo : MMObject
{
    unsigned int uiLikeTime; // +0x8
    NSString * nsUserName; // +0x10
    NSString * nsRankId; // +0x18
    NSString * nsLikeTip; // +0x20
}
- (id)nsUserName;
- (void)setNsUserName:(id)arg1;
- (unsigned int)uiLikeTime;
- (void)setUiLikeTime:(unsigned int)arg1;
- (id)nsRankId;
- (void)setNsRankId:(id)arg1;
- (id)nsLikeTip;
- (void)setNsLikeTip:(id)arg1;
- (void).cxx_destruct;
@end

