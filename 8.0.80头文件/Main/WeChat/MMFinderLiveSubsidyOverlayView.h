@interface MMFinderLiveSubsidyOverlayView : UIView
{
    BOOL _isInHold; // +0x8
    BOOL _isAnimating; // +0x9
    BOOL _isBgWrapperAnimating; // +0xa
    BOOL _isWeaken; // +0xb
    id /* block */ _onCancelledBlock; // +0x10
    UIView * _bgWrapper; // +0x18
    UIView * _bgView; // +0x20
    CAGradientLayer * _gradientLayer; // +0x28
    UIView * _productImgContainer; // +0x30
    MMWebImageView * _productImgCopy; // +0x38
    UIView * _decorLayer; // +0x40
    UIImageView * _arcDecor; // +0x48
    UIImageView * _giftDecor; // +0x50
    UIImageView * _lineDecor; // +0x58
    UIView * _textGroup; // +0x60
    UILabel * _mainWord; // +0x68
    UILabel * _subWord; // +0x70
    unsigned long long _subWordEndTimeSec; // +0x78
    NSString * _subWordSuffix; // +0x80
    NSTimer * _subWordTimer; // +0x88
    double _holdDurationSec; // +0x90
    id /* block */ _contentClickBlock; // +0x98
    id /* block */ _onExitStartBlock; // +0xa0
    id /* block */ _onShrinkFinishBlock; // +0xa8
    id /* block */ _onAllFinishBlock; // +0xb0
    MMFinderLiveSubsidyExitTarget * _exitTarget; // +0xb8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (double)productImgSizeInHeight:(double)arg1;
- (void)setText:(id)arg1 toLabel:(id)arg2;
- (void)applyTextColorsForWeaken:(BOOL)arg1;
- (double)measuredHeightOf:(id)arg1 inWidth:(double)arg2 maxLines:(long long)arg3;
- (void)applyMainWordFontForWeaken:(BOOL)arg1;
- (void)layoutTextGroupInSize:(CGSize)arg1;
- (void)playWithSubsidyInfo:(id)arg1 productImgUrl:(id)arg2 exitTarget:(id)arg3 onContentClick:(id /* block */)arg4 onExitStart:(id /* block */)arg5 onShrinkFinish:(id /* block */)arg6 onAllFinish:(id /* block */)arg7;
- (void)didMoveToWindow;
- (void)cancelAll;
- (void)onTap;
- (void)startEnterAnimation;
- (BOOL)isCovering;
- (void)onEnterFinished;
- (void)onHoldFinished;
- (void)startWeakenEnterAnimation;
- (void)onWeakenEnterFinished;
- (void)onWeakenHoldFinished;
- (void)startWeakenExitAnimation;
- (void)startExitAnimation;
- (void)startBgShrinkAnimation;
- (void)onShrinkFinished;
- (void)startSubWordCountdownWithEndTime:(unsigned long long)arg1 suffix:(id)arg2;
- (void)stopSubWordCountdown;
- (BOOL)refreshSubWordCountdown;
- (id)formatTimeSec:(int)arg1;
- (void)dealloc;
- (id /* block */)onCancelledBlock;
- (void)setOnCancelledBlock:(id /* block */)arg1;
- (id)bgWrapper;
- (void)setBgWrapper:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)productImgContainer;
- (void)setProductImgContainer:(id)arg1;
- (id)productImgCopy;
- (void)setProductImgCopy:(id)arg1;
- (id)decorLayer;
- (void)setDecorLayer:(id)arg1;
- (id)arcDecor;
- (void)setArcDecor:(id)arg1;
- (id)giftDecor;
- (void)setGiftDecor:(id)arg1;
- (id)lineDecor;
- (void)setLineDecor:(id)arg1;
- (id)textGroup;
- (void)setTextGroup:(id)arg1;
- (id)mainWord;
- (void)setMainWord:(id)arg1;
- (id)subWord;
- (void)setSubWord:(id)arg1;
- (BOOL)isInHold;
- (void)setIsInHold:(BOOL)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (BOOL)isBgWrapperAnimating;
- (void)setIsBgWrapperAnimating:(BOOL)arg1;
- (BOOL)isWeaken;
- (void)setIsWeaken:(BOOL)arg1;
- (unsigned long long)subWordEndTimeSec;
- (void)setSubWordEndTimeSec:(unsigned long long)arg1;
- (id)subWordSuffix;
- (void)setSubWordSuffix:(id)arg1;
- (id)subWordTimer;
- (void)setSubWordTimer:(id)arg1;
- (double)holdDurationSec;
- (void)setHoldDurationSec:(double)arg1;
- (id /* block */)contentClickBlock;
- (void)setContentClickBlock:(id /* block */)arg1;
- (id /* block */)onExitStartBlock;
- (void)setOnExitStartBlock:(id /* block */)arg1;
- (id /* block */)onShrinkFinishBlock;
- (void)setOnShrinkFinishBlock:(id /* block */)arg1;
- (id /* block */)onAllFinishBlock;
- (void)setOnAllFinishBlock:(id /* block */)arg1;
- (id)exitTarget;
- (void)setExitTarget:(id)arg1;
- (void).cxx_destruct;
@end
