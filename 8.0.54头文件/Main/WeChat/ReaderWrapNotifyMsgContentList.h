@interface ReaderWrapNotifyMsgContentList : NSObject <NSCopying>
{
    BOOL _fontBold; // +0x8
    NSString * _content; // +0x10
    long long _type; // +0x18
    NSString * _colorLight; // +0x20
    NSString * _colorDark; // +0x28
    NSString * _picUrl; // +0x30
    NSString * _nightPicUrl; // +0x38
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)colorLight;
- (void)setColorLight:(id)arg1;
- (id)colorDark;
- (void)setColorDark:(id)arg1;
- (BOOL)fontBold;
- (void)setFontBold:(BOOL)arg1;
- (id)picUrl;
- (void)setPicUrl:(id)arg1;
- (id)nightPicUrl;
- (void)setNightPicUrl:(id)arg1;
- (void).cxx_destruct;
@end

