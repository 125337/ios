@interface CUpdateInfo : NSObject <NSCoding, PBCoding>
{
    BOOL _m_bShowInSetting; // +0x8
    BOOL _m_bShowInTab; // +0x9
    BOOL _m_bSysNoticeShowInTab; // +0xa
    unsigned int _m_uiNewVersion; // +0xc
    unsigned int _m_uiLastShowAlertTime; // +0x10
    unsigned int _m_uiSysNoticeVersion; // +0x14
    unsigned int _m_uiSysNoticeCount; // +0x18
    unsigned int _m_uiNewVersionUpdateTime; // +0x1c
    NSString * _m_nsDescription; // +0x20
    NSString * _m_nsNewestVersionDescription; // +0x28
}
+ (void)PBArrayAdd_m_uiNewVersion;
+ (void)PBArrayAdd_m_nsDescription;
+ (void)PBArrayAdd_m_bShowInSetting;
+ (void)PBArrayAdd_m_bShowInTab;
+ (void)PBArrayAdd_m_uiLastShowAlertTime;
+ (void)PBArrayAdd_m_uiNewVersionUpdateTime;
+ (void)PBArrayAdd_m_uiSysNoticeVersion;
+ (void)PBArrayAdd_m_uiSysNoticeCount;
+ (void)PBArrayAdd_m_bSysNoticeShowInTab;
+ (void)PBArrayAdd_m_nsNewestVersionDescription;
+ (void)initialize;
+ (void)updateSysNotice:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)getPBPropertyTable;
- (unsigned int)m_uiNewVersion;
- (void)setM_uiNewVersion:(unsigned int)arg1;
- (id)m_nsDescription;
- (void)setM_nsDescription:(id)arg1;
- (BOOL)m_bShowInSetting;
- (void)setM_bShowInSetting:(BOOL)arg1;
- (BOOL)m_bShowInTab;
- (void)setM_bShowInTab:(BOOL)arg1;
- (BOOL)m_bSysNoticeShowInTab;
- (void)setM_bSysNoticeShowInTab:(BOOL)arg1;
- (unsigned int)m_uiLastShowAlertTime;
- (void)setM_uiLastShowAlertTime:(unsigned int)arg1;
- (unsigned int)m_uiSysNoticeVersion;
- (void)setM_uiSysNoticeVersion:(unsigned int)arg1;
- (unsigned int)m_uiSysNoticeCount;
- (void)setM_uiSysNoticeCount:(unsigned int)arg1;
- (unsigned int)m_uiNewVersionUpdateTime;
- (void)setM_uiNewVersionUpdateTime:(unsigned int)arg1;
- (id)m_nsNewestVersionDescription;
- (void)setM_nsNewestVersionDescription:(id)arg1;
- (void).cxx_destruct;
@end
