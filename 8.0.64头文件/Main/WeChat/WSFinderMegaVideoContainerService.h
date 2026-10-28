@interface WSFinderMegaVideoContainerService : MMUserService <MMServiceProtocol>
{
    BOOL _isChangeTab; // +0x8
    NSString * _enterRedDotTipsUuid; // +0x10
    unsigned long long _pageEnterType; // +0x18
    NSString * _sourceFeedId; // +0x20
    WCFinderRedDotCtrlInfo * _finderCtrlInfo; // +0x28
    NSString * _lvCurrentContextID; // +0x30
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cleanReportInfo;
- (id)enterRedDotTipsUuid;
- (void)setEnterRedDotTipsUuid:(id)arg1;
- (unsigned long long)pageEnterType;
- (void)setPageEnterType:(unsigned long long)arg1;
- (id)sourceFeedId;
- (void)setSourceFeedId:(id)arg1;
- (BOOL)isChangeTab;
- (void)setIsChangeTab:(BOOL)arg1;
- (id)finderCtrlInfo;
- (void)setFinderCtrlInfo:(id)arg1;
- (id)lvCurrentContextID;
- (void)setLvCurrentContextID:(id)arg1;
- (void).cxx_destruct;
@end
