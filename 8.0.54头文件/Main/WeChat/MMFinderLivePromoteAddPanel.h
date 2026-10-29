@interface MMFinderLivePromoteAddPanel : MMPageSheetBaseView
{
    id /* block */ _addButtonBlock; // +0x8
    UIButton * _actionButton; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _subtitleLabel; // +0x20
    UIView * _contentView; // +0x28
    long long _previousOrientation; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)createUI;
- (double)contentViewHeight;
- (void)pageSheetDidRotation;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)leftButtonAction;
- (id)getCurrentLeftButton;
- (id)contentView;
- (id)actionButton;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)addButtonClicked:(id)arg1;
- (id /* block */)addButtonBlock;
- (void)setAddButtonBlock:(id /* block */)arg1;
- (void)setActionButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setContentView:(id)arg1;
- (long long)previousOrientation;
- (void)setPreviousOrientation:(long long)arg1;
- (void).cxx_destruct;
@end

