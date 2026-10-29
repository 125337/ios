@interface WeNoteNewImageActionSheetView : MMPageSheetBaseView <WeNoteNewActionButtonDelegate>
{
    BOOL _isShowAuthor; // +0x8
    BOOL _isShowDate; // +0x9
    id <WeNoteNewImageActionSheetViewDelegate> _delegate; // +0x10
    NSArray * _arrSelectedIndex; // +0x18
    double _leftTitleLabelWidth; // +0x20
    double _buttonLabelWidth; // +0x28
    NSArray * _arrLeftTitles; // +0x30
    NSArray * _arrAllBtnInfos; // +0x38
    NSMutableArray * _arrSelectedBtnIndexs; // +0x40
    NSMutableArray * _arrAllBtns; // +0x48
    MMUIButton * _closeButton; // +0x50
    UIView * _containerView; // +0x58
    UIView * _allButtonsView; // +0x60
    UIView * _headerView; // +0x68
    CGPoint _oriPosition; // +0x70
}
- (id)initWithFrame:(CGRect)arg1 andTitles:(id)arg2 andAllBtnInfos:(id)arg3;
- (void)setUpUI;
- (id)generateCheckboxWithSideLength:(double)arg1 selectedColor:(id)arg2;
- (void)addBottomView:(CGRect)arg1;
- (void)generateLeftLabel:(id)arg1 withOrigin:(CGPoint)arg2;
- (void)generateRightScrollView:(id)arg1 andFrame:(CGRect)arg2;
- (void)changeToSelectedBtn:(long long)arg1 andIndex:(long long)arg2;
- (void)updateSelectedBtns:(id)arg1;
- (void)onClickButton:(id)arg1;
- (void)pageSheetDidChangeVisibleHeight:(double)arg1;
- (void)onClickButtonWithType:(long long)arg1 andIndex:(long long)arg2;
- (void)onAuthorCheckBoxClick:(id)arg1;
- (void)onDateCheckBoxClick:(id)arg1;
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
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)allButtonsView;
- (void)setAllButtonsView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (BOOL)isShowAuthor;
- (void)setIsShowAuthor:(BOOL)arg1;
- (BOOL)isShowDate;
- (void)setIsShowDate:(BOOL)arg1;
- (void).cxx_destruct;
@end
