@interface SightSettingStatusReportService : MMUserService <MMServiceProtocol>
{
    MemoryMappedKV * _settingImageVideoStatusReportMappedKV; // +0x8
}
- (void)onServiceAfterInit;
- (void)onServiceClearData;
- (void)reportSettingImageVideoStatusIfNeeded;
- (id)settingImageVideoStatusReportMappedKV;
- (void)setSettingImageVideoStatusReportMappedKV:(id)arg1;
- (void).cxx_destruct;
@end
