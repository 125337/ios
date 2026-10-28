@interface MMFinderLivePageSheetNoticeView : MMPageSheetBaseView
{
    id /* block */ _disappearCallback; // +0x8
    MMFinderLivePageSheetNoticeConfig * _config; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _contentLabel; // +0x20
    NSArray * _actionButtons; // +0x28
}
- (id)initWithConfig:(id)arg1;
- (void)initViews;
- (void)setupPageSheetConfig;
- (void)pageSheetDidDisappear;
- (void)layoutSubviews;
- (void)onActionButtonClicked:(id)arg1;
- (id /* block */)disappearCallback;
- (void)setDisappearCallback:(id /* block */)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)actionButtons;
- (void)setActionButtons:(id)arg1;
- (void).cxx_destruct;
@end
