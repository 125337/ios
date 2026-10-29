@interface TAVVideoCompositionImage : NSObject
{
    CIImage * _image; // +0x8
    id <TAVVideoCompositionTrack> _track; // +0x10
}
- (id)image;
- (void)setImage:(id)arg1;
- (id)track;
- (void)setTrack:(id)arg1;
- (void).cxx_destruct;
@end
