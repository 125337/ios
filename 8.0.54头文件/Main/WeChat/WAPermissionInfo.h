@interface WAPermissionInfo : NSObject <WCTTableCoding>
{
    BOOL _showThirdBusiTips; // +0x8
    unsigned int _requestType; // +0xc
    WAPublicResInfo * pubResInfo; // +0x10
    NSString * _appID; // +0x18
    NSData * _permissionBytes; // +0x20
    WAPermissionWeAppBindInfo * _weAppBindInfo; // +0x28
    WAPermissionLaunchAction * _launchAction; // +0x30
    WAPermissionActionSheetInfo * _actionSheetInfo; // +0x38
    WAPermissionLaunchRuntimeInfo * _runtimeInfo; // +0x40
    WAStatePermissionBytes * _statePermissionBytes; // +0x48
    NSString * _permissionJsonStr; // +0x50
    NSString * _username; // +0x58
    NSString * _opConfig; // +0x60
    unsigned long long _expirationTime; // +0x68
    NSString * _openId; // +0x70
    long long _updateCostTime; // +0x78
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)appID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_appID;
+ (const void *)permissionBytes;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_permissionBytes;
+ (const void *)weAppBindInfo;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_weAppBindInfo;
+ (const void *)launchAction;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_launchAction;
+ (const void *)actionSheetInfo;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_actionSheetInfo;
+ (const void *)statePermissionBytes;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_statePermissionBytes;
+ (const void *)permissionJsonStr;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_permissionJsonStr;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_username;
+ (const void *)opConfig;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_opConfig;
+ (const void *)expirationTime;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_expirationTime;
+ (const void *)openId;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_openId;
+ (const void *)runtimeInfo;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_runtimeInfo;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (void)__wcdb_index_13:(void *)arg1;
- (id)description;
- (id)pubResInfo;
- (void)setPubResInfo:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)permissionBytes;
- (void)setPermissionBytes:(id)arg1;
- (id)weAppBindInfo;
- (void)setWeAppBindInfo:(id)arg1;
- (id)launchAction;
- (void)setLaunchAction:(id)arg1;
- (id)actionSheetInfo;
- (void)setActionSheetInfo:(id)arg1;
- (id)runtimeInfo;
- (void)setRuntimeInfo:(id)arg1;
- (id)statePermissionBytes;
- (void)setStatePermissionBytes:(id)arg1;
- (id)permissionJsonStr;
- (void)setPermissionJsonStr:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)requestType;
- (void)setRequestType:(unsigned int)arg1;
- (id)opConfig;
- (void)setOpConfig:(id)arg1;
- (unsigned long long)expirationTime;
- (void)setExpirationTime:(unsigned long long)arg1;
- (id)openId;
- (void)setOpenId:(id)arg1;
- (long long)updateCostTime;
- (void)setUpdateCostTime:(long long)arg1;
- (BOOL)showThirdBusiTips;
- (void)setShowThirdBusiTips:(BOOL)arg1;
- (void).cxx_destruct;
@end

