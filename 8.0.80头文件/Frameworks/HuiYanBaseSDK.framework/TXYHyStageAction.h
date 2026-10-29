@interface TXYHyStageAction : NSObject
{
    unsigned long long _key; // +0x8
    unsigned long long _state; // +0x10
    id /* block */ _finishBlock; // +0x18
}
- (id)initWithKey:(unsigned long long)arg1;
- (BOOL)runCheck;
- (void)run;
- (void)finish;
- (void)setState:(unsigned long long)arg1;
- (void)printStatusWithInfo:(id)arg1;
- (id)stageStatus:(unsigned long long)arg1;
- (id)stageNameByKey:(unsigned long long)arg1;
- (unsigned long long)key;
- (void)setKey:(unsigned long long)arg1;
- (unsigned long long)state;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
