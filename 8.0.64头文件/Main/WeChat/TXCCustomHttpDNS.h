@interface TXCCustomHttpDNS : NSObject
{
    BOOL _enableCustomHttpDNS; // +0x8
    id <TXCustomHttpDNSDelegate> _customHttpDNSDelegate; // +0x10
    NSMutableArray * _whiteHostArray; // +0x18
}
+ (id)sharedInstance;
- (id)parseAddressUseCustomHttpDNS:(id)arg1 httpMethod:(id)arg2;
- (void)enableCusomHttpDNS:(BOOL)arg1 httpDNSDelegate:(id)arg2;
- (void)onCustomHttpDNS:(id)arg1 ipList:(id)arg2;
- (BOOL)isInWhiteHost:(id)arg1;
- (BOOL)isEnableCustomHttpDNS;
- (BOOL)isIPAddress:(id)arg1;
- (id)getProtocolClasses;
- (void)setEnableCustomHttpDNS:(BOOL)arg1;
- (BOOL)enableCustomHttpDNS;
- (void)setCustomHttpDNSDelegate:(id)arg1;
- (id)customHttpDNSDelegate;
- (void)setWhiteHostArray:(id)arg1;
- (id)whiteHostArray;
- (BOOL)verifyCustomHttpDNS:(id)arg1 httpMethod:(id)arg2;
- (void).cxx_destruct;
@end
