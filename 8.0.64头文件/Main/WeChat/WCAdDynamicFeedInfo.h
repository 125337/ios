@interface WCAdDynamicFeedInfo : NSObject <NSCoding>
{
    WCAdDynamicFeedElementInfo * _rootElementInfo; // +0x8
    NSArray * _animations; // +0x10
    WCAdDynamicFeedConfigInfo * _configInfo; // +0x18
    WCAdDynamicFeedTemplateExtraInfo * _templateExtraInfo; // +0x20
    WCAdDynamicFeedDynamicInfluentDataInfo * _dynamicUpdateInfluentData; // +0x28
}
+ (id)fromXML:(XmlReaderNode_t *)arg1 basicWidth:(int)arg2 basicRootFontSize:(int)arg3 influentData:(id)arg4;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)isVersionValid;
- (BOOL)isContainerClickableWith:(id)arg1;
- (void)processWithInfluentData:(id)arg1;
- (BOOL)updateDynamicFeedInfoWithNewInfluentData:(id)arg1 basicWidth:(int)arg2 basicRootFontSize:(int)arg3;
- (id)rootElementInfo;
- (void)setRootElementInfo:(id)arg1;
- (id)animations;
- (void)setAnimations:(id)arg1;
- (id)configInfo;
- (void)setConfigInfo:(id)arg1;
- (id)templateExtraInfo;
- (void)setTemplateExtraInfo:(id)arg1;
- (id)dynamicUpdateInfluentData;
- (void)setDynamicUpdateInfluentData:(id)arg1;
- (void).cxx_destruct;
@end
