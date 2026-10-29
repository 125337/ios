@interface WALocalSearchMgr : NSObject <FTSTopHitDelegate>
{
    NSMutableArray * _arrWeApp; // +0x8
    NSMutableArray * _arrMainResult; // +0x10
    NSMutableDictionary * _dicMainSearchTip; // +0x18
    NSMutableArray * _arrDetailResult; // +0x20
    NSMutableDictionary * _dicDetailSearchTip; // +0x28
    BOOL _bSceneForFTS; // +0x30
    NSString * _newestQueryText; // +0x38
    NSString * _newestQueryTextForDetail; // +0x40
    NSString * _lastQueryText; // +0x48
    NSString * _lastQueryTextForDetail; // +0x50
    NSDictionary * _dicWeApp; // +0x58
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
- (void)filterTopHit:(id)arg1;
- (void)doSearchForDetail:(id)arg1;
- (void)fillDictioanry;
- (BOOL)isToHitWeAppReady;
- (id)tophit_getWeAppDictionary;
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
- (id)dicWeApp;
- (void)setDicWeApp:(id)arg1;
- (void).cxx_destruct;
@end
