@interface WCFinderSnSShareLiveLogicController : NSObject <WCFinderLiveExt>
{
    BOOL _continueFlag; // +0x8
    id /* block */ _onTriggerContentTableViewReload; // +0x10
    id <WCTimelineLogicControllerDelegate> _delegate; // +0x18
    NSData * _lastBuffer; // +0x20
    NSMutableArray * _allDataItems; // +0x28
    NSMutableSet * _tidContainSet; // +0x30
    WCFinderSnSLiveSectionTableViewCell * _snsLiveCell; // +0x38
}
- (id)initWithDelegate:(id)arg1;
- (BOOL)shouldShowSnSLiveCell;
- (void)onRefreshHead:(unsigned long long)arg1;
- (void)bindCurrentSnSLiveSecionCell:(id)arg1;
- (void)requestLatestData;
- (void)requestNextPageData;
- (id)dataSource;
- (id)filterVaildDataItem:(id)arg1;
- (id)processServerData:(id)arg1 layoutInfo:(id)arg2;
- (id)processServerDividerData:(id)arg1 layoutInfo:(id)arg2;
- (void)sortItem:(id)arg1 layoutInfo:(id)arg2;
- (void)processLiveExtRegister:(id)arg1;
- (void)afterEnterSnSLiveRoom:(id)arg1;
- (void)clearAllData;
- (long long)findContentIndexWithTid:(id)arg1;
- (void)finderLiveHoverSnsTimelineSwitchChanged:(BOOL)arg1;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (id /* block */)onTriggerContentTableViewReload;
- (void)setOnTriggerContentTableViewReload:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)allDataItems;
- (void)setAllDataItems:(id)arg1;
- (id)tidContainSet;
- (void)setTidContainSet:(id)arg1;
- (id)snsLiveCell;
- (void)setSnsLiveCell:(id)arg1;
- (void).cxx_destruct;
@end
