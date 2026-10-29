@interface WAMediaCastingAirPlayService : NSObject <WAMediaCastingAirPlayDetectorDelegate>
{
    id <WAMediaCastingAirPlayServiceDelegate> _delegate; // +0x8
    WAMediaCastingAirPlayDetector * _detector; // +0x10
}
+ (id)service;
- (id)volumeView;
- (void)start;
- (void)switchDevice;
- (void)exit;
- (void)showRoutePickerView;
- (BOOL)isAirPlaying;
- (unsigned long long)wirelessType;
- (id)detector;
- (void)onWAMediaCastingAirPlayDetector:(id)arg1 wirelessRouteActiveDidChange:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setDetector:(id)arg1;
- (void).cxx_destruct;
@end
