@interface WebviewLocalResItem : MMObject <PBCoding>
{
    NSString * _localResId; // +0x8
    NSString * _savePath; // +0x10
    NSString * _svrId; // +0x18
    NSString * _appId; // +0x20
    NSString * _cdnUrl; // +0x28
    NSString * _cdnAESKey; // +0x30
    unsigned int _fileSize; // +0x38
    NSString * _mediaType; // +0x40
    NSString * _fileExt; // +0x48
    BOOL _needMediaId; // +0x50
    BOOL _bNeedStorage; // +0x51
    int _appType; // +0x54
    NSString * _fileUrl; // +0x58
}
+ (void)PBArrayAdd_localResId;
+ (void)PBArrayAdd_savePath;
+ (void)PBArrayAdd_svrId;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_cdnUrl;
+ (void)PBArrayAdd_cdnAESKey;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_fileExt;
+ (void)PBArrayAdd_fileUrl;
+ (void)PBArrayAdd_needMediaId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)localResId;
- (void)setLocalResId:(id)arg1;
- (id)savePath;
- (void)setSavePath:(id)arg1;
- (id)svrId;
- (void)setSvrId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (id)cdnAESKey;
- (void)setCdnAESKey:(id)arg1;
- (unsigned int)fileSize;
- (void)setFileSize:(unsigned int)arg1;
- (id)mediaType;
- (void)setMediaType:(id)arg1;
- (id)fileExt;
- (void)setFileExt:(id)arg1;
- (id)fileUrl;
- (void)setFileUrl:(id)arg1;
- (BOOL)needMediaId;
- (void)setNeedMediaId:(BOOL)arg1;
- (BOOL)bNeedStorage;
- (void)setBNeedStorage:(BOOL)arg1;
- (int)appType;
- (void)setAppType:(int)arg1;
- (void).cxx_destruct;
@end
