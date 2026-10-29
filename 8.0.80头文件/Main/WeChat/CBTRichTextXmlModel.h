@interface CBTRichTextXmlModel : NSObject
{
    NSString * _richContent; // +0x8
    CBTRichTextActionParametersXmlModel * _actionParameters; // +0x10
}
+ (id)parseAssistantRichTextFormat:(id)arg1 parameterMap:(id *)arg2;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)parseTaskCenterCallbackFromXml:(id)arg1;
- (id)buildParameterMap;
- (id)richContent;
- (void)setRichContent:(id)arg1;
- (id)actionParameters;
- (void)setActionParameters:(id)arg1;
- (void).cxx_destruct;
@end
