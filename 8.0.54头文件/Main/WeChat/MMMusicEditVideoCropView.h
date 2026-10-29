@interface MMMusicEditVideoCropView : MMUIView <SightLocalVideoImageSliderDelegate>
{
    BOOL _needToShowStartLine; // +0x8
    BOOL _ignoreShock; // +0x9
    BOOL _hasRemoveSliderCollectionViewKeyPathObserver; // +0xa
    id <MMMusicEditVideoCropViewDelegate> _delegate; // +0x10
    MMUIView * _containerView; // +0x18
    SightLocalVideoImageSlider * _slider; // +0x20
    UILabel * _cropInfoLabel; // +0x28
    MMUIButton * _cancelBtn; // +0x30
    MMUIButton * _doneBtn; // +0x38
    AVAsset * _avAsset; // +0x40
    long long _currentEditAssetIndex; // +0x48
    double _originalStartTime; // +0x50
    double _originalEndTime; // +0x58
    double _lastStartTime; // +0x60
    double _lastEndTime; // +0x68
    double _videoLength; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setup;
- (void)setupSubViews;
- (void)layoutSubviews;
- (void)updateAsset:(id)arg1 videoLength:(double)arg2 assetIndex:(long long)arg3 duration:(double)arg4 conset:(CGPoint)arg5 startTime:(double)arg6 endTime:(double)arg7 needToShowStartLine:(BOOL)arg8;
- (void)setDefault:(double)arg1 duration:(double)arg2 startTime:(double)arg3 endTime:(double)arg4 defaultImage:(id)arg5 needToShowStartLine:(BOOL)arg6;
- (void)updateAsset:(id)arg1 videoLength:(double)arg2 videoComposition:(id)arg3 assetIndex:(long long)arg4 duration:(double)arg5 conset:(CGPoint)arg6 startTime:(double)arg7 endTime:(double)arg8 needToShowStartLine:(BOOL)arg9;
- (void)startPlayAtTime:(double)arg1;
- (void)updateSliderCollectionOffsetAndPlayFlag;
- (void)updateCropInfoTitle:(double)arg1 cropLength:(double)arg2;
- (id)cropInfoFormatTimeStr:(double)arg1;
- (id)createAttrString:(id)arg1 font:(id)arg2 color:(id)arg3;
- (void)replaceStr:(id)arg1 cccurrences:(id)arg2 withString:(id)arg3;
- (void)onClickCloseBtn:(id)arg1;
- (void)onClickDoneBtn:(id)arg1;
- (BOOL)imageSliderCanMoveStartAndEndFlag:(id)arg1;
- (void)imageSlider:(id)arg1 didStopSlidingAtTime:(float)arg2 isStartFlag:(BOOL)arg3;
- (void)imageSlider:(id)arg1 startFlagDidMoveToTime:(float)arg2;
- (void)imageSlider:(id)arg1 endFlagDidMoveToTime:(float)arg2;
- (void)onOutputTimeChanged:(id)arg1;
- (void)tryToPlayShock;
- (BOOL)isTimeReachBounds:(double)arg1 scrollLeft:(BOOL)arg2 leftBounds:(double)arg3 rightBounds:(double)arg4;
- (void)updateLastTimeRange;
- (void)playShock;
- (void)observeSliderCollectionViewContentSizeChanged;
- (void)removeObserveSliderCollectionViewContentSizeChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)slider;
- (void)setSlider:(id)arg1;
- (id)cropInfoLabel;
- (void)setCropInfoLabel:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)doneBtn;
- (void)setDoneBtn:(id)arg1;
- (id)avAsset;
- (void)setAvAsset:(id)arg1;
- (long long)currentEditAssetIndex;
- (void)setCurrentEditAssetIndex:(long long)arg1;
- (double)originalStartTime;
- (void)setOriginalStartTime:(double)arg1;
- (double)originalEndTime;
- (void)setOriginalEndTime:(double)arg1;
- (BOOL)needToShowStartLine;
- (void)setNeedToShowStartLine:(BOOL)arg1;
- (double)lastStartTime;
- (void)setLastStartTime:(double)arg1;
- (double)lastEndTime;
- (void)setLastEndTime:(double)arg1;
- (BOOL)ignoreShock;
- (void)setIgnoreShock:(BOOL)arg1;
- (double)videoLength;
- (void)setVideoLength:(double)arg1;
- (BOOL)hasRemoveSliderCollectionViewKeyPathObserver;
- (void)setHasRemoveSliderCollectionViewKeyPathObserver:(BOOL)arg1;
- (void).cxx_destruct;
@end

