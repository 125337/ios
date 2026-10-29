@interface YYTextLine : NSObject
{
    double _firstGlyphPos; // +0x8
    BOOL _vertical; // +0x10
    unsigned long long _index; // +0x18
    unsigned long long _row; // +0x20
    NSArray * _verticalRotateRange; // +0x28
    __CTLine * _CTLine; // +0x30
    double _ascent; // +0x38
    double _descent; // +0x40
    double _leading; // +0x48
    double _lineWidth; // +0x50
    double _trailingWhitespaceWidth; // +0x58
    NSArray * _attachments; // +0x60
    NSArray * _attachmentRanges; // +0x68
    NSArray * _attachmentRects; // +0x70
    _NSRange _range; // +0x78
    CGPoint _position; // +0x88
    CGRect _bounds; // +0x98
}
+ (id)lineWithCTLine:(__CTLine *)arg1 position:(CGPoint)arg2 vertical:(BOOL)arg3;
- (void)dealloc;
- (void)setCTLine:(__CTLine *)arg1;
- (void)setPosition:(CGPoint)arg1;
- (void)reloadBounds;
- (CGSize)size;
- (double)width;
- (double)height;
- (double)top;
- (double)bottom;
- (double)left;
- (double)right;
- (id)description;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)row;
- (void)setRow:(unsigned long long)arg1;
- (id)verticalRotateRange;
- (void)setVerticalRotateRange:(id)arg1;
- (__CTLine *)CTLine;
- (_NSRange)range;
- (BOOL)vertical;
- (CGRect)bounds;
- (CGPoint)position;
- (double)ascent;
- (double)descent;
- (double)leading;
- (double)lineWidth;
- (double)trailingWhitespaceWidth;
- (id)attachments;
- (id)attachmentRanges;
- (id)attachmentRects;
- (void).cxx_destruct;
@end

