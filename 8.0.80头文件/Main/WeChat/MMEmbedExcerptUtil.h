@interface MMEmbedExcerptUtil : NSObject
{
    NSMutableSet * _exposeReportStrSet; // +0x8
}
+ (id)createEmbedExcerptWebview:(id)arg1 scene:(unsigned int)arg2 visibleViewController:(id)arg3;
+ (id)createEmbedExcerptWebview:(id)arg1 scene:(unsigned int)arg2 subScene:(unsigned int)arg3 visibleViewController:(id)arg4 extraInfo:(id)arg5;
+ (void)reportWithMsg:(id)arg1 operateType:(unsigned int)arg2;
+ (unsigned int)getEmbedExcerptSceneWithUrl:(id)arg1;
+ (unsigned int)getEmbedExcerptSubsceneWithUrl:(id)arg1 getScene:(unsigned int)arg2;
- (id)exposeReportStrSet;
- (void)setExposeReportStrSet:(id)arg1;
- (void).cxx_destruct;
@end
