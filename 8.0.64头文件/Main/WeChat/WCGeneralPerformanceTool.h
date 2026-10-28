@interface WCGeneralPerformanceTool : NSObject
{
    NSMutableDictionary * _statDict; // +0x8
}
+ (id)sharedInstance;
+ (id)descriptDictOfScene;
+ (void)reportEventToScene:(unsigned long long)arg1 params:(id)arg2;
+ (BOOL)updateVoiceInputParams:(id)arg1 dict:(id)arg2;
+ (void)reportEventForScene:(unsigned long long)arg1;
+ (void)addKey:(id)arg1 object:(id)arg2 forScene:(unsigned long long)arg3;
+ (void)addTimestampForKey:(id)arg1 forScene:(unsigned long long)arg2;
- (id)init;
- (void)addKey:(id)arg1 object:(id)arg2 forScene:(unsigned long long)arg3;
- (void)addTimestampForKey:(id)arg1 forScene:(unsigned long long)arg2;
- (void)removeStatDictOfScene:(unsigned long long)arg1;
- (id)statDictOfScene:(unsigned long long)arg1;
- (id)statDict;
- (void)setStatDict:(id)arg1;
- (void).cxx_destruct;
@end
