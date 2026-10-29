@interface ReaderWrapNotifyMsgContentList : NSObject <NSCopying>
{
    BOOL _fontBold; // +0x8
    unsigned int _iconStyle; // +0xc
    NSString * _content; // +0x10
    long long _type; // +0x18
    long long _newType; // +0x20
    NSString * _colorLight; // +0x28
    NSString * _colorDark; // +0x30
    NSString * _picUrl; // +0x38
    NSString * _nightPicUrl; // +0x40
    long long _mergeCount; // +0x48
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)newType;
- (void)setNewType:(long long)arg1;
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
- (unsigned int)iconStyle;
- (void)setIconStyle:(unsigned int)arg1;
- (long long)mergeCount;
- (void)setMergeCount:(long long)arg1;
- (void).cxx_destruct;
@end
