@interface VoipActionInfoObject : MMObject <PBCoding>
{
    BOOL _m_hasClickIgnoreCallOnce; // +0x8
    BOOL _m_hasClickVoiceMinimizeWithEarMode; // +0x9
    BOOL _m_hasClickVideoMinimize; // +0xa
    BOOL _m_hasShowEarDeviceUnPluginTips; // +0xb
}
+ (void)PBArrayAdd_m_hasClickIgnoreCallOnce;
+ (void)PBArrayAdd_m_hasClickVoiceMinimizeWithEarMode;
+ (void)PBArrayAdd_m_hasClickVideoMinimize;
+ (void)PBArrayAdd_m_hasShowEarDeviceUnPluginTips;
+ (void)initialize;
+ (id)Instance;
+ (id)getSaveRootDir;
+ (id)getSavePath;
- (id)getPBPropertyTable;
- (id)init;
- (void)saveToFile;
- (BOOL)m_hasClickIgnoreCallOnce;
- (void)setM_hasClickIgnoreCallOnce:(BOOL)arg1;
- (BOOL)m_hasClickVoiceMinimizeWithEarMode;
- (void)setM_hasClickVoiceMinimizeWithEarMode:(BOOL)arg1;
- (BOOL)m_hasClickVideoMinimize;
- (void)setM_hasClickVideoMinimize:(BOOL)arg1;
- (BOOL)m_hasShowEarDeviceUnPluginTips;
- (void)setM_hasShowEarDeviceUnPluginTips:(BOOL)arg1;
@end

