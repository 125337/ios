@interface ReaderWrapNotifyMsgText : NSObject <NSCopying>
{
    BOOL _bBold; // +0x8
    unsigned int _maxLineCount; // +0xc
    NSString * _text; // +0x10
    NSString * _lightColorStr; // +0x18
    NSString * _darkColorStr; // +0x20
    double _size; // +0x28
    double _lineHeight; // +0x30
    NSArray * _contentList; // +0x38
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)lightColor;
- (id)darkColor;
- (id)text;
- (void)setText:(id)arg1;
- (id)lightColorStr;
- (void)setLightColorStr:(id)arg1;
- (id)darkColorStr;
- (void)setDarkColorStr:(id)arg1;
- (double)size;
- (void)setSize:(double)arg1;
- (double)lineHeight;
- (void)setLineHeight:(double)arg1;
- (BOOL)bBold;
- (void)setBBold:(BOOL)arg1;
- (unsigned int)maxLineCount;
- (void)setMaxLineCount:(unsigned int)arg1;
- (id)contentList;
- (void)setContentList:(id)arg1;
- (void).cxx_destruct;
@end
