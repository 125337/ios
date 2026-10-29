@interface GameCenterMsgShareInfo : NSObject
{
    BOOL _shouldScale; // +0x8
    int _type; // +0xc
    int _thumbWidth; // +0x10
    int _thumbHeight; // +0x14
    NSString * _title; // +0x18
    NSString * _content; // +0x20
    NSString * _desc; // +0x28
    NSString * _mediaUrl; // +0x30
    NSString * _thumbUrl; // +0x38
}
+ (id)parseFromXml:(XmlReaderNode_t *)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)mediaUrl;
- (void)setMediaUrl:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (int)thumbWidth;
- (void)setThumbWidth:(int)arg1;
- (int)thumbHeight;
- (void)setThumbHeight:(int)arg1;
- (BOOL)shouldScale;
- (void)setShouldScale:(BOOL)arg1;
- (void).cxx_destruct;
@end

