@interface FunctionCallInternalInput : NSObject
{
    NSString * _functionName; // +0x8
    NSString * _moduleName; // +0x10
    NSDictionary * _arguments; // +0x18
    id _callInput; // +0x20
    ChatBotVoIPSession * _voipSession; // +0x28
}
- (id)init;
- (id)functionName;
- (void)setFunctionName:(id)arg1;
- (id)moduleName;
- (void)setModuleName:(id)arg1;
- (id)arguments;
- (void)setArguments:(id)arg1;
- (id)callInput;
- (void)setCallInput:(id)arg1;
- (id)voipSession;
- (void)setVoipSession:(id)arg1;
- (void).cxx_destruct;
@end
