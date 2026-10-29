@interface MPVideoPageOpenParameter : MMObject <PBCoding>
{
    unsigned int _duration; // +0x8
    unsigned int _videoWidth; // +0xc
    unsigned int _videoHeight; // +0x10
    NSString * _videoId; // +0x18
    NSNumber * _videoInitialTime; // +0x20
}
+ (void)PBArrayAdd_videoId;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_videoWidth;
+ (void)PBArrayAdd_videoHeight;
+ (void)PBArrayAdd_videoInitialTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)videoId;
- (void)setVideoId:(id)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (unsigned int)videoWidth;
- (void)setVideoWidth:(unsigned int)arg1;
- (unsigned int)videoHeight;
- (void)setVideoHeight:(unsigned int)arg1;
- (id)videoInitialTime;
- (void)setVideoInitialTime:(id)arg1;
- (void).cxx_destruct;
@end

