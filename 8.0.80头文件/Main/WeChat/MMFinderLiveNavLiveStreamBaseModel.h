@interface MMFinderLiveNavLiveStreamBaseModel : NSObject
{
    BOOL _skipGetAllLiveTabs; // +0x8
    BOOL _skipAsyncLoadLiveInfo; // +0x9
    BOOL _skipFeedsReport; // +0xa
    unsigned int _flag; // +0xc
    NSMutableArray * _containerModelList; // +0x10
    FinderLivePreloadInfo * _livePreloadInfo; // +0x18
    unsigned long long _prefechMinInterval; // +0x20
    unsigned long long _refreshInterval; // +0x28
    NSData * _lastBuffer; // +0x30
    unsigned long long _requestId; // +0x38
    FinderLiveSquareStyleInfo * _styleInfo; // +0x40
    FinderLiveStreamGetAsyncLoadInfoConfig * _asyncLoadInfoConfig; // +0x48
    unsigned long long _autoPlayFlag; // +0x50
    FinderNavLiveStreamPreloadControlConfig * _preloadControlConfig; // +0x58
    NSArray * _allDataArray; // +0x60
}
- (BOOL)isValidToSaveToDataCache;
- (id)containerModelList;
- (void)setContainerModelList:(id)arg1;
- (id)livePreloadInfo;
- (void)setLivePreloadInfo:(id)arg1;
- (unsigned long long)prefechMinInterval;
- (void)setPrefechMinInterval:(unsigned long long)arg1;
- (unsigned long long)refreshInterval;
- (void)setRefreshInterval:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (BOOL)skipGetAllLiveTabs;
- (void)setSkipGetAllLiveTabs:(BOOL)arg1;
- (BOOL)skipAsyncLoadLiveInfo;
- (void)setSkipAsyncLoadLiveInfo:(BOOL)arg1;
- (BOOL)skipFeedsReport;
- (void)setSkipFeedsReport:(BOOL)arg1;
- (unsigned int)flag;
- (void)setFlag:(unsigned int)arg1;
- (id)styleInfo;
- (void)setStyleInfo:(id)arg1;
- (id)asyncLoadInfoConfig;
- (void)setAsyncLoadInfoConfig:(id)arg1;
- (unsigned long long)autoPlayFlag;
- (void)setAutoPlayFlag:(unsigned long long)arg1;
- (id)preloadControlConfig;
- (void)setPreloadControlConfig:(id)arg1;
- (id)allDataArray;
- (void)setAllDataArray:(id)arg1;
- (void).cxx_destruct;
@end
