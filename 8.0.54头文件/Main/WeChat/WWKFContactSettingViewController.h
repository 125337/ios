@interface WWKFContactSettingViewController : MMUIViewController <WWKFReportLocationMgrExt>
{
    id <WWKFContactSettingViewControllerDelegate> _delegate; // +0x68
    MMTableViewInfo * _tableInfo; // +0x70
    CContact * _contact; // +0x78
}
- (id)initWithContact:(id)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (void)reloadData;
- (void)onSwitchAllowReportLocation:(id)arg1;
- (void)onShare;
- (void)onSetAllowReportLocation:(id)arg1 allowReport:(BOOL)arg2 success:(BOOL)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableInfo;
- (void)setTableInfo:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end

