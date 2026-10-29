@interface MMLiveConnectMicReplayFragmentListView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    id <MMLiveConnectMicReplayFragmentListViewDelegate> _delegate; // +0x8
    MicReplayInfo * _replayInfo; // +0x10
    unsigned long long _sectionsFlag; // +0x18
    UITableView * _tableView; // +0x20
    UIView * _footerView; // +0x28
    double _safeBottomInset; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)configTableView;
- (void)layoutTableView;
- (void)updateViewWithReplayInfo:(id)arg1 showHeadings:(BOOL)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)replayInfo;
- (void)setReplayInfo:(id)arg1;
- (unsigned long long)sectionsFlag;
- (void)setSectionsFlag:(unsigned long long)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (double)safeBottomInset;
- (void)setSafeBottomInset:(double)arg1;
- (void).cxx_destruct;
@end
