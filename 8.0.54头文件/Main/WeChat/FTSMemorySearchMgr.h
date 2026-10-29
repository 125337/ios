@interface FTSMemorySearchMgr : NSObject <IMMLanguageMgrExt, MMKernelExt, MMPackageDownloadMgrExt, FTSTopHitDelegate>
{
    BOOL _hasInited; // +0x8
    NSMutableDictionary * _dicSourceFeatureSearchItem; // +0x10
    unsigned int _curFeatureListVersion; // +0x18
    unsigned int _lastCheckPackageTime; // +0x1c
    Package * _downloadingPackage; // +0x20
    NSMutableDictionary * _dicChinesePinYin; // +0x28
    NSString * _lastQueryText; // +0x30
    NSString * _newestQueryText; // +0x38
    NSMutableArray * _arrLastQueryKeywords; // +0x40
    NSMutableArray * _arrFeatureResultItem; // +0x48
    NSMutableArray * _arrFeatureResultItemForDetail; // +0x50
    NSMutableDictionary * _dicFeatureMatchTip; // +0x58
    NSMutableDictionary * _dicFeatureMatchTipForDetail; // +0x60
    NSMutableDictionary * _dicGameMatchTip; // +0x68
    NSMutableDictionary * _dicGameMatchTipForDetail; // +0x70
    NSString * _newestDetailPageQueryText; // +0x78
    NSString * _lastDetailPageQueryText; // +0x80
    NSMutableArray * _arrDetailPageLastQueryKeywords; // +0x88
    FTSTopHitMgr * _ftsTopHitMgr; // +0x90
}
- (void)setLastQueryText:(id)arg1;
- (id)init;
- (void)doInitWorker;
- (id)convertFeatureItem:(id)arg1;
- (id)loadSearchItem:(id)arg1;
- (void)asyncInitSearchItem;
- (void)asyncInitFeatureItem;
- (void)initSearchItem;
- (void)initFeatureItem;
- (id)createWeSportSearchItem;
- (id)createWeChatPaySearchItem;
- (id)createWeChatPayCollAssistSearchItem;
- (id)createWeGameSearchItem;
- (id)createBrandTemplateMsgSearchItem;
- (id)createVisionProLoginMsgSearchItem;
- (id)createOfficialAccountsSearchItem;
- (id)removeTopHitFeaturesWithinArray:(id)arg1;
- (id)getSourceSearchItem;
- (BOOL)shouldFilterOutFeatureItem:(id)arg1;
- (BOOL)isSepecialFeatureAlwayShowFeatureItem:(id)arg1;
- (void)sortFeatures:(id)arg1 matchTips:(id)arg2;
- (void)doSearch:(id)arg1;
- (void)asyncSearchText:(id)arg1;
- (void)cancelSearch;
- (BOOL)hasSearchDone:(id)arg1;
- (BOOL)hasFeatureSearchResult:(id)arg1;
- (unsigned long long)getFeatureSearchItemCount:(id)arg1;
- (id)getFeatureItem:(id)arg1 index:(unsigned long long)arg2;
- (id)getMatchTip:(id)arg1 featureID:(unsigned int)arg2;
- (id)getDetailMatchTip:(id)arg1 featureID:(unsigned int)arg2;
- (BOOL)checkSearchResultHadofficialFeature;
- (void)asyncSearchFeatureForDetailPage:(id)arg1;
- (void)cancelSearchForFeatureDetailPage;
- (BOOL)hasSearchDoneForFeatureDetailPage:(id)arg1;
- (void)setLastDetailPageQueryText:(id)arg1;
- (void)onLanguageChange;
- (id)getPackageKey;
- (void)doCheckUpdate;
- (void)delayCheckUpdate;
- (void)onAuthOK;
- (id)getFeatureListPackageRootPath;
- (id)getFeatureListPackageZipFile;
- (id)getFeatureListZipPayloadPath;
- (id)getFeatureListTempZipPayloadPath;
- (id)getFeatureListVersionFile;
- (id)getFeatureListFilePath:(id)arg1;
- (id)getFeatureIcon:(unsigned int)arg1;
- (unsigned int)getCurrenPackageVersion;
- (void)updateVersion:(unsigned int)arg1;
- (void)onPackageListUpdated:(id)arg1;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (id)getFeatureDictionary;
- (BOOL)isTopHitFeatureReady;
- (BOOL)isTopHitFeatureShouldFilterOut:(id)arg1;
- (id)lastQueryText;
- (id)newestQueryText;
- (void)setNewestQueryText:(id)arg1;
- (id)arrLastQueryKeywords;
- (void)setArrLastQueryKeywords:(id)arg1;
- (id)arrFeatureResultItem;
- (id)arrFeatureResultItemForDetail;
- (id)dicFeatureMatchTip;
- (id)dicFeatureMatchTipForDetail;
- (id)dicGameMatchTip;
- (id)dicGameMatchTipForDetail;
- (id)newestDetailPageQueryText;
- (void)setNewestDetailPageQueryText:(id)arg1;
- (id)lastDetailPageQueryText;
- (id)arrDetailPageLastQueryKeywords;
- (void)setArrDetailPageLastQueryKeywords:(id)arg1;
- (id)ftsTopHitMgr;
- (void)setFtsTopHitMgr:(id)arg1;
- (void).cxx_destruct;
@end

