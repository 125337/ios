@interface SightLocalVideoImageSlider : UIView <UIScrollViewDelegate, SightLocalViewSliderMaskViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    CGRect _normalModeFrame; // +0x8
    BOOL _isSystemCrop; // +0x28
    BOOL _isCropAllowEnlarge; // +0x29
    BOOL _isLargeMode; // +0x2a
    BOOL _isLargeAnimationBegin; // +0x2b
    BOOL _isDefaultMode; // +0x2c
    BOOL _isDurationMarkerEnabled; // +0x2d
    BOOL _isStartTimeMarkerEnabled; // +0x2e
    BOOL _isHighlightMaskEnabled; // +0x2f
    BOOL _isSliderBarrierEnabled; // +0x30
    float _playRate; // +0x34
    float _usrDefOutputDuration; // +0x38
    float _minDuration; // +0x3c
    float _maxDuration; // +0x40
    float _outputDuration; // +0x44
    float _totalDuration; // +0x48
    id <SightLocalVideoImageSliderDelegate> _delegate; // +0x50
    AVAsset * _asset; // +0x58
    UICollectionView * _thumbImagesCollectionView; // +0x60
    double _widthOfImage; // +0x68
    UIColor * _customLineSliderBorderColor; // +0x70
    UIColor * _customHightlightMaskShadowColor; // +0x78
    UIColor * _customDurationMarkerViewColor; // +0x80
    UIColor * _customDurationMarkerLabelColor; // +0x88
    double _currentRateOfImage; // +0x90
    double _numberOfImagesPerSecond; // +0x98
    double _lastContentOffset; // +0xa0
    unsigned long long _currentScrollDirection; // +0xa8
    AVAssetImageGenerator * _imageGenerator; // +0xb0
    NSMutableDictionary * _thumbImageDictionary; // +0xb8
    NSMutableArray * _totalTimeList; // +0xc0
    NSMutableArray * _largeModeTimeListOnShow; // +0xc8
    SightLocalViewSliderMaskView * _maskView; // +0xd0
    double _lastStartTime; // +0xd8
    double _lastEndTime; // +0xe0
    NSIndexPath * _enlargeCellIndex; // +0xe8
    unsigned long long _scene; // +0xf0
    long long _sideFlagStyle; // +0xf8
    double _startTimeMarkerKeepTimeSec; // +0x100
    double _maskRectRadius; // +0x108
    UIView * _sliderBarrierView; // +0x110
    UILabel * _sliderBarrierLabel; // +0x118
    UIFont * _sliderBarrierLabelScaledFont; // +0x120
    NSString * _sliderBarrierText; // +0x128
    CGPoint _sliderContentOffset; // +0x130
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 params:(id)arg2;
- (void)setPlayRate:(float)arg1;
- (void)setNumberOfImagesPerSecond:(double)arg1;
- (void)_initSliderBarrierViewIfNeeded;
- (void)_relayoutSliderBarrierViewWithThumbListContentMinX:(double)arg1 thumbListContentMaxX:(double)arg2;
- (void)setAsset:(id)arg1 videoComposition:(id)arg2 andLoadComplete:(id /* block */)arg3;
- (void)setAsset:(id)arg1;
- (void)setDefaultSlider:(double)arg1 defaultImage:(id)arg2 preferedFillMaskView:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)setOutputDuration:(float)arg1;
- (void)_setOutputDuration:(float)arg1 animated:(BOOL)arg2;
- (void)updateMaskViewDuration:(double)arg1;
- (void)setTotalDuration:(float)arg1;
- (CGRect)validFrameOfMaskView;
- (double)_getSideFlagWidth;
- (double)_getThumbListContentMinX;
- (double)_getThumbListContentMaxX;
- (id)timeValueForThumbAtRowIndex:(long long)arg1;
- (id)visibleIndexPathAtTime:(struct)arg1;
- (void)loadSingleImageForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)loadSingleImageAtIndexPath:(id)arg1 needFakeResultImmediately:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)setBarrierEnabled:(BOOL)arg1 withText:(id)arg2;
- (void)asyncUpdateStartTime:(double)arg1 endTime:(double)arg2 animated:(BOOL)arg3 andStartPlayFlagAnim:(BOOL)arg4 withCompletion:(id /* block */)arg5;
- (void)setStartFlagTime:(double)arg1 andEndFlagTime:(double)arg2;
- (void)_setStartFlagTime:(double)arg1 andEndFlagTime:(double)arg2 andStartPlayFlag:(BOOL)arg3;
- (void)updateCollectionOffsetStartFlagTime:(double)arg1 andEndFlagTime:(double)arg2 animated:(BOOL)arg3;
- (double)timePosition:(double)arg1;
- (CGPoint)getSliderCollectionViewContentOffset;
- (void)clearImages;
- (void)resetDataWithCompletion:(id /* block */)arg1;
- (void)loadMoreImages;
- (void)loadMoreImagesFromIndexPath:(id)arg1 withSrollDirection:(unsigned long long)arg2;
- (void)cancelAllImageGeneration;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)didStopScrolling;
- (void)playFlagOfMaskDidMoveToTime:(double)arg1;
- (void)endOfMaskDidMoveToTime:(double)arg1;
- (double)timeOfStartFlag;
- (double)timeOfEndFlag;
- (BOOL)isSliderCanSlide;
- (void)startPlayFlagAtTime:(double)arg1;
- (void)stopPlayFlag;
- (double)timeOfPosition:(double)arg1;
- (double)positionOfTime:(double)arg1;
- (void)sightLocalViewSliderMaskViewPlayFlagDidChange:(id)arg1;
- (void)sightLocalViewSliderMaskView:(id)arg1 didStopMovingAtPosition:(double)arg2 isStartFlag:(BOOL)arg3;
- (void)thumbImagesCollectionViewContentInsetNeedChange;
- (void)shouldSwitchToLargeMode:(BOOL)arg1;
- (BOOL)queryIsSystemCrop;
- (BOOL)queryIsCropAllowEnlarge;
- (BOOL)canMoveStartAndEndFlag;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (float)playRate;
- (id)asset;
- (id)thumbImagesCollectionView;
- (void)setThumbImagesCollectionView:(id)arg1;
- (double)widthOfImage;
- (void)setWidthOfImage:(double)arg1;
- (float)usrDefOutputDuration;
- (void)setUsrDefOutputDuration:(float)arg1;
- (float)minDuration;
- (void)setMinDuration:(float)arg1;
- (float)maxDuration;
- (void)setMaxDuration:(float)arg1;
- (BOOL)isSystemCrop;
- (void)setIsSystemCrop:(BOOL)arg1;
- (BOOL)isCropAllowEnlarge;
- (void)setIsCropAllowEnlarge:(BOOL)arg1;
- (CGPoint)sliderContentOffset;
- (void)setSliderContentOffset:(CGPoint)arg1;
- (id)customLineSliderBorderColor;
- (void)setCustomLineSliderBorderColor:(id)arg1;
- (id)customHightlightMaskShadowColor;
- (void)setCustomHightlightMaskShadowColor:(id)arg1;
- (id)customDurationMarkerViewColor;
- (void)setCustomDurationMarkerViewColor:(id)arg1;
- (id)customDurationMarkerLabelColor;
- (void)setCustomDurationMarkerLabelColor:(id)arg1;
- (double)currentRateOfImage;
- (void)setCurrentRateOfImage:(double)arg1;
- (float)outputDuration;
- (float)totalDuration;
- (double)numberOfImagesPerSecond;
- (double)lastContentOffset;
- (void)setLastContentOffset:(double)arg1;
- (unsigned long long)currentScrollDirection;
- (void)setCurrentScrollDirection:(unsigned long long)arg1;
- (id)imageGenerator;
- (void)setImageGenerator:(id)arg1;
- (id)thumbImageDictionary;
- (void)setThumbImageDictionary:(id)arg1;
- (id)totalTimeList;
- (void)setTotalTimeList:(id)arg1;
- (id)largeModeTimeListOnShow;
- (void)setLargeModeTimeListOnShow:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (double)lastStartTime;
- (void)setLastStartTime:(double)arg1;
- (double)lastEndTime;
- (void)setLastEndTime:(double)arg1;
- (BOOL)isLargeMode;
- (void)setIsLargeMode:(BOOL)arg1;
- (BOOL)isLargeAnimationBegin;
- (void)setIsLargeAnimationBegin:(BOOL)arg1;
- (id)enlargeCellIndex;
- (void)setEnlargeCellIndex:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)isDefaultMode;
- (void)setIsDefaultMode:(BOOL)arg1;
- (long long)sideFlagStyle;
- (void)setSideFlagStyle:(long long)arg1;
- (BOOL)isDurationMarkerEnabled;
- (void)setIsDurationMarkerEnabled:(BOOL)arg1;
- (BOOL)isStartTimeMarkerEnabled;
- (void)setIsStartTimeMarkerEnabled:(BOOL)arg1;
- (double)startTimeMarkerKeepTimeSec;
- (void)setStartTimeMarkerKeepTimeSec:(double)arg1;
- (BOOL)isHighlightMaskEnabled;
- (void)setIsHighlightMaskEnabled:(BOOL)arg1;
- (double)maskRectRadius;
- (void)setMaskRectRadius:(double)arg1;
- (BOOL)isSliderBarrierEnabled;
- (void)setIsSliderBarrierEnabled:(BOOL)arg1;
- (id)sliderBarrierView;
- (void)setSliderBarrierView:(id)arg1;
- (id)sliderBarrierLabel;
- (void)setSliderBarrierLabel:(id)arg1;
- (id)sliderBarrierLabelScaledFont;
- (void)setSliderBarrierLabelScaledFont:(id)arg1;
- (id)sliderBarrierText;
- (void)setSliderBarrierText:(id)arg1;
- (void).cxx_destruct;
@end

