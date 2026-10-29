@interface CBTAsstBoardImageDownlinkCellView : CBTAsstBoardBaseCellView
{
    BOOL _hasReportedContentCardExposure; // +0x8
    NSMutableArray * _imageViews; // +0x10
    CBTAsstBoardBaseViewModel * _contentCardBoundViewModel; // +0x18
}
- (void)setupCellWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setupUI;
- (void)refreshImage;
- (void)loadImageAtIndex:(long long)arg1;
- (void)relayoutIfNeeded;
- (void)onImageTapped:(id)arg1;
- (void)enableCloudPagingForViewer:(id)arg1 viewModel:(id)arg2;
- (void)reportContentCardViewExposureIfNeeded;
- (void)reportContentCardEvent:(id)arg1;
- (void)reportAigcPicExposureIfNeeded;
- (void)reportAigcPicClickWithIndex:(long long)arg1;
- (id)imageViews;
- (void)setImageViews:(id)arg1;
- (id)contentCardBoundViewModel;
- (void)setContentCardBoundViewModel:(id)arg1;
- (BOOL)hasReportedContentCardExposure;
- (void)setHasReportedContentCardExposure:(BOOL)arg1;
- (void).cxx_destruct;
@end
