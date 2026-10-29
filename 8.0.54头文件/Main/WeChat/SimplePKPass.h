@interface SimplePKPass : NSObject
{
    BOOL _isRemotePass; // +0x8
    BOOL _isInStation; // +0x9
    BOOL _isBlacklisted; // +0xa
    unsigned int _passActivationState; // +0xc
    NSString * _primaryAccountIdentifier; // +0x10
    NSString * _primaryAccountNumberSuffix; // +0x18
    NSString * _deviceAccountIdentifier; // +0x20
    NSString * _deviceAccountNumberSuffix; // +0x28
    NSString * _devicePassIdentifier; // +0x30
    NSString * _pairedTerminalIdentifier; // +0x38
    NSDecimalNumber * _transitBalance; // +0x40
    NSString * _transitBalanceCurrencyCode; // +0x48
    NSDate * _expirationDate; // +0x50
}
- (id)initWithPKPass:(id)arg1 withBalance:(BOOL)arg2;
- (id)primaryAccountIdentifier;
- (void)setPrimaryAccountIdentifier:(id)arg1;
- (id)primaryAccountNumberSuffix;
- (void)setPrimaryAccountNumberSuffix:(id)arg1;
- (id)deviceAccountIdentifier;
- (void)setDeviceAccountIdentifier:(id)arg1;
- (id)deviceAccountNumberSuffix;
- (void)setDeviceAccountNumberSuffix:(id)arg1;
- (unsigned int)passActivationState;
- (void)setPassActivationState:(unsigned int)arg1;
- (id)devicePassIdentifier;
- (void)setDevicePassIdentifier:(id)arg1;
- (id)pairedTerminalIdentifier;
- (void)setPairedTerminalIdentifier:(id)arg1;
- (BOOL)isRemotePass;
- (void)setIsRemotePass:(BOOL)arg1;
- (id)transitBalance;
- (void)setTransitBalance:(id)arg1;
- (id)transitBalanceCurrencyCode;
- (void)setTransitBalanceCurrencyCode:(id)arg1;
- (BOOL)isInStation;
- (void)setIsInStation:(BOOL)arg1;
- (BOOL)isBlacklisted;
- (void)setIsBlacklisted:(BOOL)arg1;
- (id)expirationDate;
- (void)setExpirationDate:(id)arg1;
- (void).cxx_destruct;
@end

