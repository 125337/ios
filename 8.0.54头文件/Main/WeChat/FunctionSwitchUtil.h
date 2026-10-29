@interface FunctionSwitchUtil : NSObject
+ (unsigned int)convertType:(unsigned int)arg1;
+ (BOOL)addSwitchOplog:(unsigned int)arg1 SwitchValue:(unsigned int)arg2 sync:(BOOL)arg3;
+ (void)setPluginSwitch:(unsigned int)arg1 statusBit:(unsigned int)arg2 setOpen:(BOOL)arg3 sync:(BOOL)arg4;
+ (void)setStatusSwitch:(unsigned int)arg1 statusBit:(unsigned int)arg2 setOpen:(BOOL)arg3 sync:(BOOL)arg4;
+ (void)setExtStatusSwitch:(unsigned int)arg1 statusBit:(unsigned long long)arg2 setOpen:(BOOL)arg3 sync:(BOOL)arg4;
+ (void)setFinderLiveExtSwitch:(unsigned int)arg1 statusBit:(unsigned long long)arg2 setOpen:(BOOL)arg3 sync:(BOOL)arg4;
+ (void)setFinderSettingSwitch:(unsigned long long)arg1 open:(BOOL)arg2 sync:(BOOL)arg3;
+ (void)setExtStatusSwitchInvertedAtServer:(unsigned int)arg1 statusBit:(unsigned long long)arg2 setClose:(BOOL)arg3 sync:(BOOL)arg4;
+ (BOOL)addModPushSwitchOplog:(unsigned int)arg1 SwitchValue:(unsigned int)arg2 sync:(BOOL)arg3;
+ (void)setModPushExtStatusSwitch:(unsigned int)arg1 statusBit:(unsigned long long)arg2 setOpen:(BOOL)arg3 sync:(BOOL)arg4;
+ (void)setStatusExt2Switch:(unsigned int)arg1 statusBit:(unsigned long long)arg2 setOpen:(BOOL)arg3 sync:(BOOL)arg4;
+ (void)setStatusExt2Switch:(unsigned int)arg1 statusBit:(unsigned long long)arg2 setOpen:(BOOL)arg3 sync:(BOOL)arg4 insertDB:(BOOL)arg5;
@end

