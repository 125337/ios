@interface TempEmoticonCDNDownloaderCallback : NSObject
{
    TempEmoticonCDNDownloaderDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(TempEmoticonCDNDownloaderDispatcherBridgeObjcImpl *)arg1;
- (void)onTempOnSingleEmoticonDownloadProgressEvent:(id)arg1 finishedLen:(int)arg2 totalLen:(int)arg3;
- (void)onTempOnSingleEmoticonDownloadResultEvent:(id)arg1 succeed:(BOOL)arg2;
@end
