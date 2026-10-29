@interface WAMediaCastingRoutePickerViewModel : NSObject
{
    BOOL _isSearching; // +0x8
    id <WAMediaCastingRoutePickerViewModelDelegate> _delegate; // +0x10
    WAMediaCastingRoutePickerDeviceItem * _airPlayDevice; // +0x18
    WAMediaCastingRoutePickerDeviceItem * _currentDevice; // +0x20
    unsigned long long _currentDeviceStatus; // +0x28
    NSArray * _availableDeviceList; // +0x30
    NSString * _guideURLString; // +0x38
    NSString * _titleLocalString; // +0x40
    NSString * _guideLocalString; // +0x48
    NSString * _recentDeviceLocalString; // +0x50
    NSString * _availableDeviceLocalString; // +0x58
    WAMediaCastingRoutePickerRencentDevicePool * _recentDevicePool; // +0x60
    NSString * _guidLocalString; // +0x68
}
- (id)init;
- (void)updateUpnpDeviceList:(id)arg1;
- (void)updateSearchingStatus:(BOOL)arg1;
- (void)updateCurrentDevice:(id)arg1;
- (void)updateCurrentDeviceStatus:(unsigned long long)arg1;
- (void)appendLastConnectDevice:(id)arg1;
- (void)notifyDataChanged;
- (void)notifySearchingStatusChanged;
- (void)notifyCurrentDeviceStatusChanged;
- (id)recentDevicePool;
- (id)lastConnectedDeviceList;
- (id)availableDeviceList;
- (id)airPlayDevice;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setAirPlayDevice:(id)arg1;
- (id)currentDevice;
- (void)setCurrentDevice:(id)arg1;
- (unsigned long long)currentDeviceStatus;
- (void)setCurrentDeviceStatus:(unsigned long long)arg1;
- (void)setAvailableDeviceList:(id)arg1;
- (id)guideURLString;
- (void)setGuideURLString:(id)arg1;
- (id)titleLocalString;
- (void)setTitleLocalString:(id)arg1;
- (id)guideLocalString;
- (id)recentDeviceLocalString;
- (void)setRecentDeviceLocalString:(id)arg1;
- (id)availableDeviceLocalString;
- (void)setAvailableDeviceLocalString:(id)arg1;
- (BOOL)isSearching;
- (void)setIsSearching:(BOOL)arg1;
- (void)setRecentDevicePool:(id)arg1;
- (id)guidLocalString;
- (void)setGuidLocalString:(id)arg1;
- (void).cxx_destruct;
@end
