@interface WeDropEventSharedData : MMObject
{
    MigrateMsgUserInfo * _userInfoSelf; // +0x8
    WeDropReportObj * _reportObj; // +0x10
}
- (id)init;
- (id)devReportObj;
- (id)userInfoSelf;
- (void)setUserInfoSelf:(id)arg1;
- (id)reportObj;
- (void)setReportObj:(id)arg1;
- (void).cxx_destruct;
@end
