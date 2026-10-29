@interface BusiF2FFavorCommResp : WXPBGeneratedMessage
+ (id)GenFromDictionary:(id)arg1;
+ (id)composeInfoWithArray:(id)arg1 SelectedArray:(id)arg2;
+ (BOOL)favor:(id)arg1 InArray:(id)arg2;
+ (id)sortComposeArray:(id)arg1;
+ (void)initialize;
- (BOOL)isFakeResp;
- (void)updateFakeBit:(BOOL)arg1;
- (id)composeInfoDefault;
- (id)composeInfoWithId:(id)arg1;
- (id)composeArrayWithFavor:(id)arg1;
@end
