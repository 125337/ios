@interface MMFinderLiveAudioModeBackgroundConfiguration : NSObject
{
    unsigned int _backgroundType; // +0x8
    UIImage * _localStaticImage; // +0x10
    NSString * _remoteStaticImageUri; // +0x18
    NSString * _localAnimatedVideoPath; // +0x20
    NSString * _remoteAnimatedVideoUri; // +0x28
    UIImage * _localAnimatedFallbackImage; // +0x30
    NSString * _remoteAnimatedFallbackImageUri; // +0x38
}
+ (id)configurationWithLiveRoomImg:(id)arg1;
- (BOOL)valid;
- (id)preferredStaticImageUri;
- (BOOL)isEqualToOtherAudioModeBackgroundConfig:(id)arg1;
- (id)equivalentLiveRoomImg;
- (unsigned int)backgroundType;
- (void)setBackgroundType:(unsigned int)arg1;
- (id)localStaticImage;
- (void)setLocalStaticImage:(id)arg1;
- (id)remoteStaticImageUri;
- (void)setRemoteStaticImageUri:(id)arg1;
- (id)localAnimatedVideoPath;
- (void)setLocalAnimatedVideoPath:(id)arg1;
- (id)remoteAnimatedVideoUri;
- (void)setRemoteAnimatedVideoUri:(id)arg1;
- (id)localAnimatedFallbackImage;
- (void)setLocalAnimatedFallbackImage:(id)arg1;
- (id)remoteAnimatedFallbackImageUri;
- (void)setRemoteAnimatedFallbackImageUri:(id)arg1;
- (void).cxx_destruct;
@end
