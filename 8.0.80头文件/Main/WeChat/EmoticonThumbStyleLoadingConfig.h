@interface EmoticonThumbStyleLoadingConfig : NSObject
{
    unsigned long long _type; // +0x8
    UIImage * _image; // +0x10
    CAAnimation * _animation; // +0x18
    CGSize _animationPreferedSize; // +0x20
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)animation;
- (void)setAnimation:(id)arg1;
- (CGSize)animationPreferedSize;
- (void)setAnimationPreferedSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
