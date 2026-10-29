@interface MoreViewControllerBussReporter : NSObject <WCSessionFlowMonitorExt>
{
    MoreViewControllerReportInfo * m_info; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)exitMoreViewController:(id)arg1;
- (void)resetInfo;
- (void)onEnterBackground;
- (void)onAppearPage:(id)arg1 withVC:(id)arg2 withHashCode:(unsigned long long)arg3;
- (void)report:(unsigned int)arg1;
- (void).cxx_destruct;
@end
