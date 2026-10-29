@interface LiveWeCoinBuyCoinResult : NSObject
{
    LiveWeCoinBuyCoinResultStatusBox * _status; // +0x8
}
+ (id)makeWithStatus:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)status;
- (void)setStatus:(id)arg1;
- (void).cxx_destruct;
@end
