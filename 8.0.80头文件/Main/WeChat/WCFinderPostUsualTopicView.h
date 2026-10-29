@interface WCFinderPostUsualTopicView : MMUIView <UITableViewDelegate, UITableViewDataSource>
{
    id <WCFinderPostUsualTopicViewDelegate> _delegate; // +0x8
    NSArray * _usualTopicsArray; // +0x10
    UITableView * _topicsTableView; // +0x18
}
- (id)topicsTableView;
- (void)updateTopicWidth:(double)arg1 bottom:(double)arg2 usualTopicsArray:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)usualTopicsArray;
- (void)setUsualTopicsArray:(id)arg1;
- (void)setTopicsTableView:(id)arg1;
- (void).cxx_destruct;
@end
