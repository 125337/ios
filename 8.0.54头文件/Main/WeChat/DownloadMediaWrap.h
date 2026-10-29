@interface DownloadMediaWrap : NSObject
{
    WCMediaItem * mediaItem; // +0x8
    long long downloadType; // +0x10
    NSString * downloadID; // +0x18
    NSString * downloadMd5; // +0x20
    BOOL isDownloading; // +0x28
    UIImage * resultImage; // +0x30
    long long requestType; // +0x38
}
+ (id)getDownloadID:(id)arg1 downloadType:(long long)arg2;
- (id)initWithMediaItem:(id)arg1 downloadType:(long long)arg2;
- (id)downloadID;
- (id)downloadMd5;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (long long)downloadType;
- (void)setDownloadType:(long long)arg1;
- (BOOL)isDownloading;
- (void)setIsDownloading:(BOOL)arg1;
- (id)resultImage;
- (void)setResultImage:(id)arg1;
- (long long)requestType;
- (void)setRequestType:(long long)arg1;
- (void).cxx_destruct;
@end

