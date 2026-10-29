@interface WeChatIntroductionItem : NSObject <YYModel>
{
    NSArray * _introductionList; // +0x8
}
+ (id)itemFromXml:(XmlReaderNode_t *)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)toXML;
- (id)introductionList;
- (void)setIntroductionList:(id)arg1;
- (void).cxx_destruct;
@end

