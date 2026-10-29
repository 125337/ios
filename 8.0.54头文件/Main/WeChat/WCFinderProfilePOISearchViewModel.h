@interface WCFinderProfilePOISearchViewModel : NSObject
{
    BOOL _isSearchModel; // +0x8
    BOOL _continueFlag; // +0x9
    int _viewScene; // +0xc
    id <WCFinderProfilePOISearchViewModelDelegate> _delegate; // +0x10
    NSMutableArray * _allInfos; // +0x18
    NSString * _finderUsername; // +0x20
    WCFinderPOIParamsModel * _poiParamsModel; // +0x28
    NSData * _lastBuffer; // +0x30
    NSMutableArray * _searchInfos; // +0x38
    NSMutableArray * _relativeInfos; // +0x40
}
- (id)initWithFinderUsername:(id)arg1;
- (id)allInfos;
- (BOOL)isAuthor;
- (void)searchPOIWithQuery:(id)arg1;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (void)fetchDataWithLastBuffer:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isSearchModel;
- (void)setIsSearchModel:(BOOL)arg1;
- (void)setAllInfos:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (int)viewScene;
- (void)setViewScene:(int)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)poiParamsModel;
- (void)setPoiParamsModel:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)searchInfos;
- (void)setSearchInfos:(id)arg1;
- (id)relativeInfos;
- (void)setRelativeInfos:(id)arg1;
- (void).cxx_destruct;
@end

