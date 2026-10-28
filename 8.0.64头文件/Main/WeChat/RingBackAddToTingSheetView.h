@interface RingBackAddToTingSheetView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, MMRefreshTableFooterDelegate>
{
    id <RingBackAddToTingSheetViewDelegate> _delegate; // +0x8
    UIView * _contentView; // +0x10
    MMTableView * _tableView; // +0x18
    WCTimeLineFooterView * _footerView; // +0x20
    NSMutableArray * _tingInfoArray; // +0x28
    unsigned long long _ringCount; // +0x30
}
- (id)init;
- (void)resetData;
- (void)updateDataWithRings:(id)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)clickCloseButton:(id)arg1;
- (void)clickAddButton:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)tingInfoArray;
- (void)setTingInfoArray:(id)arg1;
- (unsigned long long)ringCount;
- (void)setRingCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
