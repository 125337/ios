@interface WCFinderDynamicRichTextParserItem : NSObject
{
    long long _type; // +0x8
    NSString * _text; // +0x10
    NSString * _color; // +0x18
    long long _imageId; // +0x20
    NSString * _src; // +0x28
    NSString * _href; // +0x30
}
+ (id)textItem:(id)arg1 color:(id)arg2;
+ (id)textItem:(id)arg1 color:(id)arg2 href:(id)arg3;
+ (id)iconItem:(long long)arg1;
+ (id)iconWithSrc:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (long long)imageId;
- (void)setImageId:(long long)arg1;
- (id)src;
- (void)setSrc:(id)arg1;
- (id)href;
- (void)setHref:(id)arg1;
- (void).cxx_destruct;
@end

