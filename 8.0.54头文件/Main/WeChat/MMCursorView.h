@interface MMCursorView : UIView
{
    float m_dotRadius; // +0x8
    BOOL _bDraged; // +0xc
    int _cursorType; // +0x10
    float _cursorHeight; // +0x14
    UIColor * _cursorColor; // +0x18
    CGPoint _originPoint; // +0x20
}
- (id)initWithCursorType:(int)arg1 andHeight:(float)arg2 andCursorColor:(id)arg3;
- (void)setOriginPoint:(CGPoint)arg1;
- (void)drawRect:(CGRect)arg1;
- (int)cursorType;
- (void)setCursorType:(int)arg1;
- (float)cursorHeight;
- (void)setCursorHeight:(float)arg1;
- (id)cursorColor;
- (void)setCursorColor:(id)arg1;
- (CGPoint)originPoint;
- (BOOL)bDraged;
- (void)setBDraged:(BOOL)arg1;
- (void).cxx_destruct;
@end

