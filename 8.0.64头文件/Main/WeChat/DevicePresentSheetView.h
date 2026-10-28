@interface DevicePresentSheetView : MMAutoLayoutSheetView <ScrollItemSelectionDelegate, IWCLanDeviceMsgForwardMgrExt>
{
    BOOL _didAppendDeviceView; // +0x8
    CMessageWrap * _messageWrap; // +0x10
    NSArray * _lanDevices; // +0x18
    NSMutableArray * _privateDevices; // +0x20
    NSMutableArray * _publicDevices; // +0x28
    DevicePresentCollectionView * _oldDeviceView; // +0x30
}
- (id)initWithMessageWrap:(id)arg1;
- (void)dealloc;
- (void)initConfigs;
- (void)initData;
- (void)initView;
- (void)showSectionWithTitle:(id)arg1 type:(long long)arg2;
- (void)showNavitgateSection:(BOOL)arg1;
- (BOOL)hasAvailableDevice;
- (id)titleLabel:(id)arg1;
- (void)onNearbyCellClicked;
- (id)filteredDevicesOf:(long long)arg1;
- (id)privateDevices;
- (id)publicDevices;
- (id)unfoldedItemsFrom:(id)arg1 maxCount:(long long)arg2;
- (id)foldedItemsFrom:(id)arg1 maxCount:(long long)arg2;
- (void)onSelectItem:(id)arg1;
- (void)onWCLanDeviceFoundDeviceListUpdated:(id)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (id)lanDevices;
- (void)setLanDevices:(id)arg1;
- (void)setPrivateDevices:(id)arg1;
- (void)setPublicDevices:(id)arg1;
- (id)oldDeviceView;
- (void)setOldDeviceView:(id)arg1;
- (BOOL)didAppendDeviceView;
- (void)setDidAppendDeviceView:(BOOL)arg1;
- (void).cxx_destruct;
@end
