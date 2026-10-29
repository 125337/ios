@interface MMFinderLiveSpeedTestNotifyModel : NSObject
{
    unsigned int _interval; // +0x8
    unsigned int _reqsize; // +0xc
    unsigned int _concurrentNum; // +0x10
    NSMutableArray * _serverAddrList; // +0x18
    NSData * _ctx; // +0x20
}
+ (id)changeModelWithNotify:(id)arg1;
+ (id)getServerAddrListWithNotify:(id)arg1;
- (id)serverAddrList;
- (void)setServerAddrList:(id)arg1;
- (unsigned int)interval;
- (void)setInterval:(unsigned int)arg1;
- (unsigned int)reqsize;
- (void)setReqsize:(unsigned int)arg1;
- (id)ctx;
- (void)setCtx:(id)arg1;
- (unsigned int)concurrentNum;
- (void)setConcurrentNum:(unsigned int)arg1;
- (void).cxx_destruct;
@end

