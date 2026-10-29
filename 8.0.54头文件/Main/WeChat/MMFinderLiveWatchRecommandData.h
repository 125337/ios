@interface MMFinderLiveWatchRecommandData : NSObject
{
    NSMutableArray * _navContainerReadIds; // +0x8
    NSData * _navLastBuffer; // +0x10
    NSData * _navContainerLastBuffer; // +0x18
}
- (id)init;
- (id)navContainerReadIds;
- (void)setNavContainerReadIds:(id)arg1;
- (id)navLastBuffer;
- (void)setNavLastBuffer:(id)arg1;
- (id)navContainerLastBuffer;
- (void)setNavContainerLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end

