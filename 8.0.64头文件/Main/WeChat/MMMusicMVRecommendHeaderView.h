@interface MMMusicMVRecommendHeaderView : UIView
{
    UILabel * _titleLabel; // +0x8
    MMUIButton * _closeBtn; // +0x10
    id <MMMusicMVRecommendHeaderViewDelegate> _delegate; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)didClickClose:(id)arg1;
- (id)titleLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
