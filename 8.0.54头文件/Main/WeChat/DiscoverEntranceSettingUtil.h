@interface DiscoverEntranceSettingUtil : NSObject
+ (BOOL)ReddotEnabledForEntranceType:(unsigned long long)arg1;
+ (unsigned long long)CtrlFlagMaskForEntranceType:(unsigned long long)arg1;
+ (void)updateLocalReddotEableValueToServerIfNeed;
+ (void)setDiscoverEtranceSettingFlagMask:(unsigned long long)arg1 setOpen:(BOOL)arg2 sync:(BOOL)arg3;
+ (void)localSetDiscoverEtranceSettingFlagMask:(unsigned long long)arg1 setOpen:(BOOL)arg2;
+ (BOOL)enableShowFinderSwitch;
+ (BOOL)enableShowGameEntry;
+ (BOOL)enableShowWeappEntry;
+ (BOOL)shouldShowWeChatAuthorization;
+ (void)doKVReportForAction:(unsigned long long)arg1;
@end

