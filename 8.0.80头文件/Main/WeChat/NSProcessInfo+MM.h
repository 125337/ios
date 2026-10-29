@interface NSProcessInfo (MM)
+ (void)load;
- (void)mm_modifyContainerEnvironmentVariables;
- (id)mm_processName;
- (id)mm_processName2;
@end
