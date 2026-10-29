@interface WCMomentsShareScopeSectionHeaderView : UICollectionReusableView
{
    UIView * _containerView; // +0x8
    UILabel * _titleLabel; // +0x10
}
+ (double)heightForTitle:(id)arg1 headerViewWidth:(double)arg2;
- (void)updateHeaderViewWithWidth:(double)arg1 title:(id)arg2;
- (void)_initViewWithWidth:(double)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

