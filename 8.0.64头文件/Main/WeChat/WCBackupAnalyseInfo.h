@interface WCBackupAnalyseInfo : NSObject <WCTTableCoding>
{
    unsigned long long _infoType; // +0x8
    double _occurTime; // +0x10
    NSString * _deviceName; // +0x18
    NSString * _infoString; // +0x20
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)infoType;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_infoType;
+ (const void *)occurTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_occurTime;
+ (const void *)deviceName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_deviceName;
+ (const void *)infoString;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_infoString;
- (id)description;
- (unsigned long long)infoType;
- (void)setInfoType:(unsigned long long)arg1;
- (double)occurTime;
- (void)setOccurTime:(double)arg1;
- (id)deviceName;
- (void)setDeviceName:(id)arg1;
- (id)infoString;
- (void)setInfoString:(id)arg1;
- (void).cxx_destruct;
@end
