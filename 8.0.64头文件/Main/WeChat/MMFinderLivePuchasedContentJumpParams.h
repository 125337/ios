@interface MMFinderLivePuchasedContentJumpParams : NSObject
{
    unsigned long long _livePurchasedCount; // +0x8
    unsigned long long _memberPurchasedCount; // +0x10
    unsigned long long _paidCollectionCount; // +0x18
    unsigned long long _livePaidMicCount; // +0x20
    MMFinderLivePurchasedFeedViewModel * _livePurchasedFeedVM; // +0x28
    FinderJumpInfo * _livePaidMicJumpInfo; // +0x30
}
- (id)descForLogging;
- (unsigned long long)livePurchasedCount;
- (void)setLivePurchasedCount:(unsigned long long)arg1;
- (unsigned long long)memberPurchasedCount;
- (void)setMemberPurchasedCount:(unsigned long long)arg1;
- (unsigned long long)paidCollectionCount;
- (void)setPaidCollectionCount:(unsigned long long)arg1;
- (unsigned long long)livePaidMicCount;
- (void)setLivePaidMicCount:(unsigned long long)arg1;
- (id)livePurchasedFeedVM;
- (void)setLivePurchasedFeedVM:(id)arg1;
- (id)livePaidMicJumpInfo;
- (void)setLivePaidMicJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
