@interface MMEcsLiveImgButton : WCFinderMaskButton
{
    MMUIImageView * _leftImg; // +0x8
    MMUILabel * _midTitle; // +0x10
    MMUIImageView * _rightImg; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)configureWithLeftImg:(id)arg1 text:(id)arg2 rightImg:(id)arg3;
- (id)leftImg;
- (void)setLeftImg:(id)arg1;
- (id)midTitle;
- (void)setMidTitle:(id)arg1;
- (id)rightImg;
- (void)setRightImg:(id)arg1;
- (void).cxx_destruct;
@end
