@interface MMFinderLiveConnectMicConditionChoosePannel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    id <MMFinderLiveConnectMicConditionChooseDelegate> _conditionDelegate; // +0x8
    MMTableView * _tableView; // +0x10
    unsigned long long _lastSelectType; // +0x18
    NSIndexPath * _lastSelectIdx; // +0x20
    NSArray * _unForbiddenTypes; // +0x28
}
+ (BOOL)isConditionTypeValid:(unsigned long long)arg1;
- (id)initWithCurConditionType:(unsigned long long)arg1 unForbiddenTypes:(id)arg2 frame:(CGRect)arg3;
- (void)initView;
- (void)pageSheetDidClose:(BOOL)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned long long)getConditionType:(long long)arg1;
- (id)getConditionTitle:(unsigned long long)arg1;
- (id)conditionDelegate;
- (void)setConditionDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (unsigned long long)lastSelectType;
- (void)setLastSelectType:(unsigned long long)arg1;
- (id)lastSelectIdx;
- (void)setLastSelectIdx:(id)arg1;
- (id)unForbiddenTypes;
- (void)setUnForbiddenTypes:(id)arg1;
- (void).cxx_destruct;
@end

