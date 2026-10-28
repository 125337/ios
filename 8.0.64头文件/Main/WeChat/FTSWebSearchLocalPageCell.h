@interface FTSWebSearchLocalPageCell : MMTableViewCell <UITableViewDataSource, UITableViewDelegate, IFtsWebSearchExt>
{
    SugResult * _resultWrap; // +0x8
    UITableView * _resultTableView; // +0x10
    NSMutableSet * _exposeSet; // +0x18
    BOOL _enableCardStyle; // +0x20
    id <WebSearchLocalPageCellDelegate> _delegate; // +0x28
    unsigned long long _localSearchId; // +0x30
}
+ (id)GenHStackWith:(id)arg1;
+ (double)heightForData:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureWithData:(id)arg1;
- (void)layoutSubviews;
- (BOOL)useCardStyle;
- (double)horizonalMargin;
- (void)setLocalSearchId:(unsigned long long)arg1;
- (long long)historyCount;
- (long long)rowCount;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateVisibleYInSelfCoordinate:(double)arg1;
- (void)resetExposeSet;
- (void)onPardusSearchResultReturn:(id)arg1 request:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)localSearchId;
- (BOOL)enableCardStyle;
- (void)setEnableCardStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
