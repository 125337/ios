@interface ContactSelectDropDownHalfScreenView : MMDropDownHalfScreenExpandView <UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * m_tableView; // +0x8
    MMUIView * m_contentView; // +0x10
    NSMutableDictionary * m_dicMultiSelect; // +0x18
    NSArray * m_arrAllContact; // +0x20
    id <ContactSelectDropDownHalfScreenViewDelegate> _delegate; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 navigationBarHeight:(double)arg2;
- (void)setArrAllSelectContact:(id)arg1;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutTableView;
- (void)showHalfScreenExpandViewWithAnimated:(BOOL)arg1;
- (void)hideHalfScreenExpandViewWithAnimated:(BOOL)arg1;
- (BOOL)isSelected:(id)arg1;
- (id)getContactWithIndexPath:(id)arg1;
- (double)getMixedViewHeight;
- (double)getDetailViewAnimateInitTop;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2 tableView:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

