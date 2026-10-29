@interface MMFinderLivePurchasedComposedViewControllerOpenParams : NSObject
{
    MMFinderLivePurchasedFeedViewModel * _livePurchasedFeedVM; // +0x8
    FinderJumpInfo * _paidMicJumpInfo; // +0x10
    unsigned long long _livePurchasedCount; // +0x18
    unsigned long long _paidMicCount; // +0x20
}
- (id)livePurchasedFeedVM;
- (void)setLivePurchasedFeedVM:(id)arg1;
- (id)paidMicJumpInfo;
- (void)setPaidMicJumpInfo:(id)arg1;
- (unsigned long long)livePurchasedCount;
- (void)setLivePurchasedCount:(unsigned long long)arg1;
- (unsigned long long)paidMicCount;
- (void)setPaidMicCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

