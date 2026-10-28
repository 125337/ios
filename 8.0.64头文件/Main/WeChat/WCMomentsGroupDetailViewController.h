@interface WCMomentsGroupDetailViewController : ContactBaseSelectListViewController <ContactSelectListViewControllerDelegate>
{
    NSArray * _contactDataList; // +0x70
    NSString * _viewControllerTitle; // +0x78
    MMPageSheetAdapter * _pageSheetAdapter; // +0x80
}
- (void)viewDidLoad;
- (void)initTableHeaderView;
- (double)getContentViewY;
- (double)getTableViewHeight;
- (id)getReloadContactDataList;
- (void)onDismissBarButtonPress:(id)arg1;
- (id)contactDataList;
- (void)setContactDataList:(id)arg1;
- (id)viewControllerTitle;
- (void)setViewControllerTitle:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (void).cxx_destruct;
@end
