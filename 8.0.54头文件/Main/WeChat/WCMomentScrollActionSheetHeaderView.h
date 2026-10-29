@interface WCMomentScrollActionSheetHeaderView : UIView
{
    MMUIActivityIndicatorView * _loadingView; // +0x8
    UILabel * _titleLabel; // +0x10
    NSString * _title; // +0x18
    UIView * _seperator; // +0x20
}
+ (double)heightForTitle:(id)arg1 width:(double)arg2;
- (id)initWithFrame:(CGRect)arg1 title:(id)arg2;
- (void)initView;
- (void)initLoadingView;
- (void)initTitleLabel;
- (void)initSeperator;
- (void)layoutSubviews;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)seperator;
- (void)setSeperator:(id)arg1;
- (void).cxx_destruct;
@end

