@interface QBBeaconRequestPackage : NSObject
{
    char platformId; // +0x8
    char encryType; // +0x9
    char zipType; // +0xa
    int cmd; // +0xc
    int _eventCnt; // +0x10
    NSString * appkey; // +0x18
    NSString * appVersion; // +0x20
    NSString * sdkId; // +0x28
    NSString * sdkVersion; // +0x30
    id <QBBeaconAnaNSObjTransToJceBufferProtocol> sBuffer; // +0x38
    NSString * osVer; // +0x40
    NSString * model; // +0x48
    NSString * reserved; // +0x50
}
+ (id)initWithData:(id)arg1 cmd:(int)arg2 sBuffer:(id)arg3;
- (id)createWUPModel;
- (void)dealloc;
- (void).cxx_destruct;
- (char)platformId;
- (void)setPlatformId:(char)arg1;
- (char)encryType;
- (void)setEncryType:(char)arg1;
- (char)zipType;
- (void)setZipType:(char)arg1;
- (id)appkey;
- (void)setAppkey:(id)arg1;
- (id)appVersion;
- (void)setAppVersion:(id)arg1;
- (id)sdkId;
- (void)setSdkId:(id)arg1;
- (id)sdkVersion;
- (void)setSdkVersion:(id)arg1;
- (int)cmd;
- (void)setCmd:(int)arg1;
- (id)sBuffer;
- (void)setSBuffer:(id)arg1;
- (id)osVer;
- (void)setOsVer:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (id)reserved;
- (void)setReserved:(id)arg1;
- (int)eventCnt;
- (void)setEventCnt:(int)arg1;
@end
