@interface MMMusicMVClipItem : NSObject
{
    NSString * _clipId; // +0x8
    NSString * _videoLocalPath; // +0x10
    NSString * _videoThumbPath; // +0x18
    MMMusicMVTrackItemLocalPic * _localPic; // +0x20
}
- (BOOL)isVaild;
- (id)description;
- (id)clipId;
- (void)setClipId:(id)arg1;
- (id)videoLocalPath;
- (void)setVideoLocalPath:(id)arg1;
- (id)videoThumbPath;
- (void)setVideoThumbPath:(id)arg1;
- (id)localPic;
- (void)setLocalPic:(id)arg1;
- (void).cxx_destruct;
@end
