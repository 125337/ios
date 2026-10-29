@interface MoreViewControllerReporter : NSObject <WCSessionFlowMonitorExt, IExptServiceExt>
{
    BOOL m_init; // +0x8
    BOOL m_isAppearing; // +0x9
    BOOL m_exptFlag; // +0xa
    WCTableViewManager * m_tableViewMgr; // +0x10
    NSMutableSet * m_sectionSet; // +0x18
    NSMutableDictionary * m_finderRedDotMaps; // +0x20
    MoreViewControllerReportInfo * m_reportInfo; // +0x28
    MoreTabRedDotInfo * m_mytabReddot; // +0x30
    MoreVcSectionRedDotProvider * m_reddotProvider; // +0x38
    MoreViewControllerBussReporter * m_bussReporter; // +0x40
}
- (id)init;
- (void)dealloc;
- (void)reset;
- (BOOL)needReport;
- (void)readExptConfig;
- (void)onExptItemListChange;
- (void)initRedDotProvider;
- (void)hookMoreViewController:(id)arg1 andTableView:(id)arg2;
- (id)checkToGetMyTabRedDotInfo;
- (void)enterMoreViewControllerTopVcPage:(id)arg1 andPageId:(unsigned long long)arg2;
- (void)onMoreViewControllerWillAppear;
- (void)onEnterForeground;
- (void)exitMoreViewControllerTopVcPage:(id)arg1 andPageId:(unsigned long long)arg2;
- (void)onMoreViewControllerDidDisappear;
- (void)onEnterBackground;
- (void)onMoreViewControllerAppear;
- (void)onMoreViewControllerWillDisappear;
- (void)onMoreViewControllerDidSelectIndexPath:(id)arg1 andCell:(id)arg2 andSection:(id)arg3;
- (void)onMoreViewControllerReload;
- (void)checkAllSection;
- (void)getRedDotInfo:(id)arg1 andPathKey:(id)arg2 andConfig:(id)arg3;
- (BOOL)initWCAopVc:(id)arg1;
- (void).cxx_destruct;
@end
