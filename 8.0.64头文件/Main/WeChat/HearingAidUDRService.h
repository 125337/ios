@interface HearingAidUDRService : IUdrBizFeature
+ (id)projectId;
+ (id)resourceName;
+ (BOOL)handlePostProcess:(id)arg1;
- (id)getProjectId;
- (void)postProcess:(id)arg1;
@end
