@interface MMFlutterOffsetInfo : NSObject
{
    BOOL _inScreen; // +0x8
    CGPoint _offset; // +0x10
}
- (id)initWithInScreen:(BOOL)arg1;
- (id)initWithOffset:(CGPoint)arg1;
- (BOOL)inScreen;
- (void)setInScreen:(BOOL)arg1;
- (CGPoint)offset;
- (void)setOffset:(CGPoint)arg1;
@end
