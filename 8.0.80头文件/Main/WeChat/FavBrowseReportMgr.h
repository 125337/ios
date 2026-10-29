@interface FavBrowseReportMgr : MMUserService <MMUIViewControllerExt, MMServiceProtocol>
{
    BOOL m_needClickStream; // +0x8
    NSMutableArray * m_arrClickStreamData; // +0x10
    BOOL m_needAttachBrowseData; // +0x18
    FavBrowseDetailData * _currentBrowseData; // +0x20
    FavOpenResultData * _currentOpenResultData; // +0x28
}
+ (id)findScrollVeiwIn:(id)arg1;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)setCurrentBrowseData:(id)arg1;
- (void)adaptBrowseDetailReportForVC:(id)arg1;
- (void)startLogFavClickStream;
- (void)addClickStreamData:(id)arg1;
- (void)endLogAndReport15508;
- (void)adaptClickStreamReportForVC:(id)arg1;
- (void)reportOpenResult:(long long)arg1 failReason:(long long)arg2 loadingTimeMs:(long long)arg3;
- (id)currentBrowseData;
- (id)currentOpenResultData;
- (void)setCurrentOpenResultData:(id)arg1;
- (void).cxx_destruct;
@end
