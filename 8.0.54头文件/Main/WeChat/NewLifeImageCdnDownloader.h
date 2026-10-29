@interface NewLifeImageCdnDownloader : NSObject
+ (void)startDownload:(id)arg1 progressCallback:(id /* block */)arg2 endCallback:(id /* block */)arg3;
+ (void)cancelDownloadWithMediaId:(id)arg1;
@end

