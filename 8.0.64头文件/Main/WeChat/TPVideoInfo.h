@interface TPVideoInfo : NSObject
{
    long long _width; // +0x8
    long long _height; // +0x10
    long long _videoCodecId; // +0x18
    NSString * _downloadFileID; // +0x20
    NSArray * _downloadParamDataArray; // +0x28
}
+ (id)build:(id /* block */)arg1;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (long long)videoCodecId;
- (void)setVideoCodecId:(long long)arg1;
- (id)downloadFileID;
- (void)setDownloadFileID:(id)arg1;
- (id)downloadParamDataArray;
- (void)setDownloadParamDataArray:(id)arg1;
- (void).cxx_destruct;
@end
