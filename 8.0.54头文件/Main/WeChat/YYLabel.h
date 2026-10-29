@interface YYLabel : UIView <YYTextDebugTarget, YYTextAsyncLayerDelegate, NSCoding>
{
    NSMutableAttributedString * _innerText; // +0x8
    YYTextLayout * _innerLayout; // +0x10
    YYTextContainer * _innerContainer; // +0x18
    NSMutableArray * _attachmentViews; // +0x20
    NSMutableArray * _attachmentLayers; // +0x28
    _NSRange _highlightRange; // +0x30
    YYTextHighlight * _highlight; // +0x40
    YYTextLayout * _highlightLayout; // +0x48
    YYTextLayout * _shrinkInnerLayout; // +0x50
    YYTextLayout * _shrinkHighlightLayout; // +0x58
    NSTimer * _longPressTimer; // +0x60
    CGPoint _touchBeganPoint; // +0x68
    struct _state; // +0x78
    BOOL _verticalForm; // +0x7c
    BOOL _displaysAsynchronously; // +0x7d
    BOOL _clearContentsBeforeAsynchronouslyDisplay; // +0x7e
    BOOL _fadeOnAsynchronouslyDisplay; // +0x7f
    BOOL _fadeOnHighlight; // +0x80
    BOOL _ignoreCommonProperties; // +0x81
    NSString * _text; // +0x88
    UIFont * _font; // +0x90
    UIColor * _textColor; // +0x98
    UIColor * _shadowColor; // +0xa0
    double _shadowBlurRadius; // +0xa8
    long long _textAlignment; // +0xb0
    long long _textVerticalAlignment; // +0xb8
    NSAttributedString * _attributedText; // +0xc0
    long long _lineBreakMode; // +0xc8
    NSAttributedString * _truncationToken; // +0xd0
    unsigned long long _numberOfLines; // +0xd8
    id <YYTextParser> _textParser; // +0xe0
    UIBezierPath * _textContainerPath; // +0xe8
    NSArray * _exclusionPaths; // +0xf0
    id <YYTextLinePositionModifier> _linePositionModifier; // +0xf8
    YYTextDebugOption * _debugOption; // +0x100
    double _preferredMaxLayoutWidth; // +0x108
    id /* block */ _textTapAction; // +0x110
    id /* block */ _textLongPressAction; // +0x118
    id /* block */ _highlightTapAction; // +0x120
    id /* block */ _highlightLongPressAction; // +0x128
    CGSize _shadowOffset; // +0x130
    UIEdgeInsets _textContainerInset; // +0x140
}
+ (id)_shrinkLayoutWithLayout:(id)arg1;
+ (Class)layerClass;
- (BOOL)fontIsBold_:(id)arg1;
- (id)boldFont_:(id)arg1;
- (id)normalFont_:(id)arg1;
- (void)setFontName_:(id)arg1;
- (void)setFontSize_:(double)arg1;
- (void)setFontIsBold_:(BOOL)arg1;
- (void)setInsetTop_:(double)arg1;
- (void)setInsetBottom_:(double)arg1;
- (void)setInsetLeft_:(double)arg1;
- (void)setInsetRight_:(double)arg1;
- (void)setDebugEnabled_:(BOOL)arg1;
- (void)_updateIfNeeded;
- (void)_updateLayout;
- (void)_setLayoutNeedUpdate;
- (void)_setLayoutNeedRedraw;
- (void)_clearInnerLayout;
- (id)_innerLayout;
- (id)_highlightLayout;
- (void)_startLongPressTimer;
- (void)_endLongPressTimer;
- (void)_trackDidLongPress;
- (id)_getHighlightAtPoint:(CGPoint)arg1 range:(_NSRange *)arg2;
- (void)_showHighlightAnimated:(BOOL)arg1;
- (void)_hideHighlightAnimated:(BOOL)arg1;
- (void)_removeHighlightAnimated:(BOOL)arg1;
- (void)_endTouch;
- (CGPoint)_convertPointToLayout:(CGPoint)arg1;
- (CGPoint)_convertPointFromLayout:(CGPoint)arg1;
- (CGRect)_convertRectToLayout:(CGRect)arg1;
- (CGRect)_convertRectFromLayout:(CGRect)arg1;
- (id)_defaultFont;
- (id)_shadowFromProperties;
- (void)_updateOuterLineBreakMode;
- (void)_updateOuterTextProperties;
- (void)_updateOuterContainerProperties;
- (void)_clearContents;
- (void)_initLabel;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)accessibilityLabel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(CGSize)arg1;
- (void)setShadowBlurRadius:(double)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setTextVerticalAlignment:(long long)arg1;
- (void)setTruncationToken:(id)arg1;
- (void)setNumberOfLines:(unsigned long long)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setTextContainerPath:(id)arg1;
- (void)setExclusionPaths:(id)arg1;
- (void)setTextContainerInset:(UIEdgeInsets)arg1;
- (void)setVerticalForm:(BOOL)arg1;
- (void)setLinePositionModifier:(id)arg1;
- (void)setTextParser:(id)arg1;
- (void)setTextLayout:(id)arg1;
- (id)textLayout;
- (void)setDisplaysAsynchronously:(BOOL)arg1;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (CGSize)intrinsicContentSize;
- (void)setDebugOption:(id)arg1;
- (id)newAsyncDisplayTask;
- (id)text;
- (id)font;
- (id)textColor;
- (id)shadowColor;
- (CGSize)shadowOffset;
- (double)shadowBlurRadius;
- (long long)textAlignment;
- (long long)textVerticalAlignment;
- (id)attributedText;
- (long long)lineBreakMode;
- (id)truncationToken;
- (unsigned long long)numberOfLines;
- (id)textParser;
- (id)textContainerPath;
- (id)exclusionPaths;
- (UIEdgeInsets)textContainerInset;
- (BOOL)isVerticalForm;
- (id)linePositionModifier;
- (id)debugOption;
- (double)preferredMaxLayoutWidth;
- (id /* block */)textTapAction;
- (void)setTextTapAction:(id /* block */)arg1;
- (id /* block */)textLongPressAction;
- (void)setTextLongPressAction:(id /* block */)arg1;
- (id /* block */)highlightTapAction;
- (void)setHighlightTapAction:(id /* block */)arg1;
- (id /* block */)highlightLongPressAction;
- (void)setHighlightLongPressAction:(id /* block */)arg1;
- (BOOL)displaysAsynchronously;
- (BOOL)clearContentsBeforeAsynchronouslyDisplay;
- (void)setClearContentsBeforeAsynchronouslyDisplay:(BOOL)arg1;
- (BOOL)fadeOnAsynchronouslyDisplay;
- (void)setFadeOnAsynchronouslyDisplay:(BOOL)arg1;
- (BOOL)fadeOnHighlight;
- (void)setFadeOnHighlight:(BOOL)arg1;
- (BOOL)ignoreCommonProperties;
- (void)setIgnoreCommonProperties:(BOOL)arg1;
- (void).cxx_destruct;
@end

