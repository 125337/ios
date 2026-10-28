@interface HearingAidResourceManager : NSObject
+ (void)startDownload;
+ (BOOL)isResourceReady;
+ (BOOL)isProcessed;
+ (BOOL)isDownloaded;
+ (id)resourcePath:(id)arg1;
@end
