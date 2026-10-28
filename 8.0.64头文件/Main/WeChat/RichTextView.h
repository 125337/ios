@interface RichTextView : MMCPLabel <TextLayoutDelegate, WCForceTouchPreviewProtocol, WCForceTouchTriggerLongPressProtocol, IWCRichTextLabelProtocol, WCFlexLayoutViewProtocol, BaseParserStyleDelegate, ImageStyleDelegate, EmoticonThumbStyleDelegate, MMRichTextCoverViewDelegate>
{
    NSMutableArray * _arrParserObjects; // +0x8
    BOOL _bWholeField; // +0x10
    BOOL _bHightlighted; // +0x11
    BOOL _bEnableBGColor; // +0x12
    UIFont * _oFont; // +0x18
    double _fWidth; // +0x20
    UIColor * _oTextColor; // +0x28
    UIColor * _oTextHLColor; // +0x30
    NSMutableArray * _arrStyles; // +0x38
    NSString * _nsContent; // +0x40
    CGRect _touchedRect; // +0x48
    BOOL _bSourceUrlForLP; // +0x68
    unsigned long long _parserType; // +0x70
    id <RichTextLayoutDelegate> _layoutDelegate; // +0x78
    id <ILinkEventExt> _linkDelegate; // +0x80
    BOOL _bDismissHightLightOutside; // +0x88
    BOOL _bHandleLongPress; // +0x89
    BOOL _bHandleTextClick; // +0x8a
    BOOL _bTouchesPassOn; // +0x8b
    TextStyleAttributeObj * _textAttributeObj; // +0x90
    UIImage * _oImage; // +0x98
    NSMutableArray * _voiceOverElements; // +0xa0
    NSRecursiveLock * _lock; // +0xa8
    BOOL _lineBreakByClipping; // +0xb0
    BOOL _bIsLongPressHandled; // +0xb1
    BOOL _bDismissHighlightLinkStyleBeforeNewTouch; // +0xb2
    BOOL _bTouchBeginOnLink; // +0xb3
    BOOL _bIsAccessiblityContainer; // +0xb4
    BOOL _bDisableAccessiblityLinkClick; // +0xb5
    BOOL _accessibilityAddLinkPrefix; // +0xb6
    BOOL _shouldFixYoga; // +0xb7
    BOOL _isSupportImageClick; // +0xb8
    unsigned int _linkTextVisiableLength; // +0xbc
    UIColor * _oNormalBGColor; // +0xc0
    UIColor * _oHighlightedBGColor; // +0xc8
    id <RichTextEmoticonExtension> _emoticonExt; // +0xd0
    double _lineSpacing; // +0xd8
    double _lineNumber; // +0xe0
    double _originX; // +0xe8
    UIColor * _linkColor; // +0xf0
    UIColor * _linkHLColor; // +0xf8
    long long _richTextAlignment; // +0x100
    double _touchEndDelayTime; // +0x108
    long long _inlineVerticalAlign; // +0x110
    NSString * _truncatedTrailingLinkText; // +0x118
    NSString * _truncatedTrailingLinkUrl; // +0x120
    UIColor * _truncatedTrailingLinkColor; // +0x128
    NSString * _truncatedTrailingContent; // +0x130
    MMRichTextCoverView * _richTextCoverView; // +0x138
    double _rightIconPadding; // +0x140
    UIColor * _linkShadowColor; // +0x148
    UITouch * _touch; // +0x150
    NSArray * _truncatedTrailingStyles; // +0x158
    double _truncatedTrailingStyleWidth; // +0x160
    _NSRange _textHighlightRange; // +0x168
    CGSize _linkShadowOffset; // +0x178
}
+ (id)pureStringForContent:(id)arg1;
+ (void)initialize;
+ (double)getHeightForContent:(id)arg1 font:(id)arg2 width:(double)arg3 parserType:(unsigned long long)arg4;
+ (CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 parserType:(unsigned long long)arg4 delegate:(id)arg5;
+ (CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 lineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 delegate:(id)arg7 rightIconPadding:(double)arg8;
+ (CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 lineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 delegate:(id)arg7;
+ (CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 parserType:(unsigned long long)arg4 delegate:(id)arg5 outArrStyles:(id *)arg6;
+ (CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 lineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 delegate:(id)arg7 outArrStyles:(id *)arg8 rightIconPadding:(double)arg9;
+ (CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 lineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 delegate:(id)arg7 outArrStyles:(id *)arg8 rightIconPadding:(double)arg9 originX:(double)arg10;
+ (CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 lineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 delegate:(id)arg7 outArrStyles:(id *)arg8 rightIconPadding:(double)arg9 originX:(double)arg10 textAttribute:(id)arg11;
+ (CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 lineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 delegate:(id)arg7 outArrStyles:(id *)arg8 rightIconPadding:(double)arg9 originX:(double)arg10 textAttribute:(id)arg11 expandAndCollapseObj:(id)arg12;
+ (CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 lineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 delegate:(id)arg7 outArrStyles:(id *)arg8 rightIconPadding:(double)arg9 originX:(double)arg10 textAttribute:(id)arg11 expandAndCollapseObj:(id)arg12 imageLayout:(id)arg13;
+ (CGSize)sizeForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 lineNumber:(unsigned long long)arg5 parserType:(unsigned long long)arg6 delegate:(id)arg7 outArrStyles:(id *)arg8;
+ (id)getStyleString:(id)arg1 font:(id)arg2 width:(double)arg3 parserType:(unsigned long long)arg4 lineSpacing:(double)arg5 delegate:(id)arg6;
+ (id)getParserString:(id)arg1 parserType:(unsigned long long)arg2;
+ (double)heightForPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4 font:(id)arg5 width:(double)arg6 parserType:(unsigned long long)arg7 delegate:(id)arg8;
+ (double)heightForPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4 font:(id)arg5 width:(double)arg6 parserType:(unsigned long long)arg7 delegate:(id)arg8 outArrStyles:(id *)arg9;
+ (CGSize)sizeForPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4 font:(id)arg5 width:(double)arg6 parserType:(unsigned long long)arg7 delegate:(id)arg8 outArrStyles:(id *)arg9;
+ (CGSize)sizeForPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4 font:(id)arg5 width:(double)arg6 lineSpacing:(double)arg7 lineNumber:(unsigned long long)arg8 parserType:(unsigned long long)arg9 delegate:(id)arg10 outArrStyles:(id *)arg11;
+ (CGSize)sizeForPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4 font:(id)arg5 width:(double)arg6 lineSpacing:(double)arg7 lineNumber:(unsigned long long)arg8 linkTextVisiableLength:(unsigned int)arg9 parserType:(unsigned long long)arg10 delegate:(id)arg11 outArrStyles:(id *)arg12;
+ (CGSize)calculateSizeWithConfig:(id)arg1 outArrStyles:(id *)arg2;
+ (id)createAgreementWithContent:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;
+ (Class)layerClass;
+ (long long)getLinesWithArrStyles:(id)arg1;
+ (BOOL)isContentTruncatedWithArrStyles:(id)arg1 content:(id)arg2;
+ (id)getAccessibilityLinks:(id)arg1;
+ (UIEdgeInsets)expandHitAreaInsetsForRect:(CGRect)arg1;
+ (CGRect)expandHitAreaForRect:(CGRect)arg1;
+ (id)targetLinkStyleFromStyles:(id)arg1 withPoint:(CGPoint)arg2;
+ (id)getFirstLinkStyleWithTouchedLinkStyle:(id)arg1 styles:(id)arg2;
+ (_NSRange)getLinkRangeWithTargetLinkStyle:(id)arg1 styles:(id)arg2;
- (void)setParserType:(unsigned long long)arg1;
- (void)correctLineSpacing;
- (double)lineSpacing;
- (id)genRichTextConfig;
- (void)baseInit;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newAsyncDisplayTask;
- (void)willMoveToWindow:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setArrStyles:(id)arg1 withContent:(id)arg2;
- (void)asyncLoadImageIfNeededForImageStyle:(id)arg1;
- (void)asyncLoadEmoticonThumb:(id)arg1;
- (void)resetFrameForMinHeight:(double)arg1;
- (void)updateFrame:(double)arg1 height:(double)arg2;
- (CGRect)frameOfFirstLine;
- (CGRect)frameOfLastLine;
- (double)maxYOfLine:(unsigned long long)arg1;
- (long long)getCurrentLines;
- (BOOL)hasLinks;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setTextHighlightRange:(_NSRange)arg1;
- (void)setBHandleTextClick:(BOOL)arg1;
- (CGSize)onFlexLayoutMeasureSize:(CGSize)arg1;
- (void)updateConstraintsWithWidth:(double)arg1;
- (void)updateConstraintsWithWidth:(double)arg1 content:(id)arg2;
- (id)createParser:(unsigned long long)arg1;
- (id)getContent;
- (BOOL)isContentTruncated;
- (void)setContent:(id)arg1;
- (double)originXForLineAtHeight:(double)arg1;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 lineHeight:(double)arg3;
- (BOOL)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2;
- (unsigned int)perferedLinkTextVisiableLength;
- (id)getParserByPaserType:(unsigned long long)arg1;
- (void)setTextParserAtributes:(id)arg1;
- (id)textToCopy;
- (id)getPatternStringFromContent:(id)arg1 patternGenerator:(id)arg2;
- (id)getStyleString:(id)arg1;
- (id)getParserString:(id)arg1;
- (BOOL)getStylesForContent:(id)arg1 parserString:(id)arg2 parserPosition:(_NSParserPosition)arg3;
- (BOOL)setContent:(id)arg1 TargetParserString:(id)arg2;
- (BOOL)setPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4;
- (void)calculateAndUpdateFrame;
- (void)dismissHighLight;
- (void)setHighLightLinkStyleToNormal;
- (void)adjustStylesForAlignment:(double)arg1;
- (void)DrawRect:(CGRect)arg1 userInteractionEnabled:(BOOL)arg2;
- (void)updateColorForLinkParser:(id)arg1;
- (BOOL)playAnimateEmojiWithTimeOffset:(double)arg1 handler:(id /* block */)arg2 endHandler:(id /* block */)arg3;
- (void)stopPlayAnimateEmoji;
- (CGRect)frameForEmojiName:(id)arg1 range:(_NSRange)arg2;
- (id)getParsedStyles;
- (void)setTruncatedTrailingContent:(id)arg1;
- (id)getCurClippingStr;
- (void)updateTruncatedContent;
- (void)updateTruncatedTrailingStyle;
- (void)appendTextStyleToEnd:(id)arg1 linkUrl:(id)arg2;
- (void)appendStyleToEnd:(id)arg1;
- (long long)lineIndexForStyle:(id)arg1;
- (void)clickOnLinkEvent:(id)arg1;
- (void)clickOnWeAppLinkEvent:(id)arg1;
- (void)clickOnPhoneEvent:(id)arg1;
- (void)clickOnAddressEvent:(id)arg1;
- (void)clickOnSearchWeAppBoxEvent:(id)arg1;
- (void)clickOnBankCardNumber:(id)arg1;
- (void)clickOnWeAppMPShortLink:(id)arg1;
- (void)clickOnSearchTopic:(id)arg1;
- (void)longPressOnLinkEvent:(id)arg1;
- (void)longPressOnBankCardNumberEvent:(id)arg1;
- (void)longPressOnWeAppMPShortLinkEvent:(id)arg1;
- (void)longPressOnSearchTopicEvent:(id)arg1;
- (void)longPressOnWeappLinkEvent:(id)arg1;
- (void)longPressOnPhoneEvent:(id)arg1;
- (void)longPressOnAddressEvent:(id)arg1;
- (void)clickOnTextEvent:(id)arg1;
- (void)longPressOnTextEvent:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)triggerLongPressFor3DTouchAtLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)cancelDelayedTouches;
- (void)delayedTouchesEnded:(id)arg1;
- (void)handleLinkStyle:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)onTouchEventFinish;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)getAccessibilityLinks;
- (id)getAccessibilityLinkElements:(id)arg1;
- (id)displayedText;
- (void)updateAccessibilityLabel;
- (void)setBIsAccessiblityContainer:(BOOL)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (void)imageDelayedTouchesEnded:(id)arg1;
- (BOOL)canPeek;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (CGRect)previewingSourceRectForLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)getPreviewLinkForLocation:(CGPoint)arg1 inView:(id)arg2;
- (CGRect)getPreviewLinkFrameForLocation:(CGPoint)arg1 inView:(id)arg2;
- (void)addStylesParserByPatternString:(id)arg1;
- (void)onAddLoadingAnimationView:(id)arg1;
- (void)onImageStyleUpdateContent;
- (void)onImageStyle:(id)arg1 didFinishLoadWebImage:(id)arg2;
- (id)loadingConfigForImageStyle:(id)arg1 isRetry:(BOOL)arg2;
- (id)emojiInfoForMd5:(id)arg1;
- (void)onEmoticonThumbLoadFailedForMd5:(id)arg1;
- (id)getTextString;
- (long long)getTouchIndexWithTouchPoint:(CGPoint)arg1 FrontCursor:(BOOL)arg2;
- (_NSRange)getTouchRangeWithTouchPoint:(CGPoint)arg1;
- (id)getSelectRectsWithRange:(_NSRange)arg1;
- (id)getStringWithRange:(_NSRange)arg1;
- (BOOL)isEmojiLocation:(unsigned long long)arg1 bStart:(BOOL)arg2;
- (float)getLineHeight;
- (id)delegateView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)forceDisplayInSync;
- (void)setOTextColor:(id)arg1;
- (void)setOTextHLColor:(id)arg1;
- (void)setLinkColor:(id)arg1;
- (void)setLinkHLColor:(id)arg1;
- (void)setContent:(id)arg1 withCPWording:(id)arg2;
- (id)oTextColor;
- (id)oTextHLColor;
- (id)oFont;
- (void)setOFont:(id)arg1;
- (double)fWidth;
- (void)setFWidth:(double)arg1;
- (unsigned long long)parserType;
- (id)layoutDelegate;
- (void)setLayoutDelegate:(id)arg1;
- (BOOL)bHandleLongPress;
- (void)setBHandleLongPress:(BOOL)arg1;
- (BOOL)bHandleTextClick;
- (BOOL)bSourceUrlForLP;
- (void)setBSourceUrlForLP:(BOOL)arg1;
- (unsigned int)linkTextVisiableLength;
- (void)setLinkTextVisiableLength:(unsigned int)arg1;
- (id)oNormalBGColor;
- (void)setONormalBGColor:(id)arg1;
- (id)oHighlightedBGColor;
- (void)setOHighlightedBGColor:(id)arg1;
- (BOOL)bEnableBGColor;
- (void)setBEnableBGColor:(BOOL)arg1;
- (BOOL)bDismissHightLightOutside;
- (void)setBDismissHightLightOutside:(BOOL)arg1;
- (BOOL)bTouchesPassOn;
- (void)setBTouchesPassOn:(BOOL)arg1;
- (id)linkDelegate;
- (void)setLinkDelegate:(id)arg1;
- (id)arrStyles;
- (id)textAttributeObj;
- (void)setTextAttributeObj:(id)arg1;
- (id)emoticonExt;
- (void)setEmoticonExt:(id)arg1;
- (void)setLineSpacing:(double)arg1;
- (double)lineNumber;
- (void)setLineNumber:(double)arg1;
- (double)originX;
- (void)setOriginX:(double)arg1;
- (id)linkColor;
- (id)linkHLColor;
- (_NSRange)textHighlightRange;
- (long long)richTextAlignment;
- (void)setRichTextAlignment:(long long)arg1;
- (BOOL)lineBreakByClipping;
- (void)setLineBreakByClipping:(BOOL)arg1;
- (BOOL)bIsLongPressHandled;
- (void)setBIsLongPressHandled:(BOOL)arg1;
- (double)touchEndDelayTime;
- (void)setTouchEndDelayTime:(double)arg1;
- (BOOL)bDismissHighlightLinkStyleBeforeNewTouch;
- (void)setBDismissHighlightLinkStyleBeforeNewTouch:(BOOL)arg1;
- (long long)inlineVerticalAlign;
- (void)setInlineVerticalAlign:(long long)arg1;
- (BOOL)bTouchBeginOnLink;
- (void)setBTouchBeginOnLink:(BOOL)arg1;
- (id)truncatedTrailingLinkText;
- (void)setTruncatedTrailingLinkText:(id)arg1;
- (id)truncatedTrailingLinkUrl;
- (void)setTruncatedTrailingLinkUrl:(id)arg1;
- (id)truncatedTrailingLinkColor;
- (void)setTruncatedTrailingLinkColor:(id)arg1;
- (id)truncatedTrailingContent;
- (BOOL)bIsAccessiblityContainer;
- (BOOL)bDisableAccessiblityLinkClick;
- (void)setBDisableAccessiblityLinkClick:(BOOL)arg1;
- (BOOL)accessibilityAddLinkPrefix;
- (void)setAccessibilityAddLinkPrefix:(BOOL)arg1;
- (id)richTextCoverView;
- (void)setRichTextCoverView:(id)arg1;
- (double)rightIconPadding;
- (void)setRightIconPadding:(double)arg1;
- (id)linkShadowColor;
- (void)setLinkShadowColor:(id)arg1;
- (CGSize)linkShadowOffset;
- (void)setLinkShadowOffset:(CGSize)arg1;
- (BOOL)shouldFixYoga;
- (void)setShouldFixYoga:(BOOL)arg1;
- (BOOL)isSupportImageClick;
- (void)setIsSupportImageClick:(BOOL)arg1;
- (id)touch;
- (void)setTouch:(id)arg1;
- (id)truncatedTrailingStyles;
- (void)setTruncatedTrailingStyles:(id)arg1;
- (double)truncatedTrailingStyleWidth;
- (void)setTruncatedTrailingStyleWidth:(double)arg1;
- (void).cxx_destruct;
@end
