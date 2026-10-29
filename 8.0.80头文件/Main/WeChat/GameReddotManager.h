@interface GameReddotManager : NSObject
{
    BOOL _beUseFinderReddot; // +0x8
    BOOL _beBlocked; // +0x9
}
- (id)init;
- (BOOL)checkCanUseFinderReddot;
- (void)setFinderReddotInfo:(id)arg1;
- (long long)convertStyle:(id)arg1;
- (BOOL)useFinderReddot;
- (void)onFinderReload;
- (id)getCurrentReddot;
- (void)finderReddotExit:(long long)arg1;
- (BOOL)beFrequancyControl;
- (void)blockGameReddot;
- (void)syncReddot:(id)arg1;
@end
