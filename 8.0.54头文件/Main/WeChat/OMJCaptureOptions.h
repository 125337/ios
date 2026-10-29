@interface OMJCaptureOptions : NSObject
{
    BOOL _isUseFrontCamera; // +0x8
    BOOL _isAudioEnabled; // +0x9
    BOOL _isChangeBackgroundImageEnabled; // +0xa
    struct _maxRecordingDuration; // +0xc
}
- (id)initWithIsUseFrontCamera:(BOOL)arg1 isAudioEnabled:(BOOL)arg2 isChangeBackgroundImageEnabled:(BOOL)arg3 maxRecordingDuration:(struct)arg4;
- (BOOL)isUseFrontCamera;
- (BOOL)isAudioEnabled;
- (BOOL)isChangeBackgroundImageEnabled;
- (struct)maxRecordingDuration;
@end

