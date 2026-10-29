@interface TingCrossplatformManager : NSObject
- (id)init;
- (id)affBizCommonPath;
- (void)initAffBizEnviroment;
- (void)initCommonReddotSync;
- (void)onManagerEnterForeground;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
@end
