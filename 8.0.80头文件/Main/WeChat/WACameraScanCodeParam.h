@interface WACameraScanCodeParam : NSObject
{
    BOOL _isHideAlbumBtn; // +0x8
    long long _codeType; // +0x10
    NSString * _descStr; // +0x18
    NSString * _payCodeReportJsapiName; // +0x20
    NSString * _payCodeReportSourceId; // +0x28
    long long _payCodeReportNeedResult; // +0x30
}
- (long long)codeType;
- (void)setCodeType:(long long)arg1;
- (id)descStr;
- (void)setDescStr:(id)arg1;
- (BOOL)isHideAlbumBtn;
- (void)setIsHideAlbumBtn:(BOOL)arg1;
- (id)payCodeReportJsapiName;
- (void)setPayCodeReportJsapiName:(id)arg1;
- (id)payCodeReportSourceId;
- (void)setPayCodeReportSourceId:(id)arg1;
- (long long)payCodeReportNeedResult;
- (void)setPayCodeReportNeedResult:(long long)arg1;
- (void).cxx_destruct;
@end
