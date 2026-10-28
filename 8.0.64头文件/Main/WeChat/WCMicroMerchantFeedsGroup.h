@interface WCMicroMerchantFeedsGroup : NSObject
{
    unsigned int _groupTime; // +0x8
    int _topFeedType; // +0xc
    unsigned int _realWsVersion; // +0x10
    NSString * _groupId; // +0x18
    NSString * _userName; // +0x20
    NSString * _summaryTitle; // +0x28
    NSMutableSet * _feedIds; // +0x30
    long long _realVisibleFeedsCount; // +0x38
}
+ (id)fromServerObj:(id)arg1;
+ (id)fromDataList:(id)arg1 oldGroup:(id)arg2;
+ (id)buildWsGroupDict:(id)arg1;
- (id)init;
- (id)sortedFeedIds;
- (id)filterFeedIdsWithoutGroupId;
- (id)description;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)groupTime;
- (void)setGroupTime:(unsigned int)arg1;
- (id)summaryTitle;
- (void)setSummaryTitle:(id)arg1;
- (id)feedIds;
- (void)setFeedIds:(id)arg1;
- (int)topFeedType;
- (void)setTopFeedType:(int)arg1;
- (unsigned int)realWsVersion;
- (void)setRealWsVersion:(unsigned int)arg1;
- (long long)realVisibleFeedsCount;
- (void)setRealVisibleFeedsCount:(long long)arg1;
- (void).cxx_destruct;
@end
