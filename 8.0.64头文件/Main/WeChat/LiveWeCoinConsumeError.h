@interface LiveWeCoinConsumeError : NSObject
{
    LiveWeCoinConsumeErrorTypeBox * _type; // +0x8
}
+ (id)makeWithType:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)type;
- (void)setType:(id)arg1;
- (void).cxx_destruct;
@end
