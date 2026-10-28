@interface TingCrossplatformManager : NSObject
{
    TingPlayerManager * _playTaskController; // +0x8
}
- (id)initWithPlayerManager:(id)arg1;
- (id)affBizCommonPath;
- (void)initAffBizEnviroment;
- (void)initCommonReddotSync;
- (void)onManagerEnterForeground;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (id)playTaskController;
- (void)setPlayTaskController:(id)arg1;
- (void).cxx_destruct;
@end
