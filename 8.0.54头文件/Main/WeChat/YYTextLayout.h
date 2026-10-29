@interface YYTextLayout : NSObject <NSCoding>
{
    BOOL _containsHighlight; // +0x8
    BOOL _needDrawBlockBorder; // +0x9
    BOOL _needDrawBackgroundBorder; // +0xa
    BOOL _needDrawShadow; // +0xb
    BOOL _needDrawUnderline; // +0xc
    BOOL _needDrawText; // +0xd
    BOOL _needDrawAttachment; // +0xe
    BOOL _needDrawInnerShadow; // +0xf
    BOOL _needDrawStrikethrough; // +0x10
    BOOL _needDrawBorder; // +0x11
    YYTextContainer * _container; // +0x18
    NSAttributedString * _text; // +0x20
    __CTFramesetter * _frameSetter; // +0x28
    __CTFrame * _frame; // +0x30
    NSArray * _lines; // +0x38
    YYTextLine * _truncatedLine; // +0x40
    NSArray * _attachments; // +0x48
    NSArray * _attachmentRanges; // +0x50
    NSArray * _attachmentRects; // +0x58
    NSSet * _attachmentContentsSet; // +0x60
    unsigned long long _rowCount; // +0x68
    unsigned long long * _lineRowsIndex; // +0x70
    struct * _lineRowsEdge; // +0x78
    _NSRange _range; // +0x80
    _NSRange _visibleRange; // +0x90
    CGSize _textBoundingSize; // +0xa0
    CGRect _textBoundingRect; // +0xb0
}
+ (id)layoutWithContainerSize:(CGSize)arg1 text:(id)arg2;
+ (id)layoutWithContainer:(id)arg1 text:(id)arg2;
+ (id)layoutWithContainer:(id)arg1 text:(id)arg2 range:(_NSRange)arg3;
+ (id)layoutWithContainers:(id)arg1 text:(id)arg2;
+ (id)layoutWithContainers:(id)arg1 text:(id)arg2 range:(_NSRange)arg3;
- (id)_init;
- (void)setFrameSetter:(__CTFramesetter *)arg1;
- (void)setFrame:(__CTFrame *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)_rowIndexForEdge:(double)arg1;
- (unsigned long long)_closestRowIndexForEdge:(double)arg1;
- (__CTRun *)_runForLine:(id)arg1 position:(id)arg2;
- (BOOL)_insideComposedCharacterSequences:(id)arg1 position:(unsigned long long)arg2 block:(id /* block */)arg3;
- (BOOL)_insideEmoji:(id)arg1 position:(unsigned long long)arg2 block:(id /* block */)arg3;
- (BOOL)_isRightToLeftInLine:(id)arg1 atPoint:(CGPoint)arg2;
- (id)_correctedRangeWithEdge:(id)arg1;
- (unsigned long long)lineIndexForRow:(unsigned long long)arg1;
- (unsigned long long)lineCountForRow:(unsigned long long)arg1;
- (unsigned long long)rowIndexForLine:(unsigned long long)arg1;
- (unsigned long long)lineIndexForPoint:(CGPoint)arg1;
- (unsigned long long)closestLineIndexForPoint:(CGPoint)arg1;
- (double)offsetForTextPosition:(unsigned long long)arg1 lineIndex:(unsigned long long)arg2;
- (unsigned long long)textPositionForPoint:(CGPoint)arg1 lineIndex:(unsigned long long)arg2;
- (id)closestPositionToPoint:(CGPoint)arg1;
- (id)positionForPoint:(CGPoint)arg1 oldPosition:(id)arg2 otherPosition:(id)arg3;
- (id)textRangeAtPoint:(CGPoint)arg1;
- (id)closestTextRangeAtPoint:(CGPoint)arg1;
- (id)textRangeByExtendingPosition:(id)arg1;
- (id)textRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (unsigned long long)lineIndexForPosition:(id)arg1;
- (CGPoint)linePositionForPosition:(id)arg1;
- (CGRect)caretRectForPosition:(id)arg1;
- (CGRect)firstRectForRange:(id)arg1;
- (CGRect)rectForRange:(id)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (id)selectionRectsWithoutStartAndEndForRange:(id)arg1;
- (id)selectionRectsWithOnlyStartAndEndForRange:(id)arg1;
- (void)drawInContext:(CGContext *)arg1 size:(CGSize)arg2 point:(CGPoint)arg3 view:(id)arg4 layer:(id)arg5 debug:(id)arg6 cancel:(id /* block */)arg7;
- (void)drawInContext:(CGContext *)arg1 size:(CGSize)arg2 debug:(id)arg3;
- (void)addAttachmentToView:(id)arg1 layer:(id)arg2;
- (void)removeAttachmentFromViewAndLayer;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (_NSRange)range;
- (void)setRange:(_NSRange)arg1;
- (__CTFramesetter *)frameSetter;
- (__CTFrame *)frame;
- (id)lines;
- (void)setLines:(id)arg1;
- (id)truncatedLine;
- (void)setTruncatedLine:(id)arg1;
- (id)attachments;
- (void)setAttachments:(id)arg1;
- (id)attachmentRanges;
- (void)setAttachmentRanges:(id)arg1;
- (id)attachmentRects;
- (void)setAttachmentRects:(id)arg1;
- (id)attachmentContentsSet;
- (void)setAttachmentContentsSet:(id)arg1;
- (unsigned long long)rowCount;
- (void)setRowCount:(unsigned long long)arg1;
- (_NSRange)visibleRange;
- (void)setVisibleRange:(_NSRange)arg1;
- (CGRect)textBoundingRect;
- (void)setTextBoundingRect:(CGRect)arg1;
- (CGSize)textBoundingSize;
- (void)setTextBoundingSize:(CGSize)arg1;
- (BOOL)containsHighlight;
- (void)setContainsHighlight:(BOOL)arg1;
- (BOOL)needDrawBlockBorder;
- (void)setNeedDrawBlockBorder:(BOOL)arg1;
- (BOOL)needDrawBackgroundBorder;
- (void)setNeedDrawBackgroundBorder:(BOOL)arg1;
- (BOOL)needDrawShadow;
- (void)setNeedDrawShadow:(BOOL)arg1;
- (BOOL)needDrawUnderline;
- (void)setNeedDrawUnderline:(BOOL)arg1;
- (BOOL)needDrawText;
- (void)setNeedDrawText:(BOOL)arg1;
- (BOOL)needDrawAttachment;
- (void)setNeedDrawAttachment:(BOOL)arg1;
- (BOOL)needDrawInnerShadow;
- (void)setNeedDrawInnerShadow:(BOOL)arg1;
- (BOOL)needDrawStrikethrough;
- (void)setNeedDrawStrikethrough:(BOOL)arg1;
- (BOOL)needDrawBorder;
- (void)setNeedDrawBorder:(BOOL)arg1;
- (unsigned long long *)lineRowsIndex;
- (void)setLineRowsIndex:(unsigned long long *)arg1;
- (struct *)lineRowsEdge;
- (void)setLineRowsEdge:(struct *)arg1;
- (void).cxx_destruct;
@end

