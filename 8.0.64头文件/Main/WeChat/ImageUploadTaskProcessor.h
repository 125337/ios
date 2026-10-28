@interface ImageUploadTaskProcessor : ImageUploadProcessor <MessageCommonUploaderDelegate>
{
    long long _thumbSize; // +0x8
    MMAsset * _asset; // +0x10
    MessageCommonUploader * _uploader; // +0x18
    ImageMsgDataDownloader * _downloader; // +0x20
}
- (id)initWithMsgWrap:(id)arg1 context:(id)arg2;
- (long long)thumbSize;
- (id)uploader;
- (void)start;
- (void)stop;
- (void)compressMiddleVideoFromURL:(id)arg1;
- (void)exportHDLiveVideo;
- (id)getHDVideoCachePath:(id)arg1;
- (void)cleanPrivateInfo:(id)arg1;
- (BOOL)tryExportLiveVideo;
- (void)tryGenThumbImage;
- (void)startDownloadImage;
- (BOOL)tryDownloadImageData;
- (void)tryCalPdqhash;
- (BOOL)tryGenerateMiddleImage;
- (BOOL)tryEncodePicToWxAM;
- (void)uploadImageData;
- (void)uploadImageDataWithCgi;
- (void)uploadImageDataWithMars;
- (void)uploadWithDisableHitCheck;
- (C2CUploadRequest)generateUploadRequest;
- (void)fillLiveVideoInfo:(void *)arg1;
- (void)convertHeicToJpg;
- (BOOL)canAttachPrepareRequest;
- (BOOL)isNeedDownloadMsgData;
- (void)onCdnUploadProgress:(id)arg1;
- (id)getCdnFileInfo:(int)arg1;
- (void)onCdnUploadSucc:(id)arg1;
- (void)onCdnUploadComplete:(id)arg1;
- (void)onUploadFail:(int)arg1;
- (void)onUploadFail:(int)arg1 isCanRetry:(BOOL)arg2;
- (void)messageUploaderSuccess:(id)arg1 result:(id)arg2;
- (void)asyncCalcLiveVideoMd5:(id /* block */)arg1;
- (void)messageUploaderFailure:(id)arg1 uploadId:(id)arg2;
- (void)messageUploaderProgress:(id)arg1 progress:(double)arg2;
- (void)setThumbSize:(long long)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (void)setUploader:(id)arg1;
- (id)downloader;
- (void)setDownloader:(id)arg1;
- (void).cxx_destruct;
@end
