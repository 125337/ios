@interface WCFinderInteractiveSearchViewModel : NSObject <WCFinderDataItemExt, WCFinderFeedArrayDelegate>
{
    int _tabType; // +0x8
    int _subTabType; // +0xc
    int _selectTabType; // +0x10
    WCFinderFeedArray * _feedArray; // +0x18
    WCFinderStreamLoadingState * _loadingState; // +0x20
    NSString * _lastKeyword; // +0x28
    WCFinderCustomCGI * _lastCGI; // +0x30
}
- (id)initWithFeedArray:(id)arg1 tabType:(int)arg2 subTabType:(int)arg3 selectTabType:(int)arg4;
- (int)commentScene;
- (id)init;
- (void)onFinderDataItemCancelFav:(id)arg1;
- (void)delFeedByContentVMTid:(id)arg1;
- (void)search:(id)arg1;
- (void)_search:(id)arg1 firstPage:(BOOL)arg2;
- (void)onFeedArray:(id)arg1 insertContentVMS:(id)arg2 removeContentVMS:(id)arg3;
- (void)requestNextPage;
- (void)delContentVM:(id)arg1;
- (id)makeListViewModel;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (id)lastKeyword;
- (void)setLastKeyword:(id)arg1;
- (id)lastCGI;
- (void)setLastCGI:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (int)subTabType;
- (void)setSubTabType:(int)arg1;
- (int)selectTabType;
- (void)setSelectTabType:(int)arg1;
- (void).cxx_destruct;
@end
