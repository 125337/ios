@interface WCCanvasLinearLayoutInfo : MMObject <NSCoding>
{
    unsigned int _cornerRadius; // +0x8
    NSArray * _layoutItems; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)layoutItems;
- (void)setLayoutItems:(id)arg1;
- (unsigned int)cornerRadius;
- (void)setCornerRadius:(unsigned int)arg1;
- (void).cxx_destruct;
@end

