@interface _TtCC6WeChat17KaraFeatureCenter6Moment : _TtCC6WeChat17KaraFeatureCenter9Component <WCFacadeExt, _TtP6WeChat14IKaraMomentExt_, SessionSwitchExt>
{
     imageHistoryTable; // +0x70
     videoHistoryTable; // +0x78
     timelineSessionHistoryTable; // +0x80
     timelineSessionRecord; // +0x88
     _numberOfUnreadBeforeEnterTimeline; // +0x90
     _badgeBeforeEnterTimeline; // +0x98
}
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)userDidSeeFullScreenMoment:(id)arg1 media:(id)arg2 atDate:(id)arg3;
- (void)momentWillBeDownloaded:(id)arg1 atDate:(id)arg2;
- (void)onBeginDownload:(id)arg1 downloadType:(long long)arg2;
- (void)onSessionEnter:(id)arg1 withTime:(unsigned long long)arg2;
- (void)onSessionQuit:(id)arg1 withTime:(unsigned long long)arg2;
@end
