@interface CBTTingFlutterReuseState : NSObject
{
    BOOL _lastTingTextMode; // +0x8
    long long _lastRouteType; // +0x10
    NSString * _lastPendingMsgContent; // +0x18
    NSData * _lastMusicWrapData; // +0x20
}
- (long long)lastRouteType;
- (void)setLastRouteType:(long long)arg1;
- (BOOL)lastTingTextMode;
- (void)setLastTingTextMode:(BOOL)arg1;
- (id)lastPendingMsgContent;
- (void)setLastPendingMsgContent:(id)arg1;
- (id)lastMusicWrapData;
- (void)setLastMusicWrapData:(id)arg1;
- (void).cxx_destruct;
@end
