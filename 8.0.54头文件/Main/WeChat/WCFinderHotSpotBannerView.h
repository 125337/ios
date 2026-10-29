@interface WCFinderHotSpotBannerView : UIView <WCFinderLottieImgBackgroundViewDelegate, WCActionSheetDelegate, WCFinderHotBigBubbleViewDelegate, WCFinderJumpInfoIconViewDelegate, WCFinderJumpInfoViewProtocol>
{
    BOOL _isCameraTemplate; // +0x8
    int _showPosition; // +0xc
    id <WCFinderHotSpotBannerViewDelegate> _delegate; // +0x10
    unsigned long long _operatingType; // +0x18
    WCFinderJumpInfo * _hotSpotJumpInfo; // +0x20
    NSString * _livingTitle; // +0x28
    NSString * _livingSubTitle; // +0x30
    WCFinderContact * _originalContact; // +0x38
    FinderJumpInfo_Style * _style; // +0x40
    MMTimer * _timer; // +0x48
    double _maxTextAreaWidth; // +0x50
    double _maxWidth; // +0x58
    WCFinderJumpInfoIconView * _iconView; // +0x60
    RichTextView * _textView; // +0x68
    UIImageView * _arrowImageView; // +0x70
    UILabel * _adLabel; // +0x78
    UIView * _redDotView; // +0x80
    RichTextView * _subTitleTextView; // +0x88
    WCFinderLottieImgBackgroundView * _olympicView; // +0x90
    WCFinderHotBigBubbleView * _hotBigBubbleView; // +0x98
}
+ (double)getHotSpotHeight:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 hotSpotJumpInfo:(id)arg2;
- (id)initWithWithIsLivingStateAndFrame:(CGRect)arg1 title:(id)arg2 subTitle:(id)arg3 maxTextAreaWidth:(double)arg4;
- (id)initWithWithIsLivingStateAndFrameForProductShare:(CGRect)arg1;
- (id)initTemplateWithFrame:(CGRect)arg1 isCameraTemplate:(BOOL)arg2;
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
- (void)_updateVideoTemplateTip;
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
- (void)onClickClipVideoTemplateAction;
- (void)notifyToShow;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)startExposeAction;
- (void)endExposeAction;
- (id)jumpInfo;
- (int)showPosition;
- (void)onChangeSuperViewWidth:(double)arg1;
- (void)onBigBubbleChangeSuperViewWidth:(double)arg1;
- (BOOL)videoPauseState;
- (id)videoTid;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)operatingType;
- (void)setOperatingType:(unsigned long long)arg1;
- (id)hotSpotJumpInfo;
- (void)setHotSpotJumpInfo:(id)arg1;
- (id)livingTitle;
- (void)setLivingTitle:(id)arg1;
- (id)livingSubTitle;
- (void)setLivingSubTitle:(id)arg1;
- (BOOL)isCameraTemplate;
- (void)setIsCameraTemplate:(BOOL)arg1;
- (id)originalContact;
- (void)setOriginalContact:(id)arg1;
- (void)setShowPosition:(int)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
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

