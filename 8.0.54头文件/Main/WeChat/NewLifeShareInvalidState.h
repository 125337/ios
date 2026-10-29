@interface NewLifeShareInvalidState : NSObject
{
    int _code; // +0x8
    WCFinderGeneralJumpErrMsgModel * _spamInfo; // +0x10
    NSString * _nonExistInfo; // +0x18
    UINavigationController * _navigationController; // +0x20
    id /* block */ _completion; // +0x28
    NSString * _message; // +0x30
}
+ (id)stateFromCode:(int)arg1 message:(id)arg2;
+ (id)nonExistInfoFromCode:(int)arg1 message:(id)arg2;
+ (id)errorMessageModelFromMessage:(id)arg1;
- (void)updateLocalDataItemWithFeedId:(id)arg1;
- (void)handleInvalidState;
- (BOOL)handleJumpToWeb;
- (BOOL)handleJumpToLiteApp;
- (void)handleJumpToNativeNonExist:(id)arg1;
- (id)spamInfo;
- (void)setSpamInfo:(id)arg1;
- (id)nonExistInfo;
- (void)setNonExistInfo:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (int)code;
- (void)setCode:(int)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (void).cxx_destruct;
@end

