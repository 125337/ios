@interface WAJSContextPlugin_GlobalState : WAJSContextPluginBase
{
    NSMutableDictionary * _dicState; // +0x8
}
- (id)init;
- (void)setGlobalStateWithKey:(id)arg1 value:(id)arg2;
- (id)getGlobalStateValueWithKey:(id)arg1;
- (id)dicState;
- (void)setDicState:(id)arg1;
- (void).cxx_destruct;
@end
