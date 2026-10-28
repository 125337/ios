@interface WNImageActionSheetView : UIView <WNActionButtonDelegate>
{
    id <WNImageActionSheetViewDelegate> _delegate; // +0x8
    NSArray * _arrSelectedIndex; // +0x10
    double _leftTitleLabelWidth; // +0x18
    double _buttonLabelWidth; // +0x20
    NSArray * _arrLeftTitles; // +0x28
    NSArray * _arrAllBtnInfos; // +0x30
    NSMutableArray * _arrSelectedBtnIndexs; // +0x38
    NSMutableArray * _arrAllBtns; // +0x40
    MMUIButton * _closeButton; // +0x48
    UIView * _allButtonsView; // +0x50
    UIView * _headerView; // +0x58
    UIView * _bottomView; // +0x60
    CGPoint _oriPosition; // +0x68
}
- (id)initWithFrame:(CGRect)arg1 andTitles:(id)arg2 andAllBtnInfos:(id)arg3;
- (void)setUpUI;
- (void)generateLeftLabel:(id)arg1 withOrigin:(CGPoint)arg2;
- (void)generateRightScrollView:(id)arg1 andFrame:(CGRect)arg2;
- (void)addHeaderView:(CGRect)arg1;
- (void)addBottomView:(CGRect)arg1;
- (void)addGradientLayerFor:(id)arg1 beginAlphaComponent:(double)arg2 endAlphaComponent:(double)arg3;
- (void)changeToSelectedBtn:(long long)arg1 andIndex:(long long)arg2;
- (void)updateSelectedBtns:(id)arg1;
- (void)onClickButton:(id)arg1;
- (void)onClickCancelButton:(id)arg1;
- (void)onClickConfirmButton:(id)arg1;
- (void)onClickButtonWithType:(long long)arg1 andIndex:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)arrSelectedIndex;
- (void)setArrSelectedIndex:(id)arg1;
- (double)leftTitleLabelWidth;
- (void)setLeftTitleLabelWidth:(double)arg1;
- (double)buttonLabelWidth;
- (void)setButtonLabelWidth:(double)arg1;
- (id)arrLeftTitles;
- (void)setArrLeftTitles:(id)arg1;
- (id)arrAllBtnInfos;
- (void)setArrAllBtnInfos:(id)arg1;
- (id)arrSelectedBtnIndexs;
- (void)setArrSelectedBtnIndexs:(id)arg1;
- (id)arrAllBtns;
- (void)setArrAllBtns:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (CGPoint)oriPosition;
- (void)setOriPosition:(CGPoint)arg1;
- (id)allButtonsView;
- (void)setAllButtonsView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (void).cxx_destruct;
@end
