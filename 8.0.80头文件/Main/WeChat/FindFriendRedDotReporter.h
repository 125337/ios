@interface FindFriendRedDotReporter : NSObject <WCSessionFlowMonitorExt, IExptServiceExt>
{
    long long m_exptFlag; // +0x8
    SessionReportInfo * m_reportInfo; // +0x10
    FindFriendBussReporter * m_bussReporter; // +0x18
    NSMutableDictionary * m_providers; // +0x20
    BOOL m_init; // +0x28
    MMMainTableView * m_tableView; // +0x30
    void * m_mapSectionType; // +0x38
    void * m_mapRowToRowTypeAlbum; // +0x40
    void * m_mapRowToRowTypeSocial; // +0x48
    void * m_mapRowToRowTypeMotion; // +0x50
    void * m_mapRowToRowTypeSearch; // +0x58
    void * m_mapRowToRowTypeOpen; // +0x60
    void * m_mapRowToRowTypeWCO; // +0x68
    void * m_mapRowToRowTypeAppBrand; // +0x70
    void * m_mapRowToRowTypeFinder; // +0x78
    NSMutableDictionary * m_cellCGRectCache; // +0x80
    NSMutableDictionary * m_cellExposeFlag; // +0x88
    NSMutableDictionary * m_flatMapCache; // +0x90
    BOOL m_isAppearing; // +0x98
    unsigned long long m_exposeType; // +0xa0
    unsigned long long m_checkExposeTimeMs; // +0xa8
}
- (id)init;
- (void)dealloc;
- (void)reset;
- (BOOL)needReport;
- (void)readExptConfig;
- (void)onExptItemListChange;
- (void)initProvider;
- (void)putCommonProvider:(unsigned long long)arg1 andPaths:(id)arg2;
- (void)put:(id)arg1 andEntryRowType:(unsigned long long)arg2;
- (void)setMapRowPointer:(void *)arg1 andSectionType:(unsigned long long)arg2;
- (void)setMTableView:(id)arg1 andMapRowPointer:(void *)arg2 andVC:(id)arg3;
- (id)checkToGetTabRedDotInfo;
- (void)enterFindFriendsTopVcPage:(id)arg1 andPageId:(unsigned long long)arg2;
- (void)onFindFriendEntryViewControllWillAppear;
- (void)onEnterForeground;
- (void)exitFindFriendsTopVcPage:(id)arg1 andPageId:(unsigned long long)arg2;
- (void)onFindFriendEntryViewControllDidDisappear;
- (void)onEnterBackground;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onFindFriendEntryViewControllAppear;
- (void)onFindFriendEntryViewControllWillDisappear;
- (void)onFindFriendEntryViewControllScrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onFindFriendEntryViewControllScrollViewDidEndDecelerating:(id)arg1;
- (void)onFindFriendEntryViewControllScrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getEntryRowType:(id)arg1;
- (void)getRedDotInfo:(id)arg1;
- (BOOL)checkEntryRowIsExpose:(id)arg1 andReason:(unsigned long long)arg2;
- (void)checkAllEntryRowsIsExpose:(unsigned long long)arg1;
- (id)getAllRowDataFromCache;
- (id)flatAllRowData;
- (BOOL)initWCAopVc:(id)arg1;
- (void).cxx_destruct;
@end
