@interface MMLiveConnectMicHeatTipsPanel : MMPageSheetBaseView
{
    UILabel * _titleLabel; // +0x8
    UILabel * _tipsLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)configPageSheetAndDetailView;
- (void)configUI;
- (void)layoutUI;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
