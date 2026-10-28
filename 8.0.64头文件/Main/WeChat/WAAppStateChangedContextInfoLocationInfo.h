@interface WAAppStateChangedContextInfoLocationInfo : MMObject
{
    BOOL _canKeepAliveByLocating; // +0x8
    BOOL _isBackgroundLocating; // +0x9
    BOOL _isLocationSharedResourceBeenRecovered; // +0xa
}
- (id)description;
- (BOOL)canKeepAliveByLocating;
- (void)setCanKeepAliveByLocating:(BOOL)arg1;
- (BOOL)isBackgroundLocating;
- (void)setIsBackgroundLocating:(BOOL)arg1;
- (BOOL)isLocationSharedResourceBeenRecovered;
- (void)setIsLocationSharedResourceBeenRecovered:(BOOL)arg1;
@end
