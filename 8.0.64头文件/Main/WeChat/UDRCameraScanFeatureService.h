@interface UDRCameraScanFeatureService : IUdrBizFeature
+ (id)projectId:(long long)arg1;
+ (BOOL)fileExist:(long long)arg1 name:(id)arg2;
+ (id)filePath:(long long)arg1 name:(id)arg2;
- (id)getProjectId;
- (id)getParameter;
@end
