@interface TPPlayerSelectTrackEndEventInfo : TPPlayerEventInfo
{
    long long _errorCode; // +0x20
    long long _opaque; // +0x28
}
- (id)init;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (long long)opaque;
- (void)setOpaque:(long long)arg1;
@end

