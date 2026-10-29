@interface MMFinderLiveJSAPIGetLocalLiveInfoResult : NSObject
{
    BOOL _hasLive; // +0x8
    BOOL _isAnchor; // +0x9
    BOOL _isConnectingMic; // +0xa
}
- (BOOL)hasLive;
- (void)setHasLive:(BOOL)arg1;
- (BOOL)isAnchor;
- (void)setIsAnchor:(BOOL)arg1;
- (BOOL)isConnectingMic;
- (void)setIsConnectingMic:(BOOL)arg1;
@end

