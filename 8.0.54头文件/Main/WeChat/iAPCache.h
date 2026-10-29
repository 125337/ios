@interface iAPCache : NSObject <PBCoding>
{
    NSMutableDictionary * dicProductToPrepare; // +0x8
    NSMutableDictionary * _dicBillNos; // +0x10
    NSMutableDictionary * _dicProductPrice; // +0x18
    NSMutableDictionary * _dicProductLocale; // +0x20
    NSMutableDictionary * _dicUnVerifyReceipt; // +0x28
}
+ (void)PBArrayAdd_dicBillNos;
+ (void)PBArrayAdd_dicProductPrice;
+ (void)PBArrayAdd_dicProductLocale;
+ (void)PBArrayAdd_dicUnVerifyReceipt;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)initProductDictionary;
- (void)initUnVerifyTransaction;
- (void)addProduct:(id)arg1;
- (id)productForProductID:(id)arg1;
- (id)priceForProductID:(id)arg1;
- (id)localeForProductID:(id)arg1;
- (id)UnVerifyTransactionForProductID:(id)arg1;
- (void)addUnverifyTransaction:(id)arg1;
- (void)removeUnverifyTransactionForProductID:(id)arg1;
- (id)dicBillNos;
- (void)setDicBillNos:(id)arg1;
- (id)dicProductPrice;
- (void)setDicProductPrice:(id)arg1;
- (id)dicProductLocale;
- (void)setDicProductLocale:(id)arg1;
- (id)dicUnVerifyReceipt;
- (void)setDicUnVerifyReceipt:(id)arg1;
- (void).cxx_destruct;
@end

