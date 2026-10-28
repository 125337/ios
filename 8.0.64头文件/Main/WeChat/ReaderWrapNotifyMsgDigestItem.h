@interface ReaderWrapNotifyMsgDigestItem : NSObject <NSCopying>
{
    BOOL _fontBold; // +0x8
    NSString * _content; // +0x10
    NSArray * _contentList; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)genContent;
- (id)genMergeContent:(long long)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (BOOL)fontBold;
- (void)setFontBold:(BOOL)arg1;
- (id)contentList;
- (void)setContentList:(id)arg1;
- (void).cxx_destruct;
@end
