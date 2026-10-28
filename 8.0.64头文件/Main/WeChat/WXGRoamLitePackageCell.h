@interface WXGRoamLitePackageCell : UITableViewCell
{
    WXGRoamBackupPackageModel * _viewModel; // +0x8
    UIView * _blockView; // +0x10
    UILabel * _titleView; // +0x18
    UILabel * _tipsView; // +0x20
    UIButton * _backupBtn; // +0x28
    UIButton * _restoreBtn; // +0x30
    UIButton * _deleteBtn; // +0x38
    id <WXGRoamLitePackageCellDelegate> _delegate; // +0x40
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupView;
- (void)updateLayout;
- (void)updateViewByViewModel:(id)arg1;
- (void)setCellWidth:(double)arg1;
- (void)onStartBackup;
- (void)onStartRestore;
- (void)onDeletePackage;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
