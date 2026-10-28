@interface C2CH265HardEncDevice2CprRate : NSObject
{
    int _cprrate; // +0x8
    int _version; // +0xc
    NSString * _device; // +0x10
}
- (id)desc;
- (int)version;
- (BOOL)isMatchDevice;
- (BOOL)isiPhoneModelMatch:(int)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (int)cprrate;
- (void)setCprrate:(int)arg1;
- (void)setVersion:(int)arg1;
- (void).cxx_destruct;
@end
