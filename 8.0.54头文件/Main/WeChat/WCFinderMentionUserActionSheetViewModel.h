@interface WCFinderMentionUserActionSheetViewModel : NSObject
{
    BOOL _isLoading; // +0x8
    BOOL _isError; // +0x9
    id <WCFinderMentionUserActionSheetViewModelDelegate> _delegate; // +0x10
    NSArray * _sections; // +0x18
    WCFinderMentionUserSection * _recentSection; // +0x20
    WCFinderMentionUserSection * _followSection; // +0x28
    NSArray * _normalSections; // +0x30
    WCFinderMentionUserSearchViewModel * _search; // +0x38
    FTSContactSearchUtilLogic * _contactSearchLogic; // +0x40
}
- (id)init;
- (void)realUpdateViewModelData;
- (void)fetchLocalContactList;
- (BOOL)hasMorePage;
- (void)setSearch:(id)arg1;
- (id)findMoreSec;
- (id)contactAtIndexPath:(id)arg1;
- (void)requestNextPage:(id /* block */)arg1;
- (void)fetchMoreFollow:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)search:(id)arg1;
- (void)expandSection:(long long)arg1;
- (BOOL)preSecitonIsFetchableForSection:(long long)arg1;
- (BOOL)empty;
- (BOOL)loading;
- (BOOL)error;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;
- (id)recentSection;
- (void)setRecentSection:(id)arg1;
- (id)followSection;
- (void)setFollowSection:(id)arg1;
- (id)normalSections;
- (void)setNormalSections:(id)arg1;
- (id)search;
- (id)contactSearchLogic;
- (void)setContactSearchLogic:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)isError;
- (void)setIsError:(BOOL)arg1;
- (void).cxx_destruct;
@end

