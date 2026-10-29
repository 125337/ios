@interface RedPointStorage : NSObject
+ (id)getRedPointCtrlInfoPath;
+ (BOOL)saveRedPointCtrlInfo:(id)arg1;
+ (id)loadRedPointCtrlInfo;
+ (void)delRedPointCtrlInfo;
@end
