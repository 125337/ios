@interface WtloginPlatformInfo : NSObject
{
    NSString * macAddr; // +0x8
    NSString * ipStr; // +0x10
    unsigned int clientIp; // +0x18
    NSString * devType; // +0x20
    NSString * iosVer; // +0x28
    NSString * osName; // +0x30
    char *[32] if_names; // +0x38
    char *[32] ip_names; // +0x138
    char *[32] hw_addrs; // +0x238
    unsigned long long[32] ip_addrs; // +0x338
    int nextAddr; // +0x438
    NSString * filePath; // +0x440
    NSMutableDictionary * wtloginConfigDic; // +0x448
    NSData * guid; // +0x450
    unsigned char cIsNew; // +0x458
    unsigned char cIsDiff; // +0x459
    unsigned char cIsGetGuid; // +0x45a
    unsigned char cGUIDSrc; // +0x45b
    unsigned char cReadFailFlag; // +0x45c
    unsigned char cDevChgFlag; // +0x45d
    SafeSingleItemWrapper * ksidWrapper; // +0x460
    MemSig * deviceSig; // +0x468
    unsigned int dwMyVer; // +0x470
    unsigned int dwMyPubNo; // +0x474
    unsigned int dwMyClientType; // +0x478
    NSString * sigFilePath; // +0x480
    NSMutableDictionary * sigDictionary; // +0x488
    RemortServerList * stServerinfo; // +0x490
    NSString * wtloginIosSdkVer; // +0x498
    NSString * wtloginBuildTime; // +0x4a0
    unsigned int wtloginBigVer; // +0x4a8
    int dwDiffTime; // +0x4ac
    unsigned int dwClientIP; // +0x4b0
}
+ (id)dataSafeFilePathWithName:(id)arg1;
+ (int)wtloginNetState;
+ (id)wtloginCrtCarrierName;
- (void)InitAddresses;
- (void)FreeAddresses;
- (void)GetIPAddresses;
- (void)GetHWAddresses;
- (id)macaddress;
- (void)genGuid;
- (id)getDeviceVersion;
- (BOOL)tryDecrypt:(id)arg1 byKey:(id)arg2 andOutData:(id)arg3;
- (id)init;
- (void)wtloginPlatformDataInit;
- (void)dealloc;
- (id)configObjectForKey:(id)arg1;
- (void)setConfigObject:(id)arg1 forKey:(id)arg2;
- (int)netState;
- (id)crtCarrierName;
- (id)tgtgtKeyFromKeyChain;
- (id)ksidFromKeyChain;
- (BOOL)setKsidToKeyChain:(id)arg1;
- (BOOL)setKsidToConfig:(id)arg1 forAccount:(id)arg2;
- (id)ksidForUser:(id)arg1;
- (void)resetKeyChain;
- (BOOL)setSavePwdSigToConfig:(id)arg1 forAccount:(unsigned int)arg2;
- (id)pwdSigUser:(unsigned int)arg1;
- (void)clearPwdSigUser:(unsigned int)arg1;
- (id)nameDictionary;
- (BOOL)setNameToConfig:(id)arg1 forUin:(unsigned int)arg2;
- (void)clearNameToUin:(id)arg1;
- (BOOL)setSigVailidateTime:(unsigned int)arg1 bySigType:(unsigned int)arg2;
- (unsigned int)sigVailidateBySigType:(unsigned int)arg1;
- (BOOL)resetLastLoginInfo;
- (unsigned int)lastLoginTime;
- (id)lastLoginSdkVer;
- (id)lastLoginAppVer;
- (id)appBundleShortVersionString;
- (id)appBundleVersion;
- (id)appMainBundleIndentify;
- (void)writeSigDataTofile;
- (void)_checkDevice;
- (id)ipStr;
- (id)iosVer;
- (id)devType;
- (id)macAddr;
- (unsigned int)clientIp;
- (id)osName;
- (id)guid;
- (unsigned char)cIsNew;
- (unsigned char)cIsDiff;
- (unsigned char)cIsGetGuid;
- (unsigned char)cGUIDSrc;
- (unsigned char)cReadFailFlag;
- (unsigned char)cDevChgFlag;
- (id)deviceSig;
- (void)setDeviceSig:(id)arg1;
- (unsigned int)dwMyVer;
- (void)setDwMyVer:(unsigned int)arg1;
- (unsigned int)dwMyPubNo;
- (void)setDwMyPubNo:(unsigned int)arg1;
- (unsigned int)dwMyClientType;
- (void)setDwMyClientType:(unsigned int)arg1;
- (id)sigDictionary;
- (id)stServerinfo;
- (id)wtloginIosSdkVer;
- (unsigned int)wtloginBigVer;
- (id)wtloginBuildTime;
- (int)dwDiffTime;
- (void)setDwDiffTime:(int)arg1;
- (unsigned int)dwClientIP;
- (void)setDwClientIP:(unsigned int)arg1;
@end

