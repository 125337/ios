@interface WCFinderInteractiveSearchListViewModel : NSObject <WCFinderInteractiveSearchStoreExt>
{
    NSMutableArray * _contentVMS; // +0x8
    id <WCFinderInteractiveSearchViewModelDelegate> _delegate; // +0x10
    NSString * _dataScene; // +0x18
    WCFinderInteractiveSearchStore * _store; // +0x20
}
- (id)initWithStore:(id)arg1 dataScene:(id)arg2;
- (int)commentScene;
- (void)setStore:(id)arg1;
- (BOOL)isLoading;
- (BOOL)hasMore;
- (BOOL)isError;
- (void)requestNextPage;
- (void)delContentVM:(id)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (void)onStoeAppendData:(_NSRange)arg1;
- (void)insertDataItems:(id)arg1;
- (id)contentVMS;
- (void)setContentVMS:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataScene;
- (void)setDataScene:(id)arg1;
- (id)store;
- (void).cxx_destruct;
@end
