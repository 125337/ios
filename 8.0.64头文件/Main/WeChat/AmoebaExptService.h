@interface AmoebaExptService : NSObject
+ (id)shareInstance;
- (id)getStrExpt:(id)arg1 withDef:(id)arg2;
- (long long)getIntExpt:(id)arg1 withDef:(long long)arg2;
- (BOOL)getBoolExpt:(id)arg1 withDef:(BOOL)arg2;
@end
