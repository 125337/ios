@interface WCPlayerDownloaderTaskBlock : NSObject
{
    id /* block */ _progressBlock; // +0x8
    id /* block */ _moovReadyBlock; // +0x10
    id /* block */ _m3u8ReadyBlock; // +0x18
    id /* block */ _downloadCompleteBlock; // +0x20
}
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;
- (id /* block */)moovReadyBlock;
- (void)setMoovReadyBlock:(id /* block */)arg1;
- (id /* block */)m3u8ReadyBlock;
- (void)setM3u8ReadyBlock:(id /* block */)arg1;
- (id /* block */)downloadCompleteBlock;
- (void)setDownloadCompleteBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
