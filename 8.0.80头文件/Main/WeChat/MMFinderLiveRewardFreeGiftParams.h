@interface MMFinderLiveRewardFreeGiftParams : NSObject
{
    unsigned int _scene; // +0x8
    NSArray * _freeGiftIdArray; // +0x10
    NSString * _rewardProductId; // +0x18
    NSString * _rewardRequestId; // +0x20
    NSData * _liveCookies; // +0x28
}
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)freeGiftIdArray;
- (void)setFreeGiftIdArray:(id)arg1;
- (id)rewardProductId;
- (void)setRewardProductId:(id)arg1;
- (id)rewardRequestId;
- (void)setRewardRequestId:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (void).cxx_destruct;
@end
