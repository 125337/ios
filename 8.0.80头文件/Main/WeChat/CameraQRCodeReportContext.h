@interface CameraQRCodeReportContext : NSObject
{
    unsigned int _enterSessionID; // +0x8
    unsigned int _enterScene; // +0xc
    unsigned int _mixedSwitchValue; // +0x10
    unsigned long long _enterSession1970Ts; // +0x18
}
- (id)initWithScanQRCodeLogicParams:(id)arg1;
- (unsigned long long)enterSession1970Ts;
- (void)setEnterSession1970Ts:(unsigned long long)arg1;
- (unsigned int)enterSessionID;
- (void)setEnterSessionID:(unsigned int)arg1;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (unsigned int)mixedSwitchValue;
- (void)setMixedSwitchValue:(unsigned int)arg1;
@end
