@interface ChatFileProcessingViewController : ChatFileBaseViewController <MMCircleProgressViewDelegate>
{
    BOOL _canPreview; // +0x70
    UIImageView * _fileTypeImageView; // +0x78
    UILabel * _filenameLabel; // +0x80
    UILabel * _fileSizeLabel; // +0x88
    UILabel * _statusLabel; // +0x90
    MMLoadingIndicatorView * _loadingIndicator; // +0x98
    MMCircleProgressView * _circleProgressView; // +0xa0
    UIButton * _downloadButton; // +0xa8
    UIButton * _previewButton; // +0xb0
    MMUIButton * _previewActionLabel; // +0xb8
    UILabel * _hintLabel; // +0xc0
    UIButton * _otherAppButton; // +0xc8
    UIButton * _weappButton; // +0xd0
}
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidAppear:(BOOL)arg1;
- (void)refreshMoreEntrance;
- (void)setupUI;
- (void)layoutUI;
- (void)refreshUI;
- (void)onTaskProgress:(int)arg1;
- (void)onTaskCompleted;
- (void)downloadClicked;
- (void)previewClicked;
- (void)circleProgressViewDidTapped:(id)arg1;
- (id)fileTypeImageView;
- (void)setFileTypeImageView:(id)arg1;
- (id)filenameLabel;
- (void)setFilenameLabel:(id)arg1;
- (id)fileSizeLabel;
- (void)setFileSizeLabel:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (id)circleProgressView;
- (void)setCircleProgressView:(id)arg1;
- (id)downloadButton;
- (void)setDownloadButton:(id)arg1;
- (id)previewButton;
- (void)setPreviewButton:(id)arg1;
- (id)previewActionLabel;
- (void)setPreviewActionLabel:(id)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (BOOL)canPreview;
- (void)setCanPreview:(BOOL)arg1;
- (id)otherAppButton;
- (void)setOtherAppButton:(id)arg1;
- (id)weappButton;
- (void)setWeappButton:(id)arg1;
- (void).cxx_destruct;
@end
