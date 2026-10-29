@interface WCFinderLimitedModeConfigViewController : MMLimitedModeConfigViewController <UITableViewDelegate, UITableViewDataSource, MMActionSheetDatePickerDelegate, WCFinderLimitedContentActionSheetDelegate>
{
    RichTextView * _contentTitleLabel; // +0x68
    UITableView * _contentTableView; // +0x70
}
- (void)viewDidLoad;
- (void)willDisappear;
- (id)contentTitleLabel;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onClickBirthDatePicker;
- (void)onClickChooseCategoryPicker;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)getTableViewHeader;
- (void)datePickerCancel:(id)arg1;
- (void)datePickerConfirm:(id)arg1;
- (void)limitedContentClickConfirmAsSelectedModelArray:(id)arg1;
- (void)setContentTitleLabel:(id)arg1;
- (id)contentTableView;
- (void)setContentTableView:(id)arg1;
- (void).cxx_destruct;
@end

