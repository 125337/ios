@interface ActionMedia : NSObject <NSCoding>
{
    int _showInWeb; // +0x8
    NSString * _imageUrl; // +0x10
    NSString * _link; // +0x18
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toXml;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (int)showInWeb;
- (void)setShowInWeb:(int)arg1;
- (void).cxx_destruct;
@end
