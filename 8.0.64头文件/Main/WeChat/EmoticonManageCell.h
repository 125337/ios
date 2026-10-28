@interface EmoticonManageCell : MMUIView <IEmoticonPackageMgrExt, IEmoticonPackageStateMgrExt, EmoticonManageViewControllerModeExt>
{
    UIButton * m_downloadButton; // +0x8
    MMWebImageView * m_iconImageView; // +0x10
    UIButton * m_unstallButton; // +0x18
    UILabel * m_nameLabel; // +0x20
    MMProgressView * m_progressView; // +0x28
    id <EmoticonManageCellDelegate> m_delegate; // +0x30
    EmoticonManageDataObject * _dataObj; // +0x38
}
- (void)setCellDelegate:(id)arg1;
- (void)setDataObj:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (double)cellSeparatorLeftInset;
- (void)onState:(long long)arg1;
- (void)checkMode;
- (void)onClickDownloadButton;
- (void)onClickUnstallButton;
- (void)OnDownloadProgressChanged:(id)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
- (void)OnEmoticonPackageDownloadStatusChanged:(id)arg1 IsDownloaded:(BOOL)arg2;
- (void)OnUpdateEmoticonPackageState:(id)arg1 toState:(long long)arg2;
- (void)onGotoNormalMode;
- (void)onGotoDeleteMode;
- (id)m_downloadButton;
- (void)setM_downloadButton:(id)arg1;
- (id)m_iconImageView;
- (void)setM_iconImageView:(id)arg1;
- (id)m_unstallButton;
- (void)setM_unstallButton:(id)arg1;
- (id)m_nameLabel;
- (void)setM_nameLabel:(id)arg1;
- (id)m_progressView;
- (void)setM_progressView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)dataObj;
- (void).cxx_destruct;
@end
