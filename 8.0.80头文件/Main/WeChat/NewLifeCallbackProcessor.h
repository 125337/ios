@interface NewLifeCallbackProcessor : NSObject
{
    NSMutableDictionary * _command2CallbackGenerator; // +0x8
    NSMutableDictionary * _command2ApiList; // +0x10
}
+ (Class)generatorClassForCommand:(id)arg1;
- (id)init;
- (void)registerCommonApi:(id)arg1 forCommandList:(id)arg2;
- (void)unregisterCommonApi:(id)arg1 forCommandList:(id)arg2;
- (void)unregisterCommonApiForAllCommands:(id)arg1;
- (id)generatorForCommand:(id)arg1;
- (id)createGeneratorForCommand:(id)arg1;
- (id)command2CallbackGenerator;
- (void)setCommand2CallbackGenerator:(id)arg1;
- (id)command2ApiList;
- (void)setCommand2ApiList:(id)arg1;
- (void).cxx_destruct;
@end
