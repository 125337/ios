@interface MMActivityIndicator : UIImageView
{
    double duration; // +0x8
}
- (void)startAnimating;
- (void)stopAnimating;
- (double)duration;
- (void)setDuration:(double)arg1;
@end

