@interface WCFinderRedPacketCropSliderView : MMUIView <WCFinderRedPacketCropSliderModelDelegate, UICollectionViewDataSource, WCFinderRedPacketCropFrameViewDelegate, UICollectionViewDelegate>
{
    id <WCFinderRedPacketCropSliderViewDelegate> _delegate; // +0x8
    WCFinderRedPacketCropSliderModel * _sliderModel; // +0x10
    WCFinderRedPacketCropFrameView * _cropFrameView; // +0x18
    UICollectionView * _collectionView; // +0x20
    long long _minSeconds; // +0x28
    long long _maxSeconds; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 videoURL:(id)arg2 minSeconds:(long long)arg3 maxSeconds:(long long)arg4;
- (void)setUpView;
- (void)loadAvAssetInfo;
- (CGSize)getShareSize;
- (void)layoutAllSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)onCropSliderPanViewRangeChanged:(long long)arg1;
- (id)getCurCropVideoTimeRange;
- (void)updateCollectionViewInset;
- (void)scrollViewDidScroll:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)sliderModel;
- (void)setSliderModel:(id)arg1;
- (id)cropFrameView;
- (void)setCropFrameView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (long long)minSeconds;
- (void)setMinSeconds:(long long)arg1;
- (long long)maxSeconds;
- (void)setMaxSeconds:(long long)arg1;
- (void).cxx_destruct;
@end

