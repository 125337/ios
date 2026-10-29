@interface ReportObj14229 : NSObject
{
    BOOL _isRange; // +0x8
    int _errorCode; // +0xc
    int _optType; // +0x10
    int _costTime; // +0x14
    int _fileSize; // +0x18
    NSString * _pkgId; // +0x20
    NSString * _pkgVersion; // +0x28
    NSDictionary * _extInfo; // +0x30
    NSString * _localVersion; // +0x38
}
+ (id)createFromDownloadInfo:(id)arg1;
- (id)init;
- (id)toLogExt;
- (id)pkgId;
- (void)setPkgId:(id)arg1;
- (id)pkgVersion;
- (void)setPkgVersion:(id)arg1;
- (BOOL)isRange;
- (void)setIsRange:(BOOL)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)localVersion;
- (void)setLocalVersion:(id)arg1;
- (int)optType;
- (void)setOptType:(int)arg1;
- (int)costTime;
- (void)setCostTime:(int)arg1;
- (int)fileSize;
- (void)setFileSize:(int)arg1;
- (void).cxx_destruct;
@end

