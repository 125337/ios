@interface MMFinderLiveStreamTypeInfo : NSObject <NSCopying>
{
    BOOL _isPureAudioMode; // +0x8
    BOOL _hasAudioMicUser; // +0x9
    BOOL _isConnectingMic; // +0xa
    unsigned long long _updateTime; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isPureAudioMode;
- (void)setIsPureAudioMode:(BOOL)arg1;
- (BOOL)hasAudioMicUser;
- (void)setHasAudioMicUser:(BOOL)arg1;
- (BOOL)isConnectingMic;
- (void)setIsConnectingMic:(BOOL)arg1;
- (unsigned long long)updateTime;
- (void)setUpdateTime:(unsigned long long)arg1;
@end

