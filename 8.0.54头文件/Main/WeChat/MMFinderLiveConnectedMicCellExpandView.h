@interface MMFinderLiveConnectedMicCellExpandView : UITableViewCell
{
    BOOL _isExpand; // +0x8
    id /* block */ _actionBlock; // +0x10
    UIView * _container; // +0x18
    UILabel * _titleLabel; // +0x20
    UIImageView * _arrowIcon; // +0x28
}
+ (id)ReuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initViews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1 isExpand:(BOOL)arg2;
- (BOOL)isExpand;
- (void)setIsExpand:(BOOL)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowIcon;
- (void)setArrowIcon:(id)arg1;
- (void).cxx_destruct;
@end

