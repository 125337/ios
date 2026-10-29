@interface WCFinderMusicVideoResource : NSObject
{
    unsigned long long _type; // +0x8
    AVAsset * _videoAsset; // +0x10
    UIImage * _coverImage; // +0x18
}
- (id)videoPath;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)videoAsset;
- (void)setVideoAsset:(id)arg1;
- (id)coverImage;
- (void)setCoverImage:(id)arg1;
- (void).cxx_destruct;
@end
