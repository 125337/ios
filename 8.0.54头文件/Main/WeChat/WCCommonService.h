@interface WCCommonService : MMUserService <MMServiceProtocol>
{
    WCSetting * _setting; // +0x8
}
- (BOOL)saveWCSetting:(id)arg1;
- (id)getWCSetting;
- (id)pathForWCSetting;
- (id)setting;
- (void)setSetting:(id)arg1;
- (void).cxx_destruct;
@end

