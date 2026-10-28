@interface TPVodSelectTrackParams : NSObject
{
    long long _costTimeMs; // +0x8
    long long _errorCode; // +0x10
    long long _mediaType; // +0x18
    long long _attachFormat; // +0x20
}
- (id)init;
- (long long)costTimeMs;
- (void)setCostTimeMs:(long long)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (long long)mediaType;
- (void)setMediaType:(long long)arg1;
- (long long)attachFormat;
- (void)setAttachFormat:(long long)arg1;
@end
