@interface MAVCompositionMixEffectTrackRenderInfo : NSObject
{
    MAVCompositionTrack * _track; // +0x8
    __CVBuffer * _textureRef; // +0x10
    CGSize _size; // +0x18
}
- (id)initWithRenderInfo:(id)arg1 texture:(__CVBuffer *)arg2 size:(CGSize)arg3;
- (long long)compare:(id)arg1;
- (id)track;
- (void)setTrack:(id)arg1;
- (__CVBuffer *)textureRef;
- (void)setTextureRef:(__CVBuffer *)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

