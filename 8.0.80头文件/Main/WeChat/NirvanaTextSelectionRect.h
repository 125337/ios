@interface NirvanaTextSelectionRect : UITextSelectionRect
{
    BOOL _containsStart; // +0x8
    BOOL _containsEnd; // +0x9
    BOOL _isVertical; // +0xa
    long long _writingDirection; // +0x10
    unsigned long long _position; // +0x18
    CGRect _rect; // +0x20
}
+ (id)selectionRectWithRectAndInfo:(CGRect)arg1 position:(unsigned long long)arg2 writingDirection:(long long)arg3 containsStart:(BOOL)arg4 containsEnd:(BOOL)arg5 isVertical:(BOOL)arg6;
+ (id)selectionRectWithRect:(CGRect)arg1 position:(unsigned long long)arg2;
+ (id)selectionRectWithRect:(CGRect)arg1 position:(unsigned long long)arg2 writingDirection:(long long)arg3;
- (id)initWithRectAndInfo:(CGRect)arg1 position:(unsigned long long)arg2 writingDirection:(long long)arg3 containsStart:(BOOL)arg4 containsEnd:(BOOL)arg5 isVertical:(BOOL)arg6;
- (BOOL)isRTL;
- (CGRect)rect;
- (void)setRect:(CGRect)arg1;
- (long long)writingDirection;
- (void)setWritingDirection:(long long)arg1;
- (BOOL)containsStart;
- (void)setContainsStart:(BOOL)arg1;
- (BOOL)containsEnd;
- (void)setContainsEnd:(BOOL)arg1;
- (BOOL)isVertical;
- (void)setIsVertical:(BOOL)arg1;
- (unsigned long long)position;
- (void)setPosition:(unsigned long long)arg1;
@end
