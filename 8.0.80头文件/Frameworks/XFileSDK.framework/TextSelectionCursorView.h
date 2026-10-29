@interface TextSelectionCursorView : 
{
    double _lineLength; // +0x8
    UIColor * _cursorColor; // +0x10
    double _ballRadius; // +0x18
    BOOL _isInMagnifier; // +0x20
    unsigned long long _cursorType; // +0x28
    double _x; // +0x30
    double _y; // +0x38
    CGPoint _positionOffset; // +0x40
}
- (id)init;
- (void)commonInit;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setIsInMagnifier:(BOOL)arg1;
- (void)setCursorType:(unsigned long long)arg1;
- (void)setCursorLineHeight:(double)arg1;
- (void)setCursorPosition:(CGPoint)arg1;
- (void)setPositionOffset:(CGPoint)arg1;
- (void)drawRect:(CGRect)arg1;
- (BOOL)isInMagnifier;
- (unsigned long long)cursorType;
- (double)x;
- (void)setX:(double)arg1;
- (double)y;
- (void)setY:(double)arg1;
- (CGPoint)positionOffset;
- (void).cxx_destruct;
@end
