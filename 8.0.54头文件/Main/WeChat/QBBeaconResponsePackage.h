@interface QBBeaconResponsePackage : NSObject
{
    char result; // +0x8
    char encryType; // +0x9
    char zipType; // +0xa
    int cmd; // +0xc
    long long serverTime; // +0x10
    NSObject * sBuffer; // +0x18
    NSString * gateWayIp; // +0x20
    NSString * encKey; // +0x28
    NSString * encPubKey; // +0x30
}
+ (id)initWithWUPModel:(id)arg1;
+ (id)modelObjectWithCmd:(unsigned long long)arg1 data:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (char)result;
- (void)setResult:(char)arg1;
- (int)cmd;
- (void)setCmd:(int)arg1;
- (long long)serverTime;
- (void)setServerTime:(long long)arg1;
- (id)sBuffer;
- (void)setSBuffer:(id)arg1;
- (id)gateWayIp;
- (void)setGateWayIp:(id)arg1;
- (char)encryType;
- (void)setEncryType:(char)arg1;
- (char)zipType;
- (void)setZipType:(char)arg1;
- (id)encKey;
- (void)setEncKey:(id)arg1;
- (id)encPubKey;
- (void)setEncPubKey:(id)arg1;
@end

