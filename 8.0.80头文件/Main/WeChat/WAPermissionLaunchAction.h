@interface WAPermissionLaunchAction : NSObject <PBCoding, WCTColumnCoding>
{
    BOOL _isUpdateHistoryList; // +0x8
    unsigned int _actionCode; // +0xc
    NSString * _openURL; // +0x10
    NSString * _alertMsg; // +0x18
    NSString * _alertTitle; // +0x20
    NSString * _migrateTargetAppid; // +0x28
    NSString * _retryPageShowMsg; // +0x30
}
+ (void)PBArrayAdd_actionCode;
+ (void)PBArrayAdd_openURL;
+ (void)PBArrayAdd_isUpdateHistoryList;
+ (void)PBArrayAdd_alertMsg;
+ (void)PBArrayAdd_alertTitle;
+ (void)PBArrayAdd_migrateTargetAppid;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)description;
- (unsigned int)actionCode;
- (void)setActionCode:(unsigned int)arg1;
- (id)openURL;
- (void)setOpenURL:(id)arg1;
- (BOOL)isUpdateHistoryList;
- (void)setIsUpdateHistoryList:(BOOL)arg1;
- (id)alertMsg;
- (void)setAlertMsg:(id)arg1;
- (id)alertTitle;
- (void)setAlertTitle:(id)arg1;
- (id)migrateTargetAppid;
- (void)setMigrateTargetAppid:(id)arg1;
- (id)retryPageShowMsg;
- (void)setRetryPageShowMsg:(id)arg1;
- (void).cxx_destruct;
@end
