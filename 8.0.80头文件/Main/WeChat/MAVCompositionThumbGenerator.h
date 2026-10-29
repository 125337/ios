@interface MAVCompositionThumbGenerator : NSObject
{
    TAVSourceImageGenerator * _imageGenerator; // +0x8
}
- (id)initWithComposition:(id)arg1 imageSize:(CGSize)arg2;
- (id)initWithTrack:(id)arg1 imageSize:(CGSize)arg2;
- (void)requestFrames:(id)arg1 completion:(id /* block */)arg2;
- (void)destroy;
- (id)imageGenerator;
- (void)setImageGenerator:(id)arg1;
- (void).cxx_destruct;
@end
