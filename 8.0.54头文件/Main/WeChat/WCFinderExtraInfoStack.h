@interface WCFinderExtraInfoStack : NSObject
{
    NSString * _jsonValue; // +0x8
    NSDictionary * _dictValue; // +0x10
    NSMutableArray * _appendedInfos; // +0x18
}
- (void)flush;
- (id)mapInfoDict;
- (id)insertExtraInfo:(id)arg1;
- (void)iterAllTokens:(id /* block */)arg1;
- (id)jsonValue;
- (void)setJsonValue:(id)arg1;
- (id)dictValue;
- (void)setDictValue:(id)arg1;
- (id)appendedInfos;
- (void)setAppendedInfos:(id)arg1;
- (void).cxx_destruct;
@end

