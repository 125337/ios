@interface FTSVerticalSearchSugCell : MMTableViewCell <UITableViewDataSource, UITableViewDelegate>
{
    id <FTSVerticalSearchSugCellDelegate> _delegate; // +0x8
    NSString * __currSearchText; // +0x10
    SugResult * __resultWrap; // +0x18
    UITableView * __resultTableView; // +0x20
    NSMutableSet * __exposeSet; // +0x28
}
+ (id)GenHStackWith:(id)arg1;
+ (double)heightForData:(id)arg1 width:(double)arg2;
+ (double)calCellHeight:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)configureWithData:(id)arg1 resultWrap:(id)arg2;
- (void)layoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateVisibleYInSelfCoordinate:(double)arg1;
- (void)resetExposeSet;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)_currSearchText;
- (void)set_currSearchText:(id)arg1;
- (id)_resultWrap;
- (void)set_resultWrap:(id)arg1;
- (id)_resultTableView;
- (void)set_resultTableView:(id)arg1;
- (id)_exposeSet;
- (void)set_exposeSet:(id)arg1;
- (void).cxx_destruct;
@end
