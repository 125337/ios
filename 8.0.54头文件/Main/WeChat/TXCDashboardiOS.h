@interface TXCDashboardiOS : NSObject
{
    NSMutableDictionary * _dashboardInfo; // +0x8
    TXCDashboardFloatingBall * _floatingBall; // +0x10
    TXCDashboardLayoutView * _dashboardLayoutView; // +0x18
}
+ (void)destoryContainerInMainThread:(id)arg1;
- (id)init;
- (int)showDashboard:(BOOL)arg1;
- (int)addDashboard:(id)arg1;
- (int)removeDashboard:(id)arg1;
- (int)removeAllDashboard;
- (int)setDashboard:(id)arg1 status:(id)arg2;
- (int)appendDashboard:(id)arg1 log:(id)arg2;
- (void)createFloatingBall;
- (void)createDashboardLayoutView;
- (void)onClickFloatingBall;
- (void)runInMainThread:(id /* block */)arg1;
- (void)printLog:(id)arg1;
- (void)dealloc;
- (void)destoryContainer:(id)arg1;
- (id)dashboardInfo;
- (void)setDashboardInfo:(id)arg1;
- (id)floatingBall;
- (void)setFloatingBall:(id)arg1;
- (id)dashboardLayoutView;
- (void)setDashboardLayoutView:(id)arg1;
- (void).cxx_destruct;
@end

