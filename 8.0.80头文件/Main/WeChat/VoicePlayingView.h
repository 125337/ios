@interface VoicePlayingView : UIView
{
    float _speed; // +0x8
    double _animationDuration; // +0x10
    long long _animationRepeatCount; // +0x18
    UIImageView * _imageView1; // +0x20
    UIImageView * _imageView2; // +0x28
    UIImageView * _imageView3; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 color:(id)arg2;
- (void)layoutSubviews;
- (void)setSpeed:(float)arg1;
- (BOOL)isAnimating;
- (void)startAnimating;
- (void)stopAnimating;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (long long)animationRepeatCount;
- (void)setAnimationRepeatCount:(long long)arg1;
- (float)speed;
- (id)imageView1;
- (void)setImageView1:(id)arg1;
- (id)imageView2;
- (void)setImageView2:(id)arg1;
- (id)imageView3;
- (void)setImageView3:(id)arg1;
- (void).cxx_destruct;
@end
