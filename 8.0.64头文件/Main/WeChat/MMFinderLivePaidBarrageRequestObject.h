@interface MMFinderLivePaidBarrageRequestObject : MMFinderLivePayRequestObject
{
    unsigned int _rewardCount; // +0x80
    NSString * _clientMsgId; // +0x88
    NSString * _productId; // +0x90
}
- (void)retrieveBillToPayWithBlock:(id /* block */)arg1;
- (id)clientMsgId;
- (void)setClientMsgId:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (unsigned int)rewardCount;
- (void)setRewardCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
