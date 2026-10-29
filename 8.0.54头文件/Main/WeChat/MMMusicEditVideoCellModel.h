@interface MMMusicEditVideoCellModel : NSObject
{
    NSString * _videoPath; // +0x8
    UIImage * _localThumbImage; // +0x10
    AVAsset * _slowMotionAvAsset; // +0x18
    WCFinderMediaInfo * _mediaInfo; // +0x20
    double _videoDuration; // +0x28
    double _videoWidth; // +0x30
    double _videoHeight; // +0x38
    double _musicStartTime; // +0x40
    double _musicEndTime; // +0x48
    NSMutableDictionary * _extInfo; // +0x50
    double _cropStartPos; // +0x58
}
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)localThumbImage;
- (void)setLocalThumbImage:(id)arg1;
- (id)slowMotionAvAsset;
- (void)setSlowMotionAvAsset:(id)arg1;
- (id)mediaInfo;
- (void)setMediaInfo:(id)arg1;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (double)videoWidth;
- (void)setVideoWidth:(double)arg1;
- (double)videoHeight;
- (void)setVideoHeight:(double)arg1;
- (double)musicStartTime;
- (void)setMusicStartTime:(double)arg1;
- (double)musicEndTime;
- (void)setMusicEndTime:(double)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (double)cropStartPos;
- (void)setCropStartPos:(double)arg1;
- (void).cxx_destruct;
@end

