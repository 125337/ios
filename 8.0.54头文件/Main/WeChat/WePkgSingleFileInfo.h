@interface WePkgSingleFileInfo : MMObject <PBCoding>
{
    unsigned int _downloadNetworkType; // +0x8
    unsigned int _sizeInBytes; // +0xc
    NSString * _rid; // +0x10
    NSString * _mimeType; // +0x18
    NSString * _md5; // +0x20
    NSString * _downloadUrl; // +0x28
}
+ (void)PBArrayAdd_rid;
+ (void)PBArrayAdd_mimeType;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_downloadUrl;
+ (void)PBArrayAdd_downloadNetworkType;
+ (void)PBArrayAdd_sizeInBytes;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)rid;
- (void)setRid:(id)arg1;
- (id)mimeType;
- (void)setMimeType:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg1;
- (unsigned int)downloadNetworkType;
- (void)setDownloadNetworkType:(unsigned int)arg1;
- (unsigned int)sizeInBytes;
- (void)setSizeInBytes:(unsigned int)arg1;
- (void).cxx_destruct;
@end

