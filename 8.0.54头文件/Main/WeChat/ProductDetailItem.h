@interface ProductDetailItem : NSObject <NSCoding>
{
    NSString * _title; // +0x8
    NSString * _desc; // +0x10
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void).cxx_destruct;
@end

