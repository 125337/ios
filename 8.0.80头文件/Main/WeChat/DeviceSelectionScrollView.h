@interface DeviceSelectionScrollView : MMScrollStack <MMIconItemDelegate>
{
    BOOL _privateDevicesHasMore; // +0x8
    BOOL _privateDevicesHasOthers; // +0x9
    BOOL _publicDevicesHasMore; // +0xa
    id <ScrollItemSelectionDelegate> _selectDelegate; // +0x10
    NSArray * _privateDevices; // +0x18
    NSArray * _publicDevices; // +0x20
}
- (id)initWithPrivateDevices:(id)arg1 privateDevicesHasMore:(BOOL)arg2 privateDevicesHasOthers:(BOOL)arg3 publicDevices:(id)arg4 publicDevicesHasMore:(BOOL)arg5 delegate:(id)arg6;
- (void)initView;
- (void)addOthersIcon;
- (void)addMoreIconView:(long long)arg1;
- (void)onItemClicked:(id)arg1;
- (id)selectDelegate;
- (void)setSelectDelegate:(id)arg1;
- (id)privateDevices;
- (void)setPrivateDevices:(id)arg1;
- (BOOL)privateDevicesHasMore;
- (void)setPrivateDevicesHasMore:(BOOL)arg1;
- (BOOL)privateDevicesHasOthers;
- (void)setPrivateDevicesHasOthers:(BOOL)arg1;
- (id)publicDevices;
- (void)setPublicDevices:(id)arg1;
- (BOOL)publicDevicesHasMore;
- (void)setPublicDevicesHasMore:(BOOL)arg1;
- (void).cxx_destruct;
@end
