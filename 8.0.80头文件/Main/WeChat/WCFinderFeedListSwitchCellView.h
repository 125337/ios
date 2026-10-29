@interface WCFinderFeedListSwitchCellView : UITableViewCell
{
    UIImageView * _arrowView; // +0x8
    UILabel * _label; // +0x10
    unsigned long long _arrowDirection; // +0x18
}
+ (double)height;
+ (id)cellID;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)doLayoutSubviews;
- (void)sizeToFitWidth:(double)arg1;
- (void)setupTitle:(id)arg1 arrowDirection:(unsigned long long)arg2;
- (void)updateTitle:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (unsigned long long)arrowDirection;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
