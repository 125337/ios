@interface MMLiveConnectMicModeChanges : NSObject
{
    BOOL _wasConnectMic; // +0x8
    BOOL _isConnectMic; // +0x9
}
- (BOOL)micModeChanged;
- (BOOL)wasConnectMic;
- (void)setWasConnectMic:(BOOL)arg1;
- (BOOL)isConnectMic;
- (void)setIsConnectMic:(BOOL)arg1;
@end
