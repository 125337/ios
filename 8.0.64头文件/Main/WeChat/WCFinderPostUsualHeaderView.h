@interface WCFinderPostUsualHeaderView : UITableViewHeaderFooterView
{
    UIView * _topLine; // +0x8
    MMUILabel * _titleLabel; // +0x10
}
+ (id)createLabel;
+ (double)descriptionTableViewCellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)titleLabel;
- (id)topLine;
- (void)setupUI;
- (void)setUpTitle:(id)arg1 width:(double)arg2;
- (void)setTopLine:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
