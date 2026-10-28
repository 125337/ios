@interface WCFinderLiveStarterSwitchModeCell : UICollectionViewCell
{
    id /* block */ _clickBlock; // +0x8
    WCFinderLiveStarterLiveModeSubItem * _item; // +0x10
    MMUIView * _animationView; // +0x18
    MMUIView * _borderView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    UIImageView * _arrowIcon; // +0x30
    MMUIButton * _clickButton; // +0x38
    MMBadgeView * _redDotView; // +0x40
}
+ (double)getItemWidth:(id)arg1;
+ (id)getCurrentItemText:(id)arg1;
- (void)playCellAnimation;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)updateCellWithItem:(id)arg1;
- (void)resetUI;
- (void)executeAnimaintion:(BOOL)arg1;
- (id)titleLabel;
- (id)animationView;
- (id)arrowIcon;
- (id)borderView;
- (id)clickButton;
- (id)redDotView;
- (void)clickButtonAction;
- (id)getCellSelectColor;
- (id)getCellNormalColor;
- (id /* block */)clickBlock;
- (void)setClickBlock:(id /* block */)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void)setAnimationView:(id)arg1;
- (void)setBorderView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setArrowIcon:(id)arg1;
- (void)setClickButton:(id)arg1;
- (void)setRedDotView:(id)arg1;
- (void).cxx_destruct;
@end
