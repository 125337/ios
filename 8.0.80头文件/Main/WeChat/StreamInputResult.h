@interface StreamInputResult : MMObject
{
    NSMutableDictionary * _results; // +0x8
}
+ (id)filterVoiceTransResult:(id)arg1 withVoiceId:(id)arg2;
- (id)init;
- (void)UpdateVoiceTransResult:(id)arg1;
- (id)GetResultString;
- (id)sortSteamInputResult;
- (id)GetKeywordTimeResult;
- (id)results;
- (void)setResults:(id)arg1;
- (void).cxx_destruct;
@end
