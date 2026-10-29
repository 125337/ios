@interface WCFinderLiveEntertainmentChannelsTagStreamVM : NSObject <WCFinderLiveExt>
{
    id <WCFinderLiveEntertainmentChannelsTagStreamVMDelegate> _delegate; // +0x8
    unsigned long long _state; // +0x10
    unsigned long long _refreshTime; // +0x18
    EntertainmentChannelsTagDataModel * _dataModel; // +0x20
    WCFinderFeedFlowView * _feedFlowView; // +0x28
    WCFinderLiveEntertainmentChannelsContext * _ctx; // +0x30
    NSString * _themeTag; // +0x38
    unsigned long long _containerId; // +0x40
}
+ (void)saveDataItemAndExtraInfosWithContainerModels:(id)arg1 commentScene:(int)arg2 extraKey:(id)arg3;
- (id)initWithContext:(id)arg1 tag:(id)arg2 initialContainer:(id)arg3;
- (void)cancelAllCgi;
- (BOOL)hasNoData;
- (unsigned long long)numberOfItems;
- (void)fetchMoreData;
- (void)refreshDataFromTop;
- (void)fetchMoreDataWithPullType:(unsigned long long)arg1;
- (id)createFeedVMWithModel:(id)arg1;
- (BOOL)continueFlag;
- (BOOL)isFetchingData;
- (void)updateState;
- (id)feedVMAtIndexPath:(id)arg1;
- (unsigned long long)indexOfTid:(id)arg1;
- (void)removeDataWithTid:(id)arg1;
- (id)currentContainerLastBuffer;
- (id)currentContainerReadIds;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)dataModel;
- (void)setDataModel:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (id)ctx;
- (void)setCtx:(id)arg1;
- (id)themeTag;
- (void)setThemeTag:(id)arg1;
- (unsigned long long)containerId;
- (void)setContainerId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

