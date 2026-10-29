@interface WCFinderHotSpotBannerView : WCFinderJumpInfoView <WCFinderLottieImgBackgroundViewDelegate, WCActionSheetDelegate, WCFinderHotBigBubbleViewDelegate, WCFinderJumpInfoIconViewDelegate>
{
    BOOL _isCameraTemplate; // +0x8
    unsigned long long _operatingType; // +0x10
    WCFinderJumpInfo * _hotSpotJumpInfo; // +0x18
    NSString * _livingTitle; // +0x20
    NSString * _livingSubTitle; // +0x28
    WCFinderContact * _originalContact; // +0x30
    double _maxTextAreaWidth; // +0x38
    double _maxWidth; // +0x40
    WCFinderJumpInfoIconView * _iconView; // +0x48
    RichTextView * _textView; // +0x50
    UIImageView * _arrowImageView; // +0x58
    UILabel * _adLabel; // +0x60
    UIView * _redDotView; // +0x68
    RichTextView * _subTitleTextView; // +0x70
    WCFinderLottieImgBackgroundView * _olympicView; // +0x78
    WCFinderHotBigBubbleView * _hotBigBubbleView; // +0x80
}
+ (double)getHotSpotHeight:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 hotSpotJumpInfo:(id)arg2;
- (id)initWithIsLivingStateAndFrame:(CGRect)arg1 title:(id)arg2 subTitle:(id)arg3 maxTextAreaWidth:(double)arg4;
- (id)initWithIsLivingStateAndFrameForProductShare:(CGRect)arg1;
- (id)_initWithFrame:(CGRect)arg1 operatingType:(unsigned long long)arg2;
- (void)dealloc;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)updateLayoutView;
- (void)addShape:(id)arg1;
- (BOOL)hotJumpInfoDisplayRightStyle;
- (void)_updateOlympicsViewWithTitle:(id)arg1 subTitle:(id)arg2;
- (void)_updateHotSpotWithIconUrl:(id)arg1 iconType:(int)arg2 pagIconUrl:(id)arg3 defaultImage:(id)arg4 tips:(id)arg5 style:(long long)arg6 maxTextWidth:(double)arg7 businessType:(int)arg8;
- (BOOL)showArrowRedDot;
- (void)_updateLivingTip;
- (void)setupRedDotView:(BOOL)arg1 layoutArrowView:(double *)arg2;
- (id)olympicView;
- (id)hotBigBubbleView;
- (id)iconView;
- (id)textView;
- (id)subTitleTextView;
- (id)arrowImageView;
- (id)adLabel;
- (void)onClickAction;
- (void)onClickEnterLivingAction;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (id)jumpInfo;
- (void)onChangeSuperViewWidth:(double)arg1;
- (void)onBigBubbleChangeSuperViewWidth:(double)arg1;
- (BOOL)videoPauseState;
- (id)videoTid;
- (unsigned long long)operatingType;
- (void)setOperatingType:(unsigned long long)arg1;
- (id)hotSpotJumpInfo;
- (void)setHotSpotJumpInfo:(id)arg1;
- (id)livingTitle;
- (void)setLivingTitle:(id)arg1;
- (id)livingSubTitle;
- (void)setLivingSubTitle:(id)arg1;
- (BOOL)isCameraTemplate;
- (id)originalContact;
- (void)setOriginalContact:(id)arg1;
- (double)maxTextAreaWidth;
- (void)setMaxTextAreaWidth:(double)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void)setIconView:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setAdLabel:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (void)setSubTitleTextView:(id)arg1;
- (void)setOlympicView:(id)arg1;
- (void)setHotBigBubbleView:(id)arg1;
- (void).cxx_destruct;
@end
