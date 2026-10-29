@interface WCPayBindNewCardSwitch : NSObject <PBCoding>
{
    long long _forbid_bind_card; // +0x8
    NSString * _forbid_word; // +0x10
}
+ (void)PBArrayAdd_forbid_bind_card;
+ (void)PBArrayAdd_forbid_word;
+ (void)initialize;
+ (id)GenFromDictionary:(id)arg1;
- (id)getPBPropertyTable;
- (void)genFromDic:(id)arg1;
- (long long)forbid_bind_card;
- (void)setForbid_bind_card:(long long)arg1;
- (id)forbid_word;
- (void)setForbid_word:(id)arg1;
- (void).cxx_destruct;
@end
