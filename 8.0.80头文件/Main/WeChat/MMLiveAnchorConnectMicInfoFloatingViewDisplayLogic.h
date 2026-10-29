@interface MMLiveAnchorConnectMicInfoFloatingViewDisplayLogic : NSObject
{
    BOOL _isInRandomMicGuideState; // +0x8
    BOOL _isTimingTheConnectingMicProcess; // +0x9
    unsigned int _displayedConnectingMicTime; // +0xc
    unsigned long long _floatingViewDisplayState; // +0x10
    MMFinderLiveConnectMicUserView * _connectMicInfoFloatingView; // +0x18
    MMFinderLiveConnectMicUser * _randomMicTempAnchorUser; // +0x20
}
- (id)initWithFloatingView:(id)arg1;
- (void)updateDisplayStateWithRandomMicTempAnchorUser:(id)arg1 otherRoomMicAnchorDict:(id)arg2 canConnectMicWithAnchor:(BOOL)arg3;
- (void)clearRandomMicGuideState;
- (void)updateFloatingViewDisplayState:(unsigned long long)arg1;
- (void)increaseConnectingMicTime;
- (BOOL)isInRandomMicGuideState;
- (void)setIsInRandomMicGuideState:(BOOL)arg1;
- (unsigned long long)floatingViewDisplayState;
- (void)setFloatingViewDisplayState:(unsigned long long)arg1;
- (id)connectMicInfoFloatingView;
- (void)setConnectMicInfoFloatingView:(id)arg1;
- (BOOL)isTimingTheConnectingMicProcess;
- (void)setIsTimingTheConnectingMicProcess:(BOOL)arg1;
- (unsigned int)displayedConnectingMicTime;
- (void)setDisplayedConnectingMicTime:(unsigned int)arg1;
- (id)randomMicTempAnchorUser;
- (void)setRandomMicTempAnchorUser:(id)arg1;
- (void).cxx_destruct;
@end
