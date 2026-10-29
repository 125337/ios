@interface MSETitleBarView : UIView
{
    id <MSETitleBarDelegate> _delegate; // +0x8
    UIImageView * _leftImgView; // +0x10
    UIButton * _leftButton; // +0x18
    UILabel * _mainTitleLabel; // +0x20
    UILabel * _subTitleLabel; // +0x28
    UIButton * _rightButton; // +0x30
}
+ (double)getTitleBarHeight;
- (id)initTitleBarWithContainerWidth:(double)arg1;
- (void)layoutTitleViewWithMainTitle:(id)arg1;
- (void)layoutTitleViewWithLeftBtnTitle:(id)arg1 mainTitle:(id)arg2;
- (void)layoutTitleViewWithLeftBtnTitle:(id)arg1 mainTitle:(id)arg2 subTitle:(id)arg3;
- (void)layoutTitleViewWithLeftBtnTitle:(id)arg1 mainTitle:(id)arg2 rightBtnTitle:(id)arg3;
- (void)layoutTitleViewWithLeftBtnTitle:(id)arg1 leftImage:(id)arg2 mainTitle:(id)arg3 rightBtnTitle:(id)arg4;
- (void)setRightBtnEnable:(BOOL)arg1;
- (void)updateTitleBarMainTitle:(id)arg1;
- (void)initMainTitleLabelWithTitle:(id)arg1 hasSubTitle:(BOOL)arg2;
- (void)initSubTitleLabelWithTitle:(id)arg1;
- (void)initLeftButtonWithTitle:(id)arg1 withImage:(id)arg2;
- (void)initRightButtonWithTitle:(id)arg1;
- (void)leftBtnPress:(id)arg1;
- (void)rightBtnPress:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)leftImgView;
- (void)setLeftImgView:(id)arg1;
- (id)leftButton;
- (void)setLeftButton:(id)arg1;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (void).cxx_destruct;
@end

