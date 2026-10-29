@interface WCPayLotteryView : UIView <WCPayImageMaskViewFilledDelegate, ShakeCheckerDelegate, CAAnimationDelegate>
{
    BOOL _bCanShake; // +0x8
    BOOL _bCanScratch; // +0x9
    BOOL _isShaking; // +0xa
    BOOL _isMaskViewScratchAll; // +0xb
    BOOL _isMaskViewBeginScratch; // +0xc
    BOOL _isHasClickDrawLottery; // +0xd
    BOOL _isHasExposeAwardBtn; // +0xe
    BOOL _isNewDrawLotteryType; // +0xf
    BOOL _isHasShowNewTypeMaskImageView; // +0x10
    BOOL _isAfter3s; // +0x11
    BOOL _isMaskViewAnimating; // +0x12
    unsigned int _drawLotteryType; // +0x14
    id <WCPayLotteryViewDelegate> _delegate; // +0x18
    ExposureInfo * _exposureInfo; // +0x20
    UIView * _topLineView; // +0x28
    UIView * _bottomLineView; // +0x30
    WCPayWebImageView * _backgroundImageView; // +0x38
    WCPayWebImageView * _awardsImageView; // +0x40
    UILabel * _titleLabel; // +0x48
    UILabel * _descLabel; // +0x50
    UIButton * _awardButton; // +0x58
    WCPayImageMaskView * _maskImageView; // +0x60
    UIImageView * _shakeMaskImageView; // +0x68
    NSMutableArray * _emitterLayerArray; // +0x70
    CShakeChecker * _shakeChecker; // +0x78
    long long _numberOfShake; // +0x80
    UIBezierPath * _prevPath; // +0x88
    UIImageView * _shakeAnimateImageView; // +0x90
    UILabel * _shakeLabel; // +0x98
    UITapGestureRecognizer * _tapGesture; // +0xa0
    CAAnimationGroup * _animationGroup; // +0xa8
    CGRect _maskImageViewMaskBounds; // +0xb0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupShakeOneShake;
- (void)startCheckShake;
- (void)stopCheckShake;
- (void)OnShake;
- (void)startShakeForPrice;
- (void)newShakeOperation:(unsigned int)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)oldShakeOperation;
- (void)layoutSubviews;
- (void)updateWithExposureInfo:(id)arg1;
- (void)updateBackgroundView;
- (void)updateTopAndBottomLine;
- (void)updateIconView;
- (void)updateTitleLabel;
- (void)updateDescLabel;
- (void)updateAwardButton;
- (id)genGreenButton:(id)arg1;
- (void)internalUpdateBtn;
- (void)updateAwardButtonStatus;
- (void)clickButton:(id)arg1;
- (void)updateMaskView;
- (void)handleTapGesture:(id)arg1;
- (void)updateNewTypeShakeIconView;
- (void)updateNewTypeTitle;
- (void)updateAfterAnimatieTitle;
- (void)updateNewTypeMaskViewSubview;
- (void)doNewTypleMaskImageViewFadeAnimation;
- (id)getscratchTipsImage:(CGRect)arg1;
- (void)imageMaskView:(id)arg1 tapOnPoint:(CGPoint)arg2;
- (void)imageMaskView:(id)arg1 clearPercentDidChanged:(float)arg2 startPoint:(CGPoint)arg3 endPoint:(CGPoint)arg4;
- (void)showEmitterEffectWithMinPoint:(CGPoint)arg1 maxPoint:(CGPoint)arg2;
- (void)startShowScartchAnimationWithPoint1:(CGPoint)arg1 point2:(CGPoint)arg2 birthRate:(double)arg3;
- (void)stopAllCurrentEmitterLayer;
- (id)genEmitterLayerCells:(CGPoint)arg1 endPoint:(CGPoint)arg2;
- (BOOL)isUserHasDrawLottery;
- (BOOL)bCanShake;
- (void)setBCanShake:(BOOL)arg1;
- (BOOL)bCanScratch;
- (void)setBCanScratch:(BOOL)arg1;
- (CGRect)maskImageViewMaskBounds;
- (void)setMaskImageViewMaskBounds:(CGRect)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)exposureInfo;
- (void)setExposureInfo:(id)arg1;
- (id)topLineView;
- (void)setTopLineView:(id)arg1;
- (id)bottomLineView;
- (void)setBottomLineView:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)awardsImageView;
- (void)setAwardsImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)awardButton;
- (void)setAwardButton:(id)arg1;
- (id)maskImageView;
- (void)setMaskImageView:(id)arg1;
- (id)shakeMaskImageView;
- (void)setShakeMaskImageView:(id)arg1;
- (id)emitterLayerArray;
- (void)setEmitterLayerArray:(id)arg1;
- (id)shakeChecker;
- (void)setShakeChecker:(id)arg1;
- (BOOL)isShaking;
- (void)setIsShaking:(BOOL)arg1;
- (long long)numberOfShake;
- (void)setNumberOfShake:(long long)arg1;
- (id)prevPath;
- (void)setPrevPath:(id)arg1;
- (BOOL)isMaskViewScratchAll;
- (void)setIsMaskViewScratchAll:(BOOL)arg1;
- (BOOL)isMaskViewBeginScratch;
- (void)setIsMaskViewBeginScratch:(BOOL)arg1;
- (BOOL)isHasClickDrawLottery;
- (void)setIsHasClickDrawLottery:(BOOL)arg1;
- (BOOL)isHasExposeAwardBtn;
- (void)setIsHasExposeAwardBtn:(BOOL)arg1;
- (BOOL)isNewDrawLotteryType;
- (void)setIsNewDrawLotteryType:(BOOL)arg1;
- (BOOL)isHasShowNewTypeMaskImageView;
- (void)setIsHasShowNewTypeMaskImageView:(BOOL)arg1;
- (id)shakeAnimateImageView;
- (void)setShakeAnimateImageView:(id)arg1;
- (id)shakeLabel;
- (void)setShakeLabel:(id)arg1;
- (BOOL)isAfter3s;
- (void)setIsAfter3s:(BOOL)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)animationGroup;
- (void)setAnimationGroup:(id)arg1;
- (BOOL)isMaskViewAnimating;
- (void)setIsMaskViewAnimating:(BOOL)arg1;
- (unsigned int)drawLotteryType;
- (void)setDrawLotteryType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

