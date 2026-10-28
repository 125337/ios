@interface BaseStyle : NSObject
{
    CGRect _frame; // +0x8
    BOOL _bUserInteractionEnabled; // +0x28
    BOOL _endOfContent; // +0x29
    BOOL _hasAdjustment; // +0x2a
    BOOL _bHighlighted; // +0x2b
    BOOL _isSelectable; // +0x2c
    BaseStyle * _eventRespondStyle; // +0x30
    _NSRange _range; // +0x38
    _NSRange _displayRange; // +0x48
}
- (id)init;
- (void)drawInContext:(CGContext *)arg1;
- (CGRect)frame;
- (void)setFrame:(CGRect)arg1;
- (BOOL)bUserInteractionEnabled;
- (void)setBUserInteractionEnabled:(BOOL)arg1;
- (_NSRange)range;
- (void)setRange:(_NSRange)arg1;
- (_NSRange)displayRange;
- (void)setDisplayRange:(_NSRange)arg1;
- (BOOL)endOfContent;
- (void)setEndOfContent:(BOOL)arg1;
- (BOOL)hasAdjustment;
- (void)setHasAdjustment:(BOOL)arg1;
- (BOOL)bHighlighted;
- (void)setBHighlighted:(BOOL)arg1;
- (BOOL)isSelectable;
- (void)setIsSelectable:(BOOL)arg1;
- (id)eventRespondStyle;
- (void)setEventRespondStyle:(id)arg1;
- (void).cxx_destruct;
@end
