@interface WAReportMPShortLinkSnapShotMapItem : WAReportBaseItem
{
    NSString * _mpShortLink; // +0x8
    NSString * _snapshotCDNUrl; // +0x10
    NSString * _currentPathQuery; // +0x18
    NSString * _currentPageTitle; // +0x20
}
- (int)reportID;
- (id)reportString;
- (id)mpShortLink;
- (void)setMpShortLink:(id)arg1;
- (id)snapshotCDNUrl;
- (void)setSnapshotCDNUrl:(id)arg1;
- (id)currentPathQuery;
- (void)setCurrentPathQuery:(id)arg1;
- (id)currentPageTitle;
- (void)setCurrentPageTitle:(id)arg1;
- (void).cxx_destruct;
@end
