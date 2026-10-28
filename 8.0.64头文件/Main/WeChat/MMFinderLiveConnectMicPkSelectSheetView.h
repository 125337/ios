@interface MMFinderLiveConnectMicPkSelectSheetView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveConnectMicPkSelecting>
{
    id /* block */ _selectAction; // +0x8
    MMTableView * _tableView; // +0x10
    FinderLiveMicInfo_Wording * _micInfoWording; // +0x18
}
- (id)init;
- (void)layoutSubviews;
- (void)updateWithModel:(id)arg1;
- (void)initiateSelection;
- (void)initViews;
- (id)subTitle:(unsigned long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id /* block */)selectAction;
- (void)setSelectAction:(id /* block */)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)micInfoWording;
- (void)setMicInfoWording:(id)arg1;
- (void).cxx_destruct;
@end
