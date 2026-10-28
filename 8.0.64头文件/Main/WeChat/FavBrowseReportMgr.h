@interface FavBrowseReportMgr : MMUserService <MMUIViewControllerExt, MMServiceProtocol>
{
    BOOL m_needClickStream; // +0x8
    NSMutableArray * m_arrClickStreamData; // +0x10
    BOOL m_needAttachBrowseData; // +0x18
    FavBrowseDetailData * _currentBrowseData; // +0x20
}
+ (id)findScrollVeiwIn:(id)arg1;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)setCurrentBrowseData:(id)arg1;
- (void)adaptBrowseDetailReportForVC:(id)arg1;
- (void)startLogFavClickStream;
- (void)addClickStreamData:(id)arg1;
- (void)endLogAndReport15508;
- (void)adaptClickStreamReportForVC:(id)arg1;
- (id)currentBrowseData;
- (void).cxx_destruct;
@end
