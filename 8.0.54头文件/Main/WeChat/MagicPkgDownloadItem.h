@interface MagicPkgDownloadItem : NSObject
{
    unsigned int _responseState; // +0x8
    unsigned int _packageType; // +0xc
    unsigned int _networkType; // +0x10
    unsigned int _fileSize; // +0x14
    unsigned int _errorCode; // +0x18
    NSString * _cdnUrl; // +0x20
    NSString * _fileMd5; // +0x28
    NSString * _patchId; // +0x30
    NSString * _packageID; // +0x38
    NSString * _patchApkMd5; // +0x40
    NSString * _baseApkMd5; // +0x48
    NSString * _clientVersion; // +0x50
    NSString * _originalName; // +0x58
}
- (unsigned int)responseState;
- (void)setResponseState:(unsigned int)arg1;
- (unsigned int)packageType;
- (void)setPackageType:(unsigned int)arg1;
- (unsigned int)networkType;
- (void)setNetworkType:(unsigned int)arg1;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (id)fileMd5;
- (void)setFileMd5:(id)arg1;
- (id)patchId;
- (void)setPatchId:(id)arg1;
- (unsigned int)fileSize;
- (void)setFileSize:(unsigned int)arg1;
- (unsigned int)errorCode;
- (void)setErrorCode:(unsigned int)arg1;
- (id)packageID;
- (void)setPackageID:(id)arg1;
- (id)patchApkMd5;
- (void)setPatchApkMd5:(id)arg1;
- (id)baseApkMd5;
- (void)setBaseApkMd5:(id)arg1;
- (id)clientVersion;
- (void)setClientVersion:(id)arg1;
- (id)originalName;
- (void)setOriginalName:(id)arg1;
- (void).cxx_destruct;
@end

