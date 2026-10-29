@interface WABSDiffLogic : MMObject
+ (BOOL)shouldTryDownloadPatchPkg;
+ (BOOL)shouldTryPatchPublicPkg;
+ (id)mergePatchData:(id)arg1 withOldData:(id)arg2;
@end

