@interface WCFinderCollectionFeedListViewModel : NSObject
{
    WCFinderCollectionHalfViewParams * _params; // +0x8
    id <WCFinderCollectionFeedListProvider> _provider; // +0x10
}
+ (id)viewModelWithParams:(id)arg1 provider:(id)arg2;
- (id)dataSnapshot;
- (id)sectionSnapshot;
- (void)replaceProvider:(id)arg1;
- (id)feedArray;
- (id)params;
- (void)setParams:(id)arg1;
- (id)provider;
- (void)setProvider:(id)arg1;
- (void).cxx_destruct;
@end
