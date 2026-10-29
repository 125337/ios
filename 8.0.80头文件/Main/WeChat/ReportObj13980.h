@interface ReportObj13980 : NSObject
{
    int _resultCode; // +0x8
    unsigned int _costTime; // +0xc
    NSString * _scene; // +0x10
    NSString * _url; // +0x18
    NSString * _pkgId; // +0x20
    NSString * _pkgVersion; // +0x28
    unsigned long long _beginTimeTemp; // +0x30
    NSDictionary * _extInfo; // +0x38
}
- (id)init;
- (id)toLogExt;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)pkgId;
- (void)setPkgId:(id)arg1;
- (id)pkgVersion;
- (void)setPkgVersion:(id)arg1;
- (int)resultCode;
- (void)setResultCode:(int)arg1;
- (unsigned long long)beginTimeTemp;
- (void)setBeginTimeTemp:(unsigned long long)arg1;
- (unsigned int)costTime;
- (void)setCostTime:(unsigned int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
