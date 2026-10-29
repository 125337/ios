@interface MMFinderLivePrepayRequestObject : MMFinderLivePayRequestObject
{
    unsigned int _rewardType; // +0x80
}
- (void)retrieveBillToPayWithBlock:(id /* block */)arg1;
- (unsigned int)rewardType;
- (void)setRewardType:(unsigned int)arg1;
@end
