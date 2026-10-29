@interface MMFinderLiveInstantDiscountWidgetView : UIView
{
    BOOL _isAnchorOrAssistant; // +0x8
    BOOL _isBigStyle; // +0x9
    BOOL _shouldShowText; // +0xa
    BOOL _isStaticTextStyle; // +0xb
    MMFinderLiveInstantDiscountWidgetResource * _resource; // +0x10
    id <MMFinderLiveInstantDiscountWidgetDelegate> _delegate; // +0x18
    NSObject * _isPlayingTag; // +0x20
    MoneyOffTagInfo * _currentInfo; // +0x28
    MoneyOffTagInfo * _newestInfo; // +0x30
    UIView * _backgroundView; // +0x38
    UIView * _pressShadowView; // +0x40
    UILabel * _whiteNormalLabel; // +0x48
    UILabel * _colorfulNormalLabel; // +0x50
    MMCountDownLabel * _whiteCountDownLabel; // +0x58
    MMCountDownLabel * _colorfulCountDownLabel; // +0x60
    UIView * _labelContainerView; // +0x68
    PAGView * _pagView; // +0x70
}
- (id)initWithResource:(id)arg1 info:(id)arg2;
- (void)setIsBigStyle:(BOOL)arg1;
- (void)setTextNormal;
- (void)setTextDone;
- (void)setTextUsed;
- (void)setIsStaticTextStyle:(BOOL)arg1;
- (void)setShouldShowText:(BOOL)arg1;
- (void)updateLabelsAlpha;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)enter;
- (void)playPAG:(id)arg1;
- (void)toNormalState;
- (void)onTapAction;
- (void)startCountDown;
- (void)playAddAnimation:(unsigned long long)arg1;
- (void)toSuccess;
- (void)toFail;
- (void)blockWithRestAnimationDuration:(double)arg1;
- (void)checkUpdate;
- (CGSize)normalSize;
- (CGSize)enterSize;
- (double)leadForEnterAnimation;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)initContents;
- (void)updateWithInfo:(id)arg1;
- (id)resource;
- (void)setResource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isAnchorOrAssistant;
- (void)setIsAnchorOrAssistant:(BOOL)arg1;
- (BOOL)isBigStyle;
- (id)isPlayingTag;
- (void)setIsPlayingTag:(id)arg1;
- (id)currentInfo;
- (void)setCurrentInfo:(id)arg1;
- (id)newestInfo;
- (void)setNewestInfo:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)pressShadowView;
- (void)setPressShadowView:(id)arg1;
- (id)whiteNormalLabel;
- (void)setWhiteNormalLabel:(id)arg1;
- (id)colorfulNormalLabel;
- (void)setColorfulNormalLabel:(id)arg1;
- (id)whiteCountDownLabel;
- (void)setWhiteCountDownLabel:(id)arg1;
- (id)colorfulCountDownLabel;
- (void)setColorfulCountDownLabel:(id)arg1;
- (id)labelContainerView;
- (void)setLabelContainerView:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (BOOL)shouldShowText;
- (BOOL)isStaticTextStyle;
- (void).cxx_destruct;
@end
