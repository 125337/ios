@interface WCFinderEditVideoCropView : MMUIView <SightLocalVideoImageSliderDelegate>
{
    BOOL _ignoreShock; // +0x8
    id <WCFinderEditVideoCropViewDelegate> _delegate; // +0x10
    UIButton * _closeBtn; // +0x18
    UIButton * _doneBtn; // +0x20
    UILabel * _titleLabel; // +0x28
    MMUIView * _containerView; // +0x30
    SightLocalVideoImageSlider * _slider; // +0x38
    UILabel * _cropInfoLabel; // +0x40
    AVAsset * _avAsset; // +0x48
    long long _currentEditAssetIndex; // +0x50
    double _originalStartTime; // +0x58
    double _originalEndTime; // +0x60
    double _lastStartTime; // +0x68
    double _lastEndTime; // +0x70
    double _videoLegnth; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setupSubViews;
- (void)layoutSubviews;
- (void)updateAsset:(id)arg1 assetIndex:(long long)arg2 duration:(double)arg3 conset:(CGPoint)arg4 startTime:(double)arg5 endTime:(double)arg6;
- (void)updateAsset:(id)arg1 videoComposition:(id)arg2 assetIndex:(long long)arg3 duration:(double)arg4 conset:(CGPoint)arg5 startTime:(double)arg6 endTime:(double)arg7;
- (void)startPlayAtTime:(double)arg1;
- (id)cropInfoLabel;
- (void)tryShowCropInfoLabel:(double)arg1;
- (void)updateCropInfoTitle:(double)arg1;
- (id)cropInfoFormatTimeStr:(double)arg1;
- (id)createAttrString:(id)arg1 font:(id)arg2 color:(id)arg3;
- (void)replaceStr:(id)arg1 cccurrences:(id)arg2 withString:(id)arg3;
- (void)onClickCloseBtn:(id)arg1;
- (void)onClickDoneBtn:(id)arg1;
- (void)imageSlider:(id)arg1 didStopSlidingAtTime:(float)arg2 isStartFlag:(BOOL)arg3;
- (void)imageSlider:(id)arg1 startFlagDidMoveToTime:(float)arg2;
- (void)imageSlider:(id)arg1 endFlagDidMoveToTime:(float)arg2;
- (void)onOutputTimeChanged:(id)arg1;
- (void)tryToPlayShock;
- (BOOL)isTimeReachBounds:(double)arg1 scrollLeft:(BOOL)arg2 leftBounds:(double)arg3 rightBounds:(double)arg4;
- (void)updateLastTimeRange;
- (void)playShock;
- (void)onRestartVideoPlayAt:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)doneBtn;
- (void)setDoneBtn:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)slider;
- (void)setSlider:(id)arg1;
- (void)setCropInfoLabel:(id)arg1;
- (id)avAsset;
- (void)setAvAsset:(id)arg1;
- (long long)currentEditAssetIndex;
- (void)setCurrentEditAssetIndex:(long long)arg1;
- (double)originalStartTime;
- (void)setOriginalStartTime:(double)arg1;
- (double)originalEndTime;
- (void)setOriginalEndTime:(double)arg1;
- (double)lastStartTime;
- (void)setLastStartTime:(double)arg1;
- (double)lastEndTime;
- (void)setLastEndTime:(double)arg1;
- (BOOL)ignoreShock;
- (void)setIgnoreShock:(BOOL)arg1;
- (double)videoLegnth;
- (void)setVideoLegnth:(double)arg1;
- (void).cxx_destruct;
@end

