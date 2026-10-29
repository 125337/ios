@interface WCFinderHistoryAllPageModel : WCFinderHistoryPageModel
{
    WCFinderFeedGroup * _feedGroup; // +0x8
}
+ (id /* block */)mapSessionBlock;
- (id)init;
- (id /* block */)makeMapper;
- (BOOL)hasContent;
- (void)doRequestFirstPage:(id /* block */)arg1;
- (void)doRequestNextPage:(id /* block */)arg1;
- (void)onClear;
- (void)onDeleteFeed:(id)arg1;
- (id)feedGroup;
- (void)setFeedGroup:(id)arg1;
- (void).cxx_destruct;
@end
