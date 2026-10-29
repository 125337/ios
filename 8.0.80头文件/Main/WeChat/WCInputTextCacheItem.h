@interface WCInputTextCacheItem : NSObject <NSCoding>
{
    NSString * _text; // +0x8
    MMImage * _image; // +0x10
    CEmoticonWrap * _emoji; // +0x18
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)emoji;
- (void)setEmoji:(id)arg1;
- (void).cxx_destruct;
@end
