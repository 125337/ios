@interface MFMusicPlayBtn : UIButton <MFBanner>
{
    TextFlowView * _flowview; // +0x8
    UIImageView * _iView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupFlowTextView;
- (void).cxx_destruct;
@end
