@interface TemplateFinderAIGCTaskWrap : NSObject
{
    NSString * _aigcTaskId; // +0x8
    unsigned long long _aigcTaskStatus; // +0x10
}
+ (id)finderAIGCTaskWrapWithJSON:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)aigcTaskId;
- (void)setAigcTaskId:(id)arg1;
- (unsigned long long)aigcTaskStatus;
- (void)setAigcTaskStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
