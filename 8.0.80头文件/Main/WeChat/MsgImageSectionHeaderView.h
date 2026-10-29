@interface MsgImageSectionHeaderView : UICollectionReusableView
{
    UILabel * _titleLabel; // +0x8
    UIButton * _selectButton; // +0x10
    UIView * _backgroundView; // +0x18
    id /* block */ _onSelectButtonTapped; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onButtonTapped;
- (void)layoutSubviews;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)selectButton;
- (void)setSelectButton:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id /* block */)onSelectButtonTapped;
- (void)setOnSelectButtonTapped:(id /* block */)arg1;
- (void).cxx_destruct;
@end
