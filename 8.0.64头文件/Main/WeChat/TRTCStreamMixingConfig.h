@interface TRTCStreamMixingConfig : NSObject
{
    int _backgroundColor; // +0x8
    NSString * _backgroundImage; // +0x10
    NSArray * _videoLayoutList; // +0x18
    NSArray * _audioMixUserList; // +0x20
    NSArray * _watermarkList; // +0x28
}
- (shared_ptr<trtc::StreamMixingConfig>)convertToCppParams;
- (id)init;
- (int)backgroundColor;
- (void)setBackgroundColor:(int)arg1;
- (id)backgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (id)videoLayoutList;
- (void)setVideoLayoutList:(id)arg1;
- (id)audioMixUserList;
- (void)setAudioMixUserList:(id)arg1;
- (id)watermarkList;
- (void)setWatermarkList:(id)arg1;
- (void).cxx_destruct;
@end
