@interface WCMyDeviceCell : MMTableViewCell
{
    BOOL _isInited; // +0x8
    NSString * _iconUrl; // +0x10
    NSString * _deviceName; // +0x18
    MMDeviceHeadImageView * _headImageView; // +0x20
    UILabel * _deviceNameLbl; // +0x28
    UILabel * _deviceDetailLbl; // +0x30
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initCell;
- (void)setIconUrl:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceName:(id)arg1 detail:(id)arg2;
- (void)setDefaultIcon:(id)arg1;
- (id)iconUrl;
- (id)deviceName;
- (BOOL)isInited;
- (void)setIsInited:(BOOL)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)deviceNameLbl;
- (void)setDeviceNameLbl:(id)arg1;
- (id)deviceDetailLbl;
- (void)setDeviceDetailLbl:(id)arg1;
- (void).cxx_destruct;
@end
