@interface CBTAsstBoardFileProcessingViewController : ChatFileProcessingViewController
{
    BOOL _forceDisablePreview; // +0x70
    BOOL _canPreview; // +0x71
    UIButton * _downloadButton; // +0x78
    UIButton * _previewButton; // +0x80
    MMUIButton * _previewActionLabel; // +0x88
    UILabel * _hintLabel; // +0x90
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)cbt_onReceivedFileTaskStateChanged:(id)arg1;
- (void)setForceDisablePreview:(BOOL)arg1;
- (void)setupUI;
- (void)refreshUI;
- (void)cbt_preparePreviewStateIfNeeded;
- (void)cbt_applyPreviewSuppressionIfNeeded;
- (void)cbt_applyDownloadButtonPrimaryStyle;
- (void)cbt_hideExpiredHintIfNeeded;
- (BOOL)forceDisablePreview;
- (BOOL)canPreview;
- (void)setCanPreview:(BOOL)arg1;
- (id)downloadButton;
- (void)setDownloadButton:(id)arg1;
- (id)previewButton;
- (void)setPreviewButton:(id)arg1;
- (id)previewActionLabel;
- (void)setPreviewActionLabel:(id)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (void).cxx_destruct;
@end
