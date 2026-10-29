@interface WCAdContinuousLikeButtonView : MMUIButton
{
    BOOL _forTransformAnimation; // +0x8
    WCAdContinuousLikeButtonInfo * _buttonInfo; // +0x10
    WCDataItem * _dataItem; // +0x18
    unsigned long long _contentItemScene; // +0x20
    double _maxViewWidth; // +0x28
    double _viewHeight; // +0x30
    MMUIView * _bgView; // +0x38
    MMUIView * _bgViewShadow; // +0x40
    MMUILabel * _titleView; // +0x48
    WCAdURLImageView * _iconView; // +0x50
    MMUIView * _adMaskView; // +0x58
}
- (id)initWithContinuousLikeButtonInfo:(id)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 maxViewWidth:(double)arg4 viewHeight:(double)arg5 forTransformAnimation:(BOOL)arg6;
- (void)dealloc;
- (void)initView;
- (void)startBreathingAnimation;
- (void)stopBreathingAnimation;
- (id)socialLikeLogic;
- (void)addButtonEvent;
- (void)onButtonClick:(id)arg1;
- (void)onButtonTouchDown:(id)arg1;
- (void)onButtonTouchUp:(id)arg1;
- (void)resetButtonState;
- (id)fetchContinuousLikeReportInfo;
- (id)buttonInfo;
- (void)setButtonInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (double)maxViewWidth;
- (void)setMaxViewWidth:(double)arg1;
- (double)viewHeight;
- (void)setViewHeight:(double)arg1;
- (BOOL)forTransformAnimation;
- (void)setForTransformAnimation:(BOOL)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)bgViewShadow;
- (void)setBgViewShadow:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)adMaskView;
- (void)setAdMaskView:(id)arg1;
- (void).cxx_destruct;
@end
