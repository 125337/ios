@interface MMLiveQcPollQuestion : NSObject
{
    NSString * _questionId; // +0x8
    NSString * _uniqueKey; // +0x10
    unsigned long long _type; // +0x18
    NSString * _stem; // +0x20
    NSArray * _options; // +0x28
}
+ (id)questionWithId:(unsigned long long)arg1 fromBackendModels:(id)arg2;
- (id)questionId;
- (void)setQuestionId:(id)arg1;
- (id)uniqueKey;
- (void)setUniqueKey:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)stem;
- (void)setStem:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;
- (void).cxx_destruct;
@end
