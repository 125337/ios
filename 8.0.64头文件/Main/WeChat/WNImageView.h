@interface WNImageView : MMWebImageView <IFavCdnDownloadMgrExt, IRecordDownloadExt>
{
    BOOL _isThumb; // +0x11
    NSString * localSrcPath; // +0x18
    NSString * cdnUrl; // +0x20
    unsigned long long dataSize; // +0x28
    id <WNImageViewDelegate> delegate; // +0x30
    NSString * _dataId; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)getCompressImageWithPath:(id)arg1;
- (BOOL)startLoadingImage;
- (void)forceLoadImage;
- (void)loadingImageWithGCD;
- (void)stopLoadingImage;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (id)localSrcPath;
- (void)setLocalSrcPath:(id)arg1;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (unsigned long long)dataSize;
- (void)setDataSize:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataId;
- (void)setDataId:(id)arg1;
- (BOOL)isThumb;
- (void)setIsThumb:(BOOL)arg1;
- (void).cxx_destruct;
@end
