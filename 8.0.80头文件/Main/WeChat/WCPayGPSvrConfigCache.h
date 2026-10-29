@interface WCPayGPSvrConfigCache : NSObject <PBCoding>
{
    BOOL _showSolitaireEntry; // +0x8
    unsigned int _aaMaxTotalNum; // +0xc
    unsigned int _aaMaxPayerNum; // +0x10
    unsigned int _aaMaxReceiverNum; // +0x14
    unsigned int _aaDefaultMod; // +0x18
    unsigned long long _aaMaxTotalAmount; // +0x20
    unsigned long long _aaMaxPerAmount; // +0x28
}
+ (void)PBArrayAdd_aaMaxTotalNum;
+ (void)PBArrayAdd_aaMaxTotalAmount;
+ (void)PBArrayAdd_aaMaxPerAmount;
+ (void)PBArrayAdd_aaMaxPayerNum;
+ (void)PBArrayAdd_aaMaxReceiverNum;
+ (void)PBArrayAdd_aaDefaultMod;
+ (void)PBArrayAdd_showSolitaireEntry;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)aaMaxTotalNum;
- (void)setAaMaxTotalNum:(unsigned int)arg1;
- (unsigned long long)aaMaxTotalAmount;
- (void)setAaMaxTotalAmount:(unsigned long long)arg1;
- (unsigned long long)aaMaxPerAmount;
- (void)setAaMaxPerAmount:(unsigned long long)arg1;
- (unsigned int)aaMaxPayerNum;
- (void)setAaMaxPayerNum:(unsigned int)arg1;
- (unsigned int)aaMaxReceiverNum;
- (void)setAaMaxReceiverNum:(unsigned int)arg1;
- (unsigned int)aaDefaultMod;
- (void)setAaDefaultMod:(unsigned int)arg1;
- (BOOL)showSolitaireEntry;
- (void)setShowSolitaireEntry:(BOOL)arg1;
@end
