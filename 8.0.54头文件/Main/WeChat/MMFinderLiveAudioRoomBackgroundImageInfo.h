@interface MMFinderLiveAudioRoomBackgroundImageInfo : NSObject <NSCopying>
{
    NSString * _originalUrlString; // +0x8
    unsigned long long _backgroundImageState; // +0x10
    UIImage * _backgroundImage; // +0x18
    UIColor * _audioWaveColor; // +0x20
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)originalUrlString;
- (void)setOriginalUrlString:(id)arg1;
- (unsigned long long)backgroundImageState;
- (void)setBackgroundImageState:(unsigned long long)arg1;
- (id)backgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (id)audioWaveColor;
- (void)setAudioWaveColor:(id)arg1;
- (void).cxx_destruct;
@end

