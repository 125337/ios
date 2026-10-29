@interface StorageCacheClassCell : UITableViewCell
{
    BOOL _isSelected; // +0x8
    BOOL _isGreyText; // +0x9
    NSString * _titleString; // +0x10
    NSString * _sizeString; // +0x18
    id /* block */ _detailAction; // +0x20
    UIImageView * _selectIconView; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUILabel * _sizeLabel; // +0x38
    MMUIButton * _arrImgButton; // +0x40
    UIView * _expandTapView; // +0x48
}
+ (double)sizeLabelMaxWidth;
+ (double)estimateTitleLabelHeigth:(id)arg1 viewWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateView;
- (void)layoutSubviews;
- (void)runDetailAction;
- (id)titleString;
- (void)setTitleString:(id)arg1;
- (id)sizeString;
- (void)setSizeString:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isGreyText;
- (void)setIsGreyText:(BOOL)arg1;
- (id /* block */)detailAction;
- (void)setDetailAction:(id /* block */)arg1;
- (id)selectIconView;
- (void)setSelectIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)arrImgButton;
- (void)setArrImgButton:(id)arg1;
- (id)expandTapView;
- (void)setExpandTapView:(id)arg1;
- (void).cxx_destruct;
@end
