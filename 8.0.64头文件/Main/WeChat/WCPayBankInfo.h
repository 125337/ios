@interface WCPayBankInfo : NSObject <PBCoding>
{
    NSString * _bind_serial; // +0x8
    NSString * _polling_forbid_word; // +0x10
}
+ (void)PBArrayAdd_bind_serial;
+ (void)PBArrayAdd_polling_forbid_word;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)bind_serial;
- (void)setBind_serial:(id)arg1;
- (id)polling_forbid_word;
- (void)setPolling_forbid_word:(id)arg1;
- (void).cxx_destruct;
@end
