@interface WXGRoamHalfScreenView : MMPageSheetBaseView
{
    MMUILabel * m_titleLabel; // +0x8
    MMUILabel * m_subTitleLabel; // +0x10
    BOOL _isCloseDetail; // +0x18
    BOOL _isEnterFromList; // +0x19
    BOOL _enterIsAutoBackup; // +0x1a
    BOOL _enterIsLowPowerBackup; // +0x1b
    UIView * _autoBackupView; // +0x20
    UIView * _autoBackupExtraView; // +0x28
    UILabel * _autoTitle; // +0x30
    UILabel * _autoPauseTips; // +0x38
    UISwitch * _lowPowerBtn; // +0x40
    UISwitch * _autoBackupBtn; // +0x48
    UISwitch * _mobileNetBtn; // +0x50
    double _cellHeight; // +0x58
}
- (id)init;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)setupAutoBackupView;
- (id)getDeviceName;
- (void)setupAutoView;
- (void)updateAutoView;
- (void)switchAutoBackup;
- (void)switchMobileNet;
- (void)switchLowPower;
- (BOOL)isCloseDetail;
- (void)setIsCloseDetail:(BOOL)arg1;
- (BOOL)isEnterFromList;
- (void)setIsEnterFromList:(BOOL)arg1;
- (id)autoBackupView;
- (void)setAutoBackupView:(id)arg1;
- (id)autoBackupExtraView;
- (void)setAutoBackupExtraView:(id)arg1;
- (id)autoTitle;
- (void)setAutoTitle:(id)arg1;
- (id)autoPauseTips;
- (void)setAutoPauseTips:(id)arg1;
- (id)lowPowerBtn;
- (void)setLowPowerBtn:(id)arg1;
- (id)autoBackupBtn;
- (void)setAutoBackupBtn:(id)arg1;
- (id)mobileNetBtn;
- (void)setMobileNetBtn:(id)arg1;
- (BOOL)enterIsAutoBackup;
- (void)setEnterIsAutoBackup:(BOOL)arg1;
- (BOOL)enterIsLowPowerBackup;
- (void)setEnterIsLowPowerBackup:(BOOL)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (void).cxx_destruct;
@end

