@interface CBTAsstNewerHistoryPagingContext : NSObject
{
    BOOL _loadingNewerHistoryPage; // +0x8
    BOOL _hasMoreNewerHistory; // +0x9
    CBTAsstBoardBaseViewModel * _newerHistoryAnchorViewModel; // +0x10
    UserCardPageContext * _newerHistoryPageContext; // +0x18
    unsigned long long _newerHistoryLoadGeneration; // +0x20
}
- (id)newerHistoryAnchorViewModel;
- (void)setNewerHistoryAnchorViewModel:(id)arg1;
- (id)newerHistoryPageContext;
- (void)setNewerHistoryPageContext:(id)arg1;
- (BOOL)isLoadingNewerHistoryPage;
- (void)setLoadingNewerHistoryPage:(BOOL)arg1;
- (BOOL)hasMoreNewerHistory;
- (void)setHasMoreNewerHistory:(BOOL)arg1;
- (unsigned long long)newerHistoryLoadGeneration;
- (void)setNewerHistoryLoadGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
