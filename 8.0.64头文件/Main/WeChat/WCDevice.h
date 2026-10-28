@interface WCDevice : NSObject <WCTTableCoding>
{
    NSString * m_deviceType; // +0x8
    NSString * m_deviceID; // +0x10
    NSString * m_usrname; // +0x18
    NSString * m_deviceName; // +0x20
    long long m_DID; // +0x28
    NSString * m_mac; // +0x30
    NSString * m_md5Str; // +0x38
    NSString * m_connProto; // +0x40
    unsigned int m_connStrategy; // +0x48
    unsigned int m_closeStrategy; // +0x4c
    int m_manuDataMacOffset; // +0x50
    int m_serNumMacOffset; // +0x54
    WCDeviceExtData * m_extData; // +0x58
    NSDictionary * m_externalInfoJSONCache; // +0x60
    unsigned int IntRes1; // +0x68
    unsigned int IntRes2; // +0x6c
    NSString * StrRes1; // +0x70
    NSString * StrRes2; // +0x78
    NSString * _PLACE_HOLDER; // +0x80
    MMIotDeviceExtInfo * _iotExtraInfo; // +0x88
}
+ (BOOL)hasBoundValidDevices;
+ (BOOL)hasILinkDevice;
+ (BOOL)canShowSettingDeviceEntry;
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)m_deviceType;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_m_deviceType;
+ (const void *)m_deviceID;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_m_deviceID;
+ (const void *)m_usrname;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_m_usrname;
+ (const void *)m_deviceName;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_m_deviceName;
+ (const void *)m_DID;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_m_DID;
+ (const void *)m_mac;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_m_mac;
+ (const void *)m_md5Str;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_m_md5Str;
+ (const void *)m_connProto;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_m_connProto;
+ (const void *)m_connStrategy;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_m_connStrategy;
+ (const void *)m_closeStrategy;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_m_closeStrategy;
+ (const void *)m_manuDataMacOffset;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_m_manuDataMacOffset;
+ (const void *)m_serNumMacOffset;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_m_serNumMacOffset;
+ (const void *)IntRes1;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_IntRes1;
+ (const void *)IntRes2;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_IntRes2;
+ (const void *)StrRes1;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_StrRes1;
+ (const void *)StrRes2;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (id)swift_StrRes2;
- (BOOL)hasAbility:(id)arg1;
- (BOOL)isValidDevice;
- (BOOL)supportMsg:(id)arg1;
- (id)getExternalInfoDictionary;
- (id)getDeviceSupportUrls;
- (BOOL)canApplyURL:(id)arg1;
- (BOOL)isSubLanDevice;
- (id)subDeviceMd5;
- (id)subDevices;
- (id)ownerDevice;
- (id)init;
- (BOOL)isBluetoohDevice;
- (BOOL)isEADevice;
- (BOOL)isBLEDevice;
- (BOOL)isWifiDevice;
- (BOOL)isM7Device;
- (BOOL)isBleSimpleDev;
- (BOOL)isPedometerDev;
- (BOOL)isContinueConnectWhenExit;
- (BOOL)isConnectOnceInChatView;
- (BOOL)isAlwaysConnectInChatView;
- (BOOL)isIgnoreInChatView;
- (void)setupDataFromDB;
- (void)setupDataBeforeWriteDB;
- (id)deviceDisplayTitle;
- (id)deviceDisplayIconUrl;
- (id)deviceMacNumber;
- (id)description;
- (id)m_deviceType;
- (void)setM_deviceType:(id)arg1;
- (id)m_deviceID;
- (void)setM_deviceID:(id)arg1;
- (id)m_usrname;
- (void)setM_usrname:(id)arg1;
- (id)m_deviceName;
- (void)setM_deviceName:(id)arg1;
- (long long)m_DID;
- (void)setM_DID:(long long)arg1;
- (id)m_mac;
- (void)setM_mac:(id)arg1;
- (id)m_md5Str;
- (void)setM_md5Str:(id)arg1;
- (id)m_connProto;
- (void)setM_connProto:(id)arg1;
- (unsigned int)m_connStrategy;
- (void)setM_connStrategy:(unsigned int)arg1;
- (unsigned int)m_closeStrategy;
- (void)setM_closeStrategy:(unsigned int)arg1;
- (int)m_manuDataMacOffset;
- (void)setM_manuDataMacOffset:(int)arg1;
- (int)m_serNumMacOffset;
- (void)setM_serNumMacOffset:(int)arg1;
- (unsigned int)IntRes1;
- (void)setIntRes1:(unsigned int)arg1;
- (unsigned int)IntRes2;
- (void)setIntRes2:(unsigned int)arg1;
- (id)StrRes1;
- (void)setStrRes1:(id)arg1;
- (id)StrRes2;
- (void)setStrRes2:(id)arg1;
- (id)m_extData;
- (void)setM_extData:(id)arg1;
- (id)m_externalInfoJSONCache;
- (void)setM_externalInfoJSONCache:(id)arg1;
- (id)PLACE_HOLDER;
- (void)setPLACE_HOLDER:(id)arg1;
- (id)iotExtraInfo;
- (void)setIotExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end
