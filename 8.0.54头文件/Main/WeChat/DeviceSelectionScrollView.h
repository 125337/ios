@interface DeviceSelectionScrollView : MMScrollStack <MMIconItemDelegate>
{
    id <ScrollItemSelectionDelegate> _selectDelegate; // +0x8
    NSArray * _deviceArray; // +0x10
}
- (id)initWithDevices:(id)arg1 delegate:(id)arg2 hasMore:(BOOL)arg3 hasOthers:(BOOL)arg4;
- (void)initView;
- (void)addOthersIcon;
- (void)addMoreIconView;
- (void)onItemClicked:(id)arg1;
- (id)selectDelegate;
- (void)setSelectDelegate:(id)arg1;
- (id)deviceArray;
- (void)setDeviceArray:(id)arg1;
- (void).cxx_destruct;
@end

