@interface MMFinderLiveLotteryMethodInfo : NSObject
{
    unsigned int _methodId; // +0x8
    unsigned int _opType; // +0xc
    MMFinderLiveTaskId * _liveTaskId; // +0x10
    FinderLiveLotteryMethodItem * _methodItem; // +0x18
    NSString * _requestId; // +0x20
}
- (id)initWithLiveTaskId:(id)arg1;
- (id)description;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)methodItem;
- (void)setMethodItem:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (unsigned int)methodId;
- (void)setMethodId:(unsigned int)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

