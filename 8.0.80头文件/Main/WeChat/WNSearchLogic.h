@interface WNSearchLogic : NSObject <WNContentSearchBaroperationDelegate>
{
    NSArray * m_searchResultInfos; // +0x8
    NSMutableArray * m_untreatedResultInfos; // +0x10
    NSString * m_query; // +0x18
    NSMutableDictionary * m_indexToCoverViews; // +0x20
    unsigned long long m_curFocusIndex; // +0x28
    BOOL m_needReFocusCurIndex; // +0x30
    MMTableView * _tableView; // +0x38
    WeNoteDataController * _dataController; // +0x40
    id <WNSearchLogicDelegate> _delegate; // +0x48
}
- (id)init;
- (void)cancelSearch;
- (void)clearSearchStatus;
- (void)reloadSearchCoverView;
- (void)setMatchLocationArr:(id)arg1 query:(id)arg2;
- (void)handleMatchLocationsWithStartIndex:(long long)arg1 endIndex:(long long)arg2;
- (void)tryToReFocusCurIndex;
- (id)getCoverInfoWith:(id)arg1 coverView:(id)arg2 location:(unsigned long long)arg3;
- (id)getSearchCoverViewWith:(id)arg1;
- (void)tryToshowCoverViewAt:(id)arg1;
- (void)changeFocusWithCurFocusIndex:(unsigned long long)arg1 nextFocusIndex:(unsigned long long)arg2;
- (void)setCoverInfo:(id)arg1 enableFocus:(BOOL)arg2 withRealIndex:(unsigned long long)arg3 arrIndex:(unsigned long long)arg4;
- (void)scrollCurFocusIndexVisible;
- (void)scrollFocusLocationVisible:(unsigned long long)arg1;
- (unsigned long long)getArrIndexWith:(unsigned long long)arg1;
- (unsigned long long)getPreTotalCountWith:(unsigned long long)arg1;
- (void)tryToShowCoverViewOn:(id)arg1;
- (void)onChangeFocusIndex:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)dataController;
- (void)setDataController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
