@interface WAJSEventHandler_openRedPacketEditPage : WAJSEventHandler_BaseEvent <WCFinderVideoDownLoadMgrExt, WCFinderRedPacketVideoEditViewControllerDelegate>
{
    NSString * _currentDownloadFeedId; // +0x8
    long long _minSeconds; // +0x10
    long long _maxSeconds; // +0x18
    WCFinderRedPacketVideoEditResponseParams * _responseParams; // +0x20
}
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;
- (BOOL)targetDataItemHasVideoPath:(id)arg1;
- (void)presentRedPacketVideoEditViewControllerFromDataItem:(id)arg1;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (void)finderMediaVideoDownloadQueueChange;
- (void)finderMediaVideoStreamDownloadFailedWithTid:(id)arg1;
- (void)backFailAction;
- (void)onRedPacketEditResponse:(id)arg1;
- (void)onRedPacketEditCancel;
- (id)currentDownloadFeedId;
- (void)setCurrentDownloadFeedId:(id)arg1;
- (long long)minSeconds;
- (void)setMinSeconds:(long long)arg1;
- (long long)maxSeconds;
- (void)setMaxSeconds:(long long)arg1;
- (id)responseParams;
- (void)setResponseParams:(id)arg1;
- (void).cxx_destruct;
@end
