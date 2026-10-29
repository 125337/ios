@interface WCFinderInteractiveSearchViewModel : NSObject <WCFinderInteractiveSearchStoreExt, WCFinderDataItemExt>
{
    id <WCFinderInteractiveSearchViewModelDelegate> _delegate; // +0x8
    NSArray * _sections; // +0x10
    WCFinderInteractiveSearchStore * _store; // +0x18
    WCFinderInteractiveSearchSection * _feedSection; // +0x20
    NSString * _lastKeyword; // +0x28
    WCFinderCustomCGI * _lastCGI; // +0x30
    NSString * _dataScene; // +0x38
    long long _tabType; // +0x40
}
- (id)initWithDataScene:(id)arg1 tabType:(long long)arg2;
- (id)init;
- (int)commentScene;
- (unsigned long long)loadState;
- (void)onFinderDataItemCancelFav:(id)arg1;
- (void)delFeedByContentVMTid:(id)arg1;
- (void)setStore:(id)arg1;
- (void)search:(id)arg1;
- (void)requestNextPage;
- (void)notifyChanged;
- (id)listViewModelDataScene:(id)arg1;
- (void)onStoeAppendData:(_NSRange)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (id)store;
- (id)feedSection;
- (void)setFeedSection:(id)arg1;
- (id)lastKeyword;
- (void)setLastKeyword:(id)arg1;
- (id)lastCGI;
- (void)setLastCGI:(id)arg1;
- (id)dataScene;
- (void)setDataScene:(id)arg1;
- (long long)tabType;
- (void)setTabType:(long long)arg1;
- (void).cxx_destruct;
@end

