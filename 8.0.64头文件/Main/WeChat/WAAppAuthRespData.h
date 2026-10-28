@interface WAAppAuthRespData : MMObject
{
    NSArray * _authInfoList; // +0x8
    WxaUseUserInfo * _useUserInfo; // +0x10
}
- (id)authInfoList;
- (void)setAuthInfoList:(id)arg1;
- (id)useUserInfo;
- (void)setUseUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
