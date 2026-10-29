@interface WCFinderLocationViewModel : NSObject
{
    BOOL _hasTriggerNextPage; // +0x8
    BOOL _isSearchAssetPOIState; // +0x9
    BOOL _continueFlag; // +0xa
    int _scene; // +0xc
    unsigned long long _poiType; // +0x10
    id <WCFinderLocationViewModelDelegate> _delegate; // +0x18
    NSString * _finderUsername; // +0x20
    NSString * _lastSearchWord; // +0x28
    FinderLbsLocation * _materialLbsLocation; // +0x30
    FinderLbsLocation * _searchMaterialLbsLocation; // +0x38
    WCFinderGetLbsListCgi * _lastCgi; // +0x40
    NSData * _lastBuffer; // +0x48
    NSMutableArray * _configArray; // +0x50
    NSMutableSet * _poiIdSet; // +0x58
    NSString * _searchId; // +0x60
    long long _autoQueryInterval; // +0x68
    NSString * _city; // +0x70
    NSString * _materialCity; // +0x78
}
+ (id)convertLocationToLbsConfig:(id)arg1;
- (id)initWithPOIType:(unsigned long long)arg1 finderUsername:(id)arg2 selectedLocation:(id)arg3 materialLbsLocation:(id)arg4;
- (void)mergeWithSelectedLocation:(id)arg1;
- (id)poiIdSet;
- (id)configArray;
- (id)getSelectedLocation;
- (id)getCurLbsConfig;
- (int)getCurPoiBusinessType;
- (long long)numberOfRows;
- (id)configOfIndex:(long long)arg1;
- (void)removeNotShowPOI;
- (void)addNotShowPOI;
- (void)triggerFetchLbsListByScene:(int)arg1 searchMaterialLbsLocation:(CLLocationCoordinate2D)arg2;
- (void)triggerFetchLbsListByScene:(int)arg1 searchWord:(id)arg2;
- (BOOL)sameAsRunningCgiRequest;
- (BOOL)enableShowExtractFromAsset;
- (void)_fetchLbsListCGI;
- (void)didSelectCurCellRowIndex:(long long)arg1;
- (BOOL)poiHasSelected;
- (id)lbsLocation;
- (void)resetFetchLbsRequest;
- (BOOL)noMoreData;
- (BOOL)isOnSearchMaterialGPS;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)poiType;
- (void)setPoiType:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasTriggerNextPage;
- (void)setHasTriggerNextPage:(BOOL)arg1;
- (BOOL)isSearchAssetPOIState;
- (void)setIsSearchAssetPOIState:(BOOL)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)lastSearchWord;
- (void)setLastSearchWord:(id)arg1;
- (id)materialLbsLocation;
- (void)setMaterialLbsLocation:(id)arg1;
- (id)searchMaterialLbsLocation;
- (void)setSearchMaterialLbsLocation:(id)arg1;
- (id)lastCgi;
- (void)setLastCgi:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (void)setConfigArray:(id)arg1;
- (void)setPoiIdSet:(id)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (long long)autoQueryInterval;
- (void)setAutoQueryInterval:(long long)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)materialCity;
- (void)setMaterialCity:(id)arg1;
- (void).cxx_destruct;
@end

