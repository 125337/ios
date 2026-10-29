@interface WAMediaCastingAirPlayDetector : NSObject
{
    id <WAMediaCastingAirPlayDetectorDelegate> _delegate; // +0x8
    WAMediaCastingAirPlayDectectPrivateWindow * _dectectWindow; // +0x10
}
+ (id)format_WirelessTypeString:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (id)dectectWindow;
- (id)volumeView;
- (BOOL)isAirPlaying;
- (unsigned long long)wirelessType;
- (void)onWirelessRouteActiveDidChange;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setDectectWindow:(id)arg1;
- (void).cxx_destruct;
@end

