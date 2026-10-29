@interface MJShootComposingTemplateSinglePageViewModel : NSObject
{
    BOOL _isFetching; // +0x8
    unsigned int _tabType; // +0xc
    unsigned long long _templateScene; // +0x10
    NSString * _selectedTemplateID; // +0x18
    unsigned long long _tabID; // +0x20
    NSMutableArray * _templateItems; // +0x28
    id <MJShootComposingTemplateSinglePageViewModelDelegate> _delegate; // +0x30
    id <MJShootComposingTemplateSinglePageViewModelTabDataSource> _tabDataSource; // +0x38
    UBArraySignal * _defaultTabDidUpdateTemplateSignal; // +0x40
    NSString * _username; // +0x48
    WCGetCameraTemplateListParams * _optionalParams; // +0x50
    NSData * _lastPageBuf; // +0x58
    long long _lastContinueFlag; // +0x60
}
- (id)init;
- (void)fetchTemplateItems;
- (void)fetchRecTemplateItems;
- (void)fetchFavTemplateItems;
- (void)loadMoreTemplateIfNeeded;
- (BOOL)shouldFetchMoreTemplate;
- (BOOL)containsTemplateWithID:(id)arg1;
- (unsigned long long)templateScene;
- (void)setTemplateScene:(unsigned long long)arg1;
- (id)selectedTemplateID;
- (void)setSelectedTemplateID:(id)arg1;
- (unsigned long long)tabID;
- (void)setTabID:(unsigned long long)arg1;
- (unsigned int)tabType;
- (void)setTabType:(unsigned int)arg1;
- (id)templateItems;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tabDataSource;
- (void)setTabDataSource:(id)arg1;
- (id)defaultTabDidUpdateTemplateSignal;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)optionalParams;
- (void)setOptionalParams:(id)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (id)lastPageBuf;
- (void)setLastPageBuf:(id)arg1;
- (long long)lastContinueFlag;
- (void)setLastContinueFlag:(long long)arg1;
- (void).cxx_destruct;
@end

