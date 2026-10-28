@interface FTSMinimizeTaskLocalSearchMgr : NSObject
{
    BOOL _bSceneForFTS; // +0x8
    NSMutableArray * m_arrMinimizeTasks; // +0x10
    NSMutableArray * m_arrMainResult; // +0x18
    NSMutableDictionary * m_dicMainSearchTip; // +0x20
    NSMutableArray * m_arrDetailResult; // +0x28
    NSMutableDictionary * m_dicDetailSearchTip; // +0x30
    NSString * _newestQueryText; // +0x38
    NSString * _newestQueryTextForDetail; // +0x40
    NSString * _lastQueryText; // +0x48
    NSString * _lastQueryTextForDetail; // +0x50
    NSDictionary * _dicMinimizeTasks; // +0x58
}
- (void)doInitWorker;
- (void)cancelSearch;
- (void)cancelSearchForDetail;
- (void)asyncSearch:(id)arg1;
- (void)asyncSearchForDetail:(id)arg1;
- (id)getArrMainSearchResult;
- (id)getMainSearchMatchTip;
- (id)getArrDetailSearchResult;
- (id)getDetailSearchMatchTip;
- (BOOL)hasSearchResultForHomePage:(id)arg1;
- (BOOL)hasSearchDoneForHomePage:(id)arg1;
- (BOOL)hasSearchDoneForDetailPage:(id)arg1;
- (id)getMatchTipForKey:(id)arg1;
- (id)getDetailMatchTipForKey:(id)arg1;
- (void)initSource;
- (void)refreshSource:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)doSearchForDetail:(id)arg1;
- (id)m_arrMinimizeTasks;
- (void)setM_arrMinimizeTasks:(id)arg1;
- (id)m_arrMainResult;
- (void)setM_arrMainResult:(id)arg1;
- (id)m_dicMainSearchTip;
- (void)setM_dicMainSearchTip:(id)arg1;
- (id)m_arrDetailResult;
- (void)setM_arrDetailResult:(id)arg1;
- (id)m_dicDetailSearchTip;
- (void)setM_dicDetailSearchTip:(id)arg1;
- (BOOL)bSceneForFTS;
- (void)setBSceneForFTS:(BOOL)arg1;
- (id)newestQueryText;
- (void)setNewestQueryText:(id)arg1;
- (id)newestQueryTextForDetail;
- (void)setNewestQueryTextForDetail:(id)arg1;
- (id)lastQueryText;
- (void)setLastQueryText:(id)arg1;
- (id)lastQueryTextForDetail;
- (void)setLastQueryTextForDetail:(id)arg1;
- (id)dicMinimizeTasks;
- (void)setDicMinimizeTasks:(id)arg1;
- (void).cxx_destruct;
@end
