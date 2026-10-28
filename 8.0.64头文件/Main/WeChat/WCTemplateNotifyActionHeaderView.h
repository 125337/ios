@interface WCTemplateNotifyActionHeaderView : UIView
{
    MMWebImageView * _headerView; // +0x8
    UILabel * _titleLabel; // +0x10
}
+ (id)createWithFrame:(CGRect)arg1 iconUrl:(id)arg2 title:(id)arg3;
- (id)initWithFrame:(CGRect)arg1 iconUrl:(id)arg2 title:(id)arg3;
- (void)setIconUrl:(id)arg1;
- (void)layoutSubviews;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
