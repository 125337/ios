@interface MMFinderLiveAudioModeBackgroundUploadModel : NSObject
{
    BOOL _uploaded; // +0x8
    unsigned int _backgroundType; // +0xc
    NSData * _image; // +0x10
    NSString * _video; // +0x18
    NSString * _imageUri; // +0x20
    NSString * _videoUri; // +0x28
}
+ (id)staticBackgroundUploadModelWithImageData:(id)arg1;
+ (id)animatedBackgroundUploadModelWithVideoPath:(id)arg1 fallbackImageData:(id)arg2;
- (BOOL)valid;
- (void)updateUploadedStaticImageUri:(id)arg1;
- (void)updateUploadedAnimatedVideoUri:(id)arg1 fallbackImageUri:(id)arg2;
- (id)backgroundConfiguration;
- (BOOL)validPreUpload;
- (BOOL)validPostUpload;
- (unsigned int)backgroundType;
- (void)setBackgroundType:(unsigned int)arg1;
- (BOOL)uploaded;
- (void)setUploaded:(BOOL)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)video;
- (void)setVideo:(id)arg1;
- (id)imageUri;
- (void)setImageUri:(id)arg1;
- (id)videoUri;
- (void)setVideoUri:(id)arg1;
- (void).cxx_destruct;
@end

