@interface ImageConf : MMObject <NSCopying>
{
    int _count; // +0x8
    int _duration; // +0xc
    NSString * _contentType; // +0x10
    NSString * _thumbUrl; // +0x18
    NSString * _title; // +0x20
    NSString * _ratioType; // +0x28
    NSString * _subSource; // +0x30
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithDict:(id)arg1;
- (id)description;
- (id)toDictString;
- (id)contentType;
- (void)setContentType:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)ratioType;
- (void)setRatioType:(id)arg1;
- (int)count;
- (void)setCount:(int)arg1;
- (int)duration;
- (void)setDuration:(int)arg1;
- (id)subSource;
- (void)setSubSource:(id)arg1;
- (void).cxx_destruct;
@end
