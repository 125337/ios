@interface DynamicModuleUtil : NSObject
+ (id)makeResult:(BOOL)arg1 result:(id)arg2 msg:(id)arg3;
+ (id)makeResultSuccess:(id)arg1 msg:(id)arg2;
+ (id)makeResultFail:(id)arg1 msg:(id)arg2;
+ (id)makeResultCancel:(id)arg1 msg:(id)arg2;
+ (void)dictToKvData:(id)arg1 kvData:(id)arg2;
@end
