@interface AudioUnitWrapper : NSObject
{
    OpaqueAudioComponentInstance * _audioUnit; // +0x8
}
+ (id)wrapperWithAudioUnit:(OpaqueAudioComponentInstance *)arg1;
- (OpaqueAudioComponentInstance *)audioUnit;
- (void)setAudioUnit:(OpaqueAudioComponentInstance *)arg1;
@end
