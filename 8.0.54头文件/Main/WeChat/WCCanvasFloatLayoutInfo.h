@interface WCCanvasFloatLayoutInfo : MMObject <NSCoding>
{
    BOOL _autoShow; // +0x8
    BOOL _noAnimation; // +0x9
    BOOL _forbiddenToClose; // +0xa
    BOOL _noBackground; // +0xb
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)autoShow;
- (void)setAutoShow:(BOOL)arg1;
- (BOOL)noAnimation;
- (void)setNoAnimation:(BOOL)arg1;
- (BOOL)forbiddenToClose;
- (void)setForbiddenToClose:(BOOL)arg1;
- (BOOL)noBackground;
- (void)setNoBackground:(BOOL)arg1;
@end

