@interface ThreeWayExpandImageView : UIView
{
    UIImage * _leftImage; // +0x8
    UIImage * _middleImage; // +0x10
    UIImage * _rightImage; // +0x18
    int _expandMode; // +0x20
    UIImageView * _leftImageView; // +0x28
    UIImageView * _middleImageView; // +0x30
    UIImageView * _rightImageView; // +0x38
}
- (id)init;
- (void)layoutSubviews;
- (id)leftImage;
- (void)setLeftImage:(id)arg1;
- (id)middleImage;
- (void)setMiddleImage:(id)arg1;
- (id)rightImage;
- (void)setRightImage:(id)arg1;
- (int)expandMode;
- (void)setExpandMode:(int)arg1;
- (void).cxx_destruct;
@end

