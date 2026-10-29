@interface BaseFastListHandler : NSObject <FastListHandler>
{
    NSArray * _rules; // +0x8
}
- (id)init;
- (id)getDynamicRulesOnScene:(int)arg1;
- (id)requiredFilePathList;
- (id)cachedFilePathList;
- (int)requiredBizType;
- (int)cachedType;
- (void)dumpPathList:(id)arg1 PathList:(id)arg2;
- (id)rules;
- (void)setRules:(id)arg1;
- (void).cxx_destruct;
@end
