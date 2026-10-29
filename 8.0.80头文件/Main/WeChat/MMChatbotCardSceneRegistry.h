@interface MMChatbotCardSceneRegistry : NSObject
{
    BOOL _initialized; // +0x8
    NSMutableDictionary * _builders; // +0x10
    NSMutableArray * _order; // +0x18
}
+ (id)sharedInstance;
- (id)init;
- (void)registerScene:(id)arg1 builder:(id /* block */)arg2;
- (id /* block */)builderForScene:(id)arg1;
- (id)debugListScenes;
- (void)ensureInitialized;
- (id)builders;
- (void)setBuilders:(id)arg1;
- (id)order;
- (void)setOrder:(id)arg1;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg1;
- (void).cxx_destruct;
@end
