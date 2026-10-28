@interface WCSnsABTestInfo : NSObject
{
    ABTestItem * abtestItem; // +0x8
    NSString * language; // +0x10
    unsigned long long experType; // +0x18
    NSMutableDictionary * dicTipData; // +0x20
    WCSnsABTestTipData * firstTipData; // +0x28
}
- (id)init;
- (id)abtestItem;
- (void)setAbtestItem:(id)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (unsigned long long)experType;
- (void)setExperType:(unsigned long long)arg1;
- (id)dicTipData;
- (void)setDicTipData:(id)arg1;
- (id)firstTipData;
- (void)setFirstTipData:(id)arg1;
- (void).cxx_destruct;
@end
