@interface CBTCoopV2CommNativeItem : NSObject
{
    NSString * _name; // +0x8
    NSString * _iconURL; // +0x10
    NSString * _type; // +0x18
    NSString * _targetLiteAppID; // +0x20
    NSString * _targetLiteAppPage; // +0x28
    NSString * _targetLiteAppQuery; // +0x30
    NSString * _afterAddLiteAppPage; // +0x38
    NSString * _afterAddLiteAppQuery; // +0x40
    NSString * _llmPrompt; // +0x48
    NSString * _targetWeAppID; // +0x50
    NSString * _targetWeAppPage; // +0x58
    NSString * _targetWeAppPlayLoad; // +0x60
    NSString * _debugMode; // +0x68
}
- (BOOL)canOpen;
- (id)name;
- (void)setName:(id)arg1;
- (id)iconURL;
- (void)setIconURL:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)targetLiteAppID;
- (void)setTargetLiteAppID:(id)arg1;
- (id)targetLiteAppPage;
- (void)setTargetLiteAppPage:(id)arg1;
- (id)targetLiteAppQuery;
- (void)setTargetLiteAppQuery:(id)arg1;
- (id)afterAddLiteAppPage;
- (void)setAfterAddLiteAppPage:(id)arg1;
- (id)afterAddLiteAppQuery;
- (void)setAfterAddLiteAppQuery:(id)arg1;
- (id)llmPrompt;
- (void)setLlmPrompt:(id)arg1;
- (id)targetWeAppID;
- (void)setTargetWeAppID:(id)arg1;
- (id)targetWeAppPage;
- (void)setTargetWeAppPage:(id)arg1;
- (id)targetWeAppPlayLoad;
- (void)setTargetWeAppPlayLoad:(id)arg1;
- (id)debugMode;
- (void)setDebugMode:(id)arg1;
- (void).cxx_destruct;
@end
