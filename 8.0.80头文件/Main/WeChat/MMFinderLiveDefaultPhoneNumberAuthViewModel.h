@interface MMFinderLiveDefaultPhoneNumberAuthViewModel : MMFinderLivePhoneNumberAuthViewModel
{
    int _opType; // +0x8
    NSString * _sessionID; // +0x10
    id /* block */ _onFinished; // +0x18
}
- (void)dealloc;
- (void)sendSMSCode:(id /* block */)arg1;
- (void)auth:(id /* block */)arg1;
- (int)opType;
- (void)setOpType:(int)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id /* block */)onFinished;
- (void)setOnFinished:(id /* block */)arg1;
- (void).cxx_destruct;
@end
