@interface iAPUnVerifyTransaction : NSObject <PBCoding>
{
    unsigned int _uiTransactionDate; // +0x8
    NSString * _nsProductIdentifier; // +0x10
    NSData * _dtReceipt; // +0x18
}
+ (void)PBArrayAdd_nsProductIdentifier;
+ (void)PBArrayAdd_dtReceipt;
+ (void)PBArrayAdd_uiTransactionDate;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)nsProductIdentifier;
- (void)setNsProductIdentifier:(id)arg1;
- (id)dtReceipt;
- (void)setDtReceipt:(id)arg1;
- (unsigned int)uiTransactionDate;
- (void)setUiTransactionDate:(unsigned int)arg1;
- (void).cxx_destruct;
@end

