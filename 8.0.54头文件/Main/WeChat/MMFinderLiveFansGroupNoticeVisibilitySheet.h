@interface MMFinderLiveFansGroupNoticeVisibilitySheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLivePickerViewDelegate>
{
    id <MMFinderLiveFansGroupNoticeVisibilitySheetDelegate> _delegate; // +0x8
    MMTableView * _tableView; // +0x10
    NSArray * _itemArray; // +0x18
    MMFinderLiveFansGroupAnchorEditFansNoticeInfo * _info; // +0x20
    MMFinderLiveFansGroupAnchorEditFansNoticeInfo * _editedInfo; // +0x28
    MMFinderLivePickerView * _pickerView; // +0x30
}
- (id)initWithInfo:(id)arg1;
- (void)dealloc;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)initViews;
- (double)getContentHeight;
- (double)getPanelContentHeight;
- (double)getMaxPanelHeight;
- (void)initPageSheetConfig;
- (id)getBackButton;
- (id)getConfirmButton;
- (void)pageSheetWillDisappear;
- (void)initData;
- (id)levelStringWithLevel:(unsigned int)arg1;
- (void)openPickerView;
- (void)pickerViewWillDissmiss:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(unsigned long long)arg2;
- (void)onConfirmButtonClicked;
- (void)onCancelButtonClicked;
- (BOOL)superfanEnabled;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)itemArray;
- (void)setItemArray:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)editedInfo;
- (void)setEditedInfo:(id)arg1;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (void).cxx_destruct;
@end

