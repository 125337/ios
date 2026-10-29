@interface WCFinderPaidCollectionDetailVM : NSObject
{
    id <WCFinderCollectionFeedListProvider> _collectionDataProvider; // +0x8
    FinderPaidCollectionInfo * _paidCollection; // +0x10
}
- (id)initWithPaidCollection:(id)arg1;
- (void)resetDataProvider;
- (id)dataSnapshot;
- (id)collectionDataProvider;
- (void)setCollectionDataProvider:(id)arg1;
- (id)paidCollection;
- (void)setPaidCollection:(id)arg1;
- (void).cxx_destruct;
@end

