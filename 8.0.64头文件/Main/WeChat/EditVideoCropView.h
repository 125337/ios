@interface EditVideoCropView : MMUIView <SightLocalVideoImageSliderDelegate, EditVideoLogicItemExt, WCEditVideoViewControllerExt>
{
    AVAsset * _avAsset; // +0x8
    MMUIButton * _cancelBtn; // +0x10
    MMUIButton * _doneBtn; // +0x18
    SightLocalVideoImageSlider * _slider; // +0x20
    double _startTime; // +0x28
    double _endTime; // +0x30
    BOOL _sliderInited; // +0x38
    BOOL _isSystemCrop; // +0x39
    BOOL _useStandardBtn; // +0x3a
    BOOL _showCropVideoTotalTimeLabel; // +0x3b
    BOOL _ignoreShock; // +0x3c
    BOOL _allowTapicOnExceedMaxTimeRange; // +0x3d
    float _minDuration; // +0x40
    float _maxDuration; // +0x44
    id <EditVideoCropViewDelegate> _m_delegate; // +0x48
    double _outputTime; // +0x50
    unsigned long long _entranceType; // +0x58
    NSString * _customDoneBtnText; // +0x60
    double _lastStartTime; // +0x68
    double _lastEndTime; // +0x70
    double _videoLength; // +0x78
    UIColor * _sliderHighlightMaskColor; // +0x80
    MMUILabel * _cropVideoDurationLable; // +0x88
    CGPoint _sliderContentOffset; // +0x90
    struct _timeRange; // +0xa0
}
- (id)initWithAsset:(id)arg1;
- (void)setupSubViews;
- (void)updateTimeFlag;
- (void)setHighLightMaskShadowColor:(id)arg1;
- (void)setCropVideoDurationLableShow:(BOOL)arg1;
- (void)initView;
- (id)formatStrOfTime:(double)arg1;
- (id)cropVideoDurationLable;
- (void)layoutSubviews;
- (void)onClickCancel;
- (void)onClickDone;
- (void)updateLastTimeRange;
- (void)tryToPlayShock;
- (void)playShock;
- (void)imageSlider:(id)arg1 playFlagDidMoveToTime:(float)arg2;
- (void)imageSlider:(id)arg1 didStopSlidingAtTime:(float)arg2 isStartFlag:(BOOL)arg3;
- (void)onOutputTimeChanged:(id)arg1;
- (void)trackingWithTouch:(BOOL)arg1;
- (void)onRestartVideoPlayAt:(double)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (double)outputTime;
- (void)setOutputTime:(double)arg1;
- (float)minDuration;
- (void)setMinDuration:(float)arg1;
- (float)maxDuration;
- (void)setMaxDuration:(float)arg1;
- (BOOL)isSystemCrop;
- (void)setIsSystemCrop:(BOOL)arg1;
- (unsigned long long)entranceType;
- (void)setEntranceType:(unsigned long long)arg1;
- (CGPoint)sliderContentOffset;
- (void)setSliderContentOffset:(CGPoint)arg1;
- (id)customDoneBtnText;
- (void)setCustomDoneBtnText:(id)arg1;
- (BOOL)useStandardBtn;
- (void)setUseStandardBtn:(BOOL)arg1;
- (BOOL)showCropVideoTotalTimeLabel;
- (void)setShowCropVideoTotalTimeLabel:(BOOL)arg1;
- (BOOL)ignoreShock;
- (void)setIgnoreShock:(BOOL)arg1;
- (double)lastStartTime;
- (void)setLastStartTime:(double)arg1;
- (double)lastEndTime;
- (void)setLastEndTime:(double)arg1;
- (double)videoLength;
- (void)setVideoLength:(double)arg1;
- (id)sliderHighlightMaskColor;
- (void)setSliderHighlightMaskColor:(id)arg1;
- (BOOL)allowTapicOnExceedMaxTimeRange;
- (void)setAllowTapicOnExceedMaxTimeRange:(BOOL)arg1;
- (void)setCropVideoDurationLable:(id)arg1;
- (void).cxx_destruct;
@end
