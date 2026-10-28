@interface YYTextSelectionRect : UITextSelectionRect <NSCopying>
{
    BOOL _containsStart; // +0x8
    BOOL _containsEnd; // +0x9
    BOOL _isVertical; // +0xa
    long long _writingDirection; // +0x10
    CGRect _rect; // +0x18
}
- (id)copyWithZone:(_NSZone *)arg1;
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
@end
