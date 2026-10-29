@interface WCFinderModFeedSettingCGI : WCFinderBaseCgi
{
    BOOL _isSwitchOn; // +0x8
    int _settingScene; // +0xc
    int _oplogScene; // +0x10
    unsigned long long _feedID; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
    NSString * _userName; // +0x30
    NSString * _nonceID; // +0x38
}
- (id)initWithFeedID:(unsigned long long)arg1 nonceID:(id)arg2 userName:(id)arg3 isSwitchON:(BOOL)arg4 settingScene:(int)arg5 oplogScene:(int)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (id)defaultErrorMsg:(int)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)feedID;
- (void)setFeedID:(unsigned long long)arg1;
- (BOOL)isSwitchOn;
- (void)setIsSwitchOn:(BOOL)arg1;
- (int)settingScene;
- (void)setSettingScene:(int)arg1;
- (int)oplogScene;
- (void)setOplogScene:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (void).cxx_destruct;
@end

