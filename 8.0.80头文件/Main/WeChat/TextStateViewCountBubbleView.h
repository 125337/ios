@interface TextStateViewCountBubbleView : UIView
{
    MMHeadImageView * _headImageView; // +0x8
    NSString * _username; // +0x10
    NSMutableArray * _animators; // +0x18
}
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithUsername:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)animators;
- (void)setAnimators:(id)arg1;
- (void).cxx_destruct;
@end
