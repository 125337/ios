@interface MMFinderLiveFunctionSwitchFlags : NSObject
{
    unsigned long long _rawFlags; // +0x8
}
- (void)updateWithRawFlags:(unsigned long long)arg1;
- (BOOL)giveBlueGiftNeedSignUserAgreement;
- (void)setGiveBlueGiftNeedSignUserAgreement:(BOOL)arg1;
- (unsigned long long)rawFlags;
- (void)setRawFlags:(unsigned long long)arg1;
@end
