@interface WCPlayerVolumeObserver : NSObject
{
    BOOL _showSystemVolumeView; // +0x8
    id <WCPlayerVolumeObserverDelegate> _delegate; // +0x10
    MPVolumeView * _volumeView; // +0x18
}
- (void)dealloc;
- (void)stopObserveVolumeChangeEvent;
- (void)startObserveVolumeChangeEvent;
- (void)onSystemVolumeDidChange:(id)arg1;
- (float)volume;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)showSystemVolumeView;
- (void)setShowSystemVolumeView:(BOOL)arg1;
- (id)volumeView;
- (void)setVolumeView:(id)arg1;
- (void).cxx_destruct;
@end

