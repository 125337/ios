@interface PrivacyAgreementResult : NSObject
{
    BOOL _agreed; // +0x8
    NSString * _nextAction; // +0x10
}
+ (id)makeWithAgreed:(BOOL)arg1 nextAction:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (BOOL)agreed;
- (void)setAgreed:(BOOL)arg1;
- (id)nextAction;
- (void)setNextAction:(id)arg1;
- (void).cxx_destruct;
@end
