@interface WCCDNImageView : MMUIImageView
{
    BOOL _downloading; // +0x8
    int _fileType; // +0xc
    NSString * _fileUrl; // +0x10
    NSString * _aeskey; // +0x18
    NSString * _filePath; // +0x20
}
- (void)setDefaultImage:(id)arg1;
- (void)setFileUrl:(id)arg1 aesk:(id)arg2 fileType:(int)arg3 filePath:(id)arg4;
- (void)checkImageData;
- (void)startDownload;
- (BOOL)downloading;
- (void)setDownloading:(BOOL)arg1;
- (id)fileUrl;
- (void)setFileUrl:(id)arg1;
- (id)aeskey;
- (void)setAeskey:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (int)fileType;
- (void)setFileType:(int)arg1;
- (void).cxx_destruct;
@end
