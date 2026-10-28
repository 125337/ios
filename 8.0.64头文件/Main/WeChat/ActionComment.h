@interface ActionComment : NSObject <NSCoding>
{
    NSString * _imageUrl; // +0x8
    NSString * _nickName; // +0x10
    NSString * _content; // +0x18
    NSString * _link; // +0x20
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toXml;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (void).cxx_destruct;
@end
