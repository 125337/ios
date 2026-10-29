@interface NewLifeCdnImageDownloadPlugin : NSObject <MMFlutterPlugin, NewLifeCdnDownloader>
{
    NewLifeCdnDownloaderCallback * _downloadCallback; // +0x8
}
+ (id)plugin;
+ (void)setup;
- (id)init;
- (void)dealloc;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)cancelCdnDownloadMediaId:(id)arg1 completion:(id /* block */)arg2;
- (void)startCdnDownloadReq:(id)arg1 completion:(id /* block */)arg2;
- (id)downloadCallback;
- (void)setDownloadCallback:(id)arg1;
- (void).cxx_destruct;
@end

