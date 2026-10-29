@interface ScanUrlItem : NSObject <NSCoding>
{
    NSString * _title; // +0x8
    NSString * _link; // +0x10
    NSString * _imageUrl; // +0x18
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (void).cxx_destruct;
@end

