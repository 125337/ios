@interface ReaderWrapNotifyMsgDigestItem : NSObject <NSCopying>
{
    BOOL _fontBold; // +0x8
    NSString * _content; // +0x10
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)genContent;
- (id)content;
- (void)setContent:(id)arg1;
- (BOOL)fontBold;
- (void)setFontBold:(BOOL)arg1;
- (void).cxx_destruct;
@end

