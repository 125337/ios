@interface MMFinderLiveLotteryRecord : NSObject
{
    unsigned int _liveStartTime; // +0x8
    int _retCode; // +0xc
    unsigned int _supportMultiType; // +0x10
    NSArray * _lotteryList; // +0x18
    NSArray * _milestoneLotteryList; // +0x20
    unsigned long long _liveId; // +0x28
    unsigned long long _objectId; // +0x30
    NSString * _objectNonceId; // +0x38
    WCFinderContact * _anchorContact; // +0x40
}
- (id)initWithLotteryRecord:(id)arg1;
- (id)description;
- (unsigned int)liveStartTime;
- (void)setLiveStartTime:(unsigned int)arg1;
- (id)lotteryList;
- (void)setLotteryList:(id)arg1;
- (id)milestoneLotteryList;
- (void)setMilestoneLotteryList:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (int)retCode;
- (void)setRetCode:(int)arg1;
- (unsigned int)supportMultiType;
- (void)setSupportMultiType:(unsigned int)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (void).cxx_destruct;
@end
