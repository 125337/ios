@interface CameraScanBlurButtonWrapView : UIView
{
    UIButton * _topButton; // +0x8
    UIView * _bottomView; // +0x10
    UIView * _middleView; // +0x18
    MMUILabel * _introLbl; // +0x20
}
- (id)init;
- (void)setupSubviews;
- (id)curIntroFont;
- (void)updateButtonIntroText:(id)arg1;
- (id)topButton;
- (void)setTopButton:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (id)middleView;
- (void)setMiddleView:(id)arg1;
- (id)introLbl;
- (void)setIntroLbl:(id)arg1;
- (void).cxx_destruct;
@end
