@interface WAJSEventHandler_loadVideoResource : WAJSEventHandler_BaseEvent <ICdnComMgrExt>
{
    NSMutableDictionary * _dicDownloadingURL; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void).cxx_destruct;
@end
