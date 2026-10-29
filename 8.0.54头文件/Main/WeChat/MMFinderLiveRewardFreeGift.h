@interface MMFinderLiveRewardFreeGift : NSObject
{
    BOOL _isLocalInserted; // +0x8
    unsigned int _isUsed; // +0xc
    FinderLiveGift * _gift; // +0x10
    unsigned long long _expireTime; // +0x18
    NSString * _giftId; // +0x20
}
+ (id)createFromPBGiftInfo:(id)arg1;
- (id)gift;
- (void)setGift:(id)arg1;
- (unsigned int)isUsed;
- (void)setIsUsed:(unsigned int)arg1;
- (unsigned long long)expireTime;
- (void)setExpireTime:(unsigned long long)arg1;
- (id)giftId;
- (void)setGiftId:(id)arg1;
- (BOOL)isLocalInserted;
- (void)setIsLocalInserted:(BOOL)arg1;
- (void).cxx_destruct;
@end

