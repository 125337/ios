@interface MMCDNImageView : MMUIImageView <ICdnComMgrExt, AppStandardContentExternalLoadImageView>
{
    UIImage * _defaultImage; // +0x8
    NSString * _localSrcPath; // +0x10
    NSString * _cdnUrl; // +0x18
    NSString * _aesKey; // +0x20
    unsigned long long _datasize; // +0x28
    NSString * _clientID; // +0x30
    NSString * _derivedImagePath; // +0x38
    CGSize _derivedImageTargetSize; // +0x40
    double _derivedImageCompressionQuality; // +0x50
    unsigned int _favDownloadConcurrentCount; // +0x58
    unsigned int _fileType; // +0x5c
    BOOL _isCompressImage; // +0x60
    BOOL _loadImageAsynchronously; // +0x61
    BOOL _isloaded; // +0x62
    BOOL _autoDownloadNoWifi; // +0x63
    BOOL _isClipImage; // +0x64
    BOOL _isFromC2C; // +0x65
    NSString * _localSrcTmpPath; // +0x68
    unsigned long long _loadGeneration; // +0x70
    BOOL _isAsyncLoading; // +0x78
}
+ (id)decodeWxamToJpgDataFromData:(id)arg1;
- (void)setDefaultImage:(id)arg1;
- (void)setLocalSrcPath:(id)arg1;
- (id)derivedImagePath;
- (void)setDerivedImagePath:(id)arg1;
- (id)compressImage:(id)arg1;
- (id)clipImage:(id)arg1 withData:(id)arg2;
- (void)setImage:(id)arg1;
- (void)loadImageAsynchronouslyIfNeeded;
- (void)loadDerivedImageIfNeeded;
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
- (CGSize)derivedImageTargetSize;
- (void)setDerivedImageTargetSize:(CGSize)arg1;
- (double)derivedImageCompressionQuality;
- (void)setDerivedImageCompressionQuality:(double)arg1;
- (unsigned int)favDownloadConcurrentCount;
- (void)setFavDownloadConcurrentCount:(unsigned int)arg1;
- (unsigned int)fileType;
- (void)setFileType:(unsigned int)arg1;
- (BOOL)isCompressImage;
- (void)setIsCompressImage:(BOOL)arg1;
- (BOOL)loadImageAsynchronously;
- (void)setLoadImageAsynchronously:(BOOL)arg1;
- (BOOL)autoDownloadNoWifi;
- (void)setAutoDownloadNoWifi:(BOOL)arg1;
- (BOOL)isClipImage;
- (void)setIsClipImage:(BOOL)arg1;
- (BOOL)isFromC2C;
- (void)setIsFromC2C:(BOOL)arg1;
- (id)clientID;
- (void)setClientID:(id)arg1;
- (void).cxx_destruct;
@end
