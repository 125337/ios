@interface WXLaunchMiniProgramReq : BaseReq
{
    NSString * userName; // +0x18
    NSString * path; // +0x20
    unsigned long long _miniProgramType; // +0x28
    NSString * _extMsg; // +0x30
    NSDictionary * _extDic; // +0x38
}
+ (id)object;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned long long)miniProgramType;
- (void)setMiniProgramType:(unsigned long long)arg1;
- (id)extMsg;
- (void)setExtMsg:(id)arg1;
- (id)extDic;
- (void)setExtDic:(id)arg1;
- (void).cxx_destruct;
@end

