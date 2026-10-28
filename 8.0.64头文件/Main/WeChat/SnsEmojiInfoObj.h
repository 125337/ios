@interface SnsEmojiInfoObj : NSObject <NSCoding, PBCoding>
{
    unsigned int _width; // +0x8
    unsigned int _height; // +0xc
    unsigned int _size; // +0x10
    int _ret; // +0x14
    unsigned int _expiredTime; // +0x18
    NSString * _md5; // +0x20
    EmojiInfoObj * _emojiInfoObj; // +0x28
    NSString * _desc; // +0x30
}
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_emojiInfoObj;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_size;
+ (void)PBArrayAdd_ret;
+ (void)PBArrayAdd_expiredTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithSnsEmojiInfo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getEmojiDesc;
- (id)getEmojiMd5;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (unsigned int)width;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)height;
- (void)setHeight:(unsigned int)arg1;
- (unsigned int)size;
- (void)setSize:(unsigned int)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (int)ret;
- (void)setRet:(int)arg1;
- (unsigned int)expiredTime;
- (void)setExpiredTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
