@interface WCPayBankPriority : NSObject <PBCoding>
{
    NSArray * _bankinfo_array; // +0x8
}
+ (void)PBArrayAdd_bankinfo_array;
+ (void)initialize;
+ (BOOL)saveBankPriorityData:(id)arg1;
+ (id)getLocalBankPriorityData;
- (id)getPBPropertyTable;
- (id)bankinfo_array;
- (void)setBankinfo_array:(id)arg1;
- (void).cxx_destruct;
@end
