@interface MMFinderLiveCastViewModel : NSObject <KSUPnPServiceObserver>
{
    BOOL _disableMutePlay; // +0x8
    int _commentScene; // +0xc
    id <MMFinderLiveCastViewModelDelegate> _delegate; // +0x10
    WCFinderDataItem * _finderDataItem; // +0x18
    NSURL * _liveCastURL; // +0x20
    NSArray * _viewItems; // +0x28
    NSArray * _deviceViewItems; // +0x30
    MMLiveCastDeviceViewItem * _castingDeviceViewItem; // +0x38
    MMFinderLiveTaskId * _taskID; // +0x40
    KSUPnPService * _UPnPService; // +0x48
    MMLiveCastAirPlayViewItem * _airPlayViewItem; // +0x50
    NSMutableDictionary * _cachedDeviceViewItems; // +0x58
    MMLiveCastDeviceViewItem * _connectingDeviceViewItem; // +0x60
    MMLiveCastMoreViewItem * _moreViewItem; // +0x68
}
- (id)init;
- (id)initWithFinderDataItem:(id)arg1 liveCastURL:(id)arg2;
- (void)dealloc;
- (void)updateFinderDataItem:(id)arg1 liveCastURL:(id)arg2;
- (void)reloadViewItems;
- (void)didReloadViewItems;
- (id)generateAirPlayViewItemIfNeeded;
- (void)startAirPlay;
- (void)startDiscoveringDevices;
- (void)startDiscoveringDevicesWithTimeout;
- (void)startDiscoveringDevicesWithTimeoutInterval:(double)arg1;
- (void)stopDiscoveringDevices;
- (id)getCacheOrGenerateDeviceViewItemWithDevice:(id)arg1;
- (void)startCastingDevice:(id)arg1;
- (void)stopConnectingDevice;
- (void)stopCastingDevice;
- (void)stopCastingDeviceWhenMediaDidEndPlay:(BOOL)arg1;
- (id)generateMoreViewItem;
- (void)refreshMoreViewItemStatus;
- (void)UPnPService:(id)arg1 didDiscoverDevice:(id)arg2;
- (void)UPnPService:(id)arg1 didUpdateDevice:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (BOOL)disableMutePlay;
- (void)setDisableMutePlay:(BOOL)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (id)liveCastURL;
- (void)setLiveCastURL:(id)arg1;
- (id)viewItems;
- (void)setViewItems:(id)arg1;
- (id)deviceViewItems;
- (void)setDeviceViewItems:(id)arg1;
- (id)castingDeviceViewItem;
- (void)setCastingDeviceViewItem:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)UPnPService;
- (void)setUPnPService:(id)arg1;
- (id)airPlayViewItem;
- (void)setAirPlayViewItem:(id)arg1;
- (id)cachedDeviceViewItems;
- (void)setCachedDeviceViewItems:(id)arg1;
- (id)connectingDeviceViewItem;
- (void)setConnectingDeviceViewItem:(id)arg1;
- (id)moreViewItem;
- (void)setMoreViewItem:(id)arg1;
- (void).cxx_destruct;
@end
