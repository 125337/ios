@interface ShakeSettingViewController : MMUIViewController <MMTableViewInfoDelegate, MMPageSheetBottomViewDelegate>
{
    id <ShakeSettingViewControllerDelegate><ShakeListDelegate> m_delegate; // +0x70
    MMTableViewInfo * _tableViewInfo; // +0x78
    MMPageSheetBaseView * _pageView; // +0x80
}
- (void)setM_Delegate:(id)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (void)reloadTableData;
- (void)OnChangeBackgroundPic;
- (BOOL)hasCustomImage;
- (void)showImagePicker;
- (void)nextActionSheet;
- (void)useDefaultHideImage;
- (void)OnOpenSayHelloFromSayHelloButton;
- (void)OnOpenShakeHistoryList;
- (void)OnOpenShakeMsgCenter;
- (void)onSouncStatusSwitchChanged:(id)arg1;
- (id)pageView;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (long long)styleForPageSheetConfirmButton;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (void)setPageView:(id)arg1;
- (void).cxx_destruct;
@end
