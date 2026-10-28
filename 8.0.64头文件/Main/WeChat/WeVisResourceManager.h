@interface WeVisResourceManager : IUdrBizFeature <IWeVisResourceProvider>
+ (id)UDRProjectId;
+ (id)resourceForKey:(id)arg1;
+ (id)postPathOfResource:(id)arg1;
+ (id)pathOfResource:(id)arg1;
+ (id)modelFilePathForKey:(id)arg1;
+ (BOOL)checkModelFileExistsForKeys:(id)arg1;
+ (id)debugDescription;
- (id)init;
- (id)getProjectId;
- (BOOL)addToPeriod;
- (id)getParameter;
- (void)postProcess:(id)arg1;
- (void)haveSpecifiedResource:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 errNo:(int)arg4 errCode:(int)arg5;
- (id)modelFilePathForKey:(id)arg1;
@end
