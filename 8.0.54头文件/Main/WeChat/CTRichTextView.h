@interface CTRichTextView : MMCPLabel <UIGestureRecognizerDelegate, UIScrollViewDelegate, MMRichTextCoverViewDelegate>
{
    NSMutableAttributedString * _attString; // +0x8
    __CTFramesetter * _framesetter; // +0x10
    CTFrameWrap * _frame; // +0x18
    NSMutableArray * _images; // +0x20
    NSMutableArray * _colors; // +0x28
    NSMutableArray * _tempImages; // +0x30
    double _fWidth; // +0x38
    double _fHeight; // +0x40
    unsigned long long _parserType; // +0x48
    id <ILinkEventExt> _linkDelegate; // +0x50
    BOOL _bUpdateFramesIfNeeded; // +0x58
    BOOL _bWholeField; // +0x59
    BOOL _bIsLongPressHandled; // +0x5a
    CGRect _touchedRect; // +0x60
    BOOL _bTouchesPassOn; // +0x80
    BOOL _bHandleLongPress; // +0x81
    BOOL _bSelectable; // +0x82
    BOOL _isHighlightedBackgroundStyle; // +0x83
    UIFont * _highlightedRangeFont; // +0x88
    UIColor * _highlightedRangeTextColor; // +0x90
    double _lineSpace; // +0x98
    UIView<RichTextViewSelectProtocol> * _richTextCoverView; // +0xa0
    NSString * _originalContent; // +0xa8
    NSArray * _lineRanges; // +0xb0
    _NSRange _highlightedRange; // +0xb8
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)baseInit;
- (id)getParserByPaserType:(unsigned long long)arg1;
- (id)createParser:(unsigned long long)arg1;
- (double)boundingHeightForWidth:(double)arg1;
- (void)updateFrameSetting;
- (void)updateFrame;
- (void)updateFramesIfNeeded;
- (void)updateFrames;
- (void)setFrame:(CGRect)arg1;
- (double)heightForContent:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (id)attributedText;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)longPressOnLinkEvent:(id)arg1;
- (void)longPressOnPhoneEvent:(id)arg1;
- (void)longPressOnAddressEvent:(id)arg1;
- (void)longPressOnTextEvent:(id)arg1;
- (void)longPressOnSearchTopicEvent:(id)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)dealloc;
- (id)getSelectRectsWithRange:(_NSRange)arg1;
- (_NSRange)rangeIntersection:(_NSRange)arg1 withSecond:(_NSRange)arg2;
- (id)getStringWithRange:(_NSRange)arg1;
- (_NSRange)characterRangeAtIndex:(long long)arg1;
- (long long)getTouchIndexWithTouchPoint:(CGPoint)arg1 FrontCursor:(BOOL)arg2;
- (long long)getTouchIndexWithTouchRect:(CGRect)arg1;
- (_NSRange)getTouchRangeWithTouchPoint:(CGPoint)arg1;
- (float)getLineHeight;
- (id)getTextString;
- (BOOL)isEmojiLocation:(unsigned long long)arg1 bStart:(BOOL)arg2;
- (id)delegateView;
- (double)fWidth;
- (void)setFWidth:(double)arg1;
- (double)fHeight;
- (void)setFHeight:(double)arg1;
- (unsigned long long)parserType;
- (void)setParserType:(unsigned long long)arg1;
- (_NSRange)highlightedRange;
- (void)setHighlightedRange:(_NSRange)arg1;
- (id)highlightedRangeFont;
- (void)setHighlightedRangeFont:(id)arg1;
- (id)highlightedRangeTextColor;
- (void)setHighlightedRangeTextColor:(id)arg1;
- (id)linkDelegate;
- (void)setLinkDelegate:(id)arg1;
- (BOOL)bTouchesPassOn;
- (void)setBTouchesPassOn:(BOOL)arg1;
- (BOOL)bHandleLongPress;
- (void)setBHandleLongPress:(BOOL)arg1;
- (double)lineSpace;
- (void)setLineSpace:(double)arg1;
- (id)richTextCoverView;
- (void)setRichTextCoverView:(id)arg1;
- (BOOL)bSelectable;
- (void)setBSelectable:(BOOL)arg1;
- (BOOL)isHighlightedBackgroundStyle;
- (void)setIsHighlightedBackgroundStyle:(BOOL)arg1;
- (id)originalContent;
- (id)lineRanges;
- (void).cxx_destruct;
@end

