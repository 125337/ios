@interface ImageUploadTaskProcessor : ImageUploadProcessor <MessageCommonUploaderDelegate>
{
    BOOL _isFileIdReplaceCdnHitChecked; // +0x8
    BOOL _isThumbCompressChecked; // +0x9
    long long _thumbSize; // +0x10
    SingleFileDeduplicateResponse * _fileDeduplicateResponse; // +0x18
    MMAsset * _asset; // +0x20
    MessageCommonUploader * _uploader; // +0x28
    ImageMsgDataDownloader * _downloader; // +0x30
    NSMutableArray * _arrFileInfo; // +0x38
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
- (BOOL)tryCompressThumbImage;
- (void)startDownloadFavFile;
- (void)startDownloadImage;
- (BOOL)tryDownloadImageData;
- (void)tryCalPdqhash;
- (BOOL)tryGenerateMiddleImage;
- (void)tryConvertHEICToJpg;
- (BOOL)tryEncodePicToWxAM;
- (void)uploadImageData;
- (BOOL)tryStartReplaceFileIdCdnHitCheck;
- (void)startReplaceFileIdCdnHitCheck;
- (void)onReplaceFileIdCdnHitCheckComplete:(id)arg1 response:(id)arg2;
- (void)writeFileId:(id)arg1;
- (void)calMD5WhenHitCdnCache;
- (id)getUploadImagePath;
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
- (void)writeCdnInfoToMsgWrap:(id)arg1;
- (void)onCdnUploadComplete:(id)arg1;
- (void)onUploadFail:(int)arg1;
- (void)onUploadFail:(int)arg1 isCanRetry:(BOOL)arg2;
- (void)messageUploaderSuccess:(id)arg1 result:(id)arg2;
- (void)asyncCalcLiveVideoMd5:(id /* block */)arg1;
- (void)messageUploaderFailure:(id)arg1 uploadId:(id)arg2;
- (void)messageUploaderProgress:(id)arg1 progress:(double)arg2;
- (void)setThumbSize:(long long)arg1;
- (id)fileDeduplicateResponse;
- (void)setFileDeduplicateResponse:(id)arg1;
- (BOOL)isFileIdReplaceCdnHitChecked;
- (void)setIsFileIdReplaceCdnHitChecked:(BOOL)arg1;
- (BOOL)isThumbCompressChecked;
- (void)setIsThumbCompressChecked:(BOOL)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (void)setUploader:(id)arg1;
- (id)downloader;
- (void)setDownloader:(id)arg1;
- (id)arrFileInfo;
- (void)setArrFileInfo:(id)arg1;
- (void).cxx_destruct;
@end
