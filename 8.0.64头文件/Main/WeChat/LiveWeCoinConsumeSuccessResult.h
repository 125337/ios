@interface LiveWeCoinConsumeSuccessResult : NSObject
{
    NSNumber * _balance; // +0x8
}
+ (id)makeWithBalance:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)balance;
- (void)setBalance:(id)arg1;
- (void).cxx_destruct;
@end
