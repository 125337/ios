@interface LiveWeCoinBuyCoinParameter : NSObject
{
    NSNumber * _businessId; // +0x8
    LiveWeCoinBuyCoinModeBox * _consumeMode; // +0x10
    NSNumber * _diffWecoinCount; // +0x18
}
+ (id)makeWithBusinessId:(id)arg1 consumeMode:(id)arg2 diffWecoinCount:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)businessId;
- (void)setBusinessId:(id)arg1;
- (id)consumeMode;
- (void)setConsumeMode:(id)arg1;
- (id)diffWecoinCount;
- (void)setDiffWecoinCount:(id)arg1;
- (void).cxx_destruct;
@end
