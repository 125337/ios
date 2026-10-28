@interface MMCDNImageView : MMUIImageView <ICdnComMgrExt>
{
    UIImage * _defaultImage; // +0x8
    NSString * _localSrcPath; // +0x10
    NSString * _cdnUrl; // +0x18
    NSString * _aesKey; // +0x20
    unsigned long long _datasize; // +0x28
    NSString * _clientID; // +0x30
    unsigned int _fileType; // +0x38
    BOOL _isCompressImage; // +0x3c
    BOOL _isloaded; // +0x3d
    BOOL _autoDownloadNoWifi; // +0x3e
    BOOL _isClipImage; // +0x3f
    BOOL _isFromC2C; // +0x40
    NSString * _localSrcTmpPath; // +0x48
}
- (void)setDefaultImage:(id)arg1;
- (void)setLocalSrcPath:(id)arg1;
- (id)compressImage:(id)arg1;
- (id)clipImage:(id)arg1 withData:(id)arg2;
- (void)loadingImageWithGCD;
- (BOOL)startLoadingImage;
- (void)stopLoadingImage;
- (void)OnCdnDownload:(id)arg1;
- (id)localSrcPath;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (unsigned long long)dataSize;
- (void)setDataSize:(unsigned long long)arg1;
- (unsigned int)fileType;
- (void)setFileType:(unsigned int)arg1;
- (BOOL)isCompressImage;
- (void)setIsCompressImage:(BOOL)arg1;
- (BOOL)autoDownloadNoWifi;
- (void)setAutoDownloadNoWifi:(BOOL)arg1;
- (BOOL)isClipImage;
- (void)setIsClipImage:(BOOL)arg1;
- (BOOL)isFromC2C;
- (void)setIsFromC2C:(BOOL)arg1;
- (void).cxx_destruct;
@end
