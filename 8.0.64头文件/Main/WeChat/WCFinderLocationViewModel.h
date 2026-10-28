@interface WCFinderLocationViewModel : NSObject
{
    BOOL _hasTriggerNextPage; // +0x8
    NSString * _finderUsername; // +0x10
    id <WCFinderLocationViewModelDelegate> _delegate; // +0x18
    MMAssetInfo * _selectAssetInfo; // +0x20
    NSString * _lastSearchWord; // +0x28
    FinderLbsLocation * _materialLbsLocation; // +0x30
    FinderLbsLocation * _searchMaterialLbsLocation; // +0x38
    WCFinderLbsFetchCgi * _lastCgi; // +0x40
    NSMutableArray * _respList; // +0x48
    NSMutableArray * _configArray; // +0x50
    NSMutableDictionary * _poiIdSetDic; // +0x58
}
+ (id)convertLocationToLbsConfig:(id)arg1;
- (id)initWithFinderUsername:(id)arg1 selectedLocation:(id)arg2 materialLbsLocation:(id)arg3;
- (void)setSelectAssetInfo:(id)arg1;
- (unsigned long long)getSearchSelectAssetInfoType;
- (id)getTitleTips;
- (id)getSearchPlaceholderTips;
- (id)getCgiStreamResponseBy:(int)arg1;
- (void)mergeWithSelectedLocation:(id)arg1;
- (id)poiIdSetDic;
- (id)configArray;
- (BOOL)isSearchMaterialLbsScene;
- (id)getSelectedLocation;
- (id)getCurLbsConfig;
- (int)getCurPoiBusinessType;
- (long long)numberOfRows;
- (id)configOfIndex:(long long)arg1;
- (void)removeNotShowPOI;
- (void)addNotShowPOI;
- (void)triggerFetchLbsListBySearchMaterialLbsLocation:(CLLocationCoordinate2D)arg1;
- (void)triggerFetchLbsListBySearchWord:(id)arg1;
- (BOOL)sameAsRunningCgiRequest;
- (BOOL)enableShowExtractFromAsset;
- (void)handleCgiResponseDataBy:(id)arg1;
- (void)loadTargetLbsMoreListCGI:(int)arg1;
- (void)_fetchLbsListInfoByReqList:(id)arg1;
- (id)getLocationByLbsType:(int)arg1;
- (void)_fetchBottomLbsListCGI;
- (void)didSelectCurCellRowIndex:(long long)arg1;
- (BOOL)poiHasSelected;
- (id)lbsLocation;
- (void)resetFetchLbsRequest;
- (BOOL)noMoreData;
- (BOOL)isOnSearchMaterialGPS;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasTriggerNextPage;
- (void)setHasTriggerNextPage:(BOOL)arg1;
- (id)selectAssetInfo;
- (id)lastSearchWord;
- (void)setLastSearchWord:(id)arg1;
- (id)materialLbsLocation;
- (void)setMaterialLbsLocation:(id)arg1;
- (id)searchMaterialLbsLocation;
- (void)setSearchMaterialLbsLocation:(id)arg1;
- (id)lastCgi;
- (void)setLastCgi:(id)arg1;
- (id)respList;
- (void)setRespList:(id)arg1;
- (void)setConfigArray:(id)arg1;
- (void)setPoiIdSetDic:(id)arg1;
- (void).cxx_destruct;
@end
