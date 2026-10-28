@interface WebViewWebComVerifyInfo : MMObject
{
    unsigned int _taskReportId; // +0x8
    unsigned int _taskJsCtxReportId; // +0xc
    NSString * _name; // +0x10
    NSString * _resCdnUrl; // +0x18
    NSString * _resMd5; // +0x20
    NSString * _webComptConfigJson; // +0x28
}
- (id)description;
- (id)name;
- (void)setName:(id)arg1;
- (id)resCdnUrl;
- (void)setResCdnUrl:(id)arg1;
- (id)resMd5;
- (void)setResMd5:(id)arg1;
- (unsigned int)taskReportId;
- (void)setTaskReportId:(unsigned int)arg1;
- (unsigned int)taskJsCtxReportId;
- (void)setTaskJsCtxReportId:(unsigned int)arg1;
- (id)webComptConfigJson;
- (void)setWebComptConfigJson:(id)arg1;
- (void).cxx_destruct;
@end
