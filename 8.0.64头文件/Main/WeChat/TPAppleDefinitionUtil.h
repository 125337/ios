@interface TPAppleDefinitionUtil : NSObject
{
    NSMutableDictionary * _playerDefinitionMap; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)addDefinitionMapNodeWithLevel:(int)arg1 definition:(int)arg2 width:(long long)arg3 height:(long long)arg4;
- (long long)getWidthByDefLevel:(int)arg1;
- (long long)getHeightByDefLevel:(int)arg1;
- (int)getDefinitionByDefLevel:(int)arg1;
- (id)playerDefinitionMap;
- (void)setPlayerDefinitionMap:(id)arg1;
- (void).cxx_destruct;
@end
