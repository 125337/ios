@interface CBTReferenceSourceSheet : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate, CBTRefSourceCellContentViewDelegate>
{
    CBTAttachmentHostTraceInfo * _hostTraceInfo; // +0x8
    NSDictionary * _reportCommonParams; // +0x10
    NSArray * _items; // +0x18
    UIView * _contentView; // +0x20
    UIView * _topSeparatorLine; // +0x28
    UITableView * _tableView; // +0x30
    double _maxContentHeight; // +0x38
    NSMutableDictionary * _cellContentViews; // +0x40
    UIView * _timelineUnavailableFooter; // +0x48
    long long _lastFooterAggregateState; // +0x50
    double _lastFooterContentWidth; // +0x58
    NSHashTable * _hookedTimelineVMs; // +0x60
}
- (id)initWithItems:(id)arg1 title:(id)arg2;
- (id)initWithItems:(id)arg1;
- (void)initContentView;
- (void)prepareAllCellContentViews;
- (void)prepareAllCellContentViewsWithWidth:(double)arg1;
- (void)layoutSubviews;
- (double)heightForItemAtIndex:(long long)arg1 contentWidth:(double)arg2;
- (void)applyTimelineRowCollapseStates;
- (void)hookTimelineResolveIfNeeded:(id)arg1;
- (void)relayoutForTimelineResolve;
- (long long)aggregateTimelineState;
- (double)timelineFooterHeightForState:(long long)arg1;
- (void)updateTimelineFooterWithState:(long long)arg1 contentWidth:(double)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)refSourceCellContentViewDidChangeHeight:(id)arg1;
- (void)pageSheetDidShow;
- (void)pageSheetDidDismiss;
- (void)reportSourceSheetPageEvent:(id)arg1;
- (id)mergedReportParamsWithSpecParams:(id)arg1;
- (id)hostTraceInfo;
- (void)setHostTraceInfo:(id)arg1;
- (id)reportCommonParams;
- (void)setReportCommonParams:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)topSeparatorLine;
- (void)setTopSeparatorLine:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (double)maxContentHeight;
- (void)setMaxContentHeight:(double)arg1;
- (id)cellContentViews;
- (void)setCellContentViews:(id)arg1;
- (id)timelineUnavailableFooter;
- (void)setTimelineUnavailableFooter:(id)arg1;
- (long long)lastFooterAggregateState;
- (void)setLastFooterAggregateState:(long long)arg1;
- (double)lastFooterContentWidth;
- (void)setLastFooterContentWidth:(double)arg1;
- (id)hookedTimelineVMs;
- (void)setHookedTimelineVMs:(id)arg1;
- (void).cxx_destruct;
@end
