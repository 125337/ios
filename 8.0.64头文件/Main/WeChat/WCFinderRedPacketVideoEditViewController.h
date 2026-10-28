@interface WCFinderRedPacketVideoEditViewController : MMUIViewController <UIScrollViewDelegate, WCFinderRedPacketCropSliderViewDelegate, WCFinderRedPacketCoverCropViewDelegate>
{
    id <WCFinderRedPacketVideoEditViewControllerDelegate> _delegate; // +0x70
    WCFinderRedPacketVideoEditRequestParams * _requestParams; // +0x78
    UIScrollView * _scrollView; // +0x80
    UILabel * _titleLabel; // +0x88
    UILabel * _tipsLabel; // +0x90
    WCFinderRedPacketCoverCropView * _coverCropView; // +0x98
    WCFinderRedPacketCropSliderView * _sliderView; // +0xa0
    MMUIButton * _saveBtn; // +0xa8
}
- (id)initWithVideoUrl:(id)arg1 minSeconds:(long long)arg2 maxSeconds:(long long)arg3;
- (void)willDisappear;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)navigationBarBackgroundColor;
- (id)coverCropView;
- (id)sliderView;
- (id)scrollView;
- (id)titleLabel;
- (id)tipsLabel;
- (id)saveBtn;
- (void)layoutAllSubviews;
- (void)onClickSavebtn;
- (void)loadCoverInfo;
- (void)onSliderViewPanGesture:(long long)arg1;
- (void)onSliderViewScrollAction;
- (void)throttleCheckCropViewScroll;
- (id)getCoverCropRangeModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)requestParams;
- (void)setRequestParams:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setCoverCropView:(id)arg1;
- (void)setSliderView:(id)arg1;
- (void)setSaveBtn:(id)arg1;
- (void).cxx_destruct;
@end
