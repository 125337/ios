@interface MMFinderLiveApplyEligibilityPanel : MMPageSheetBaseView
{
    id /* block */ _applyCallback; // +0x8
    UILabel * _titleLabel; // +0x10
    UIButton * _knownButton; // +0x18
    UIButton * _applyButton; // +0x20
}
- (id)init;
- (void)setupPageSheetConfig;
- (void)setupDetailView;
- (void)pageSheetDidShow;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onKnownButtonClicked;
- (void)onApplyButtonClicked;
- (id /* block */)applyCallback;
- (void)setApplyCallback:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)knownButton;
- (void)setKnownButton:(id)arg1;
- (id)applyButton;
- (void)setApplyButton:(id)arg1;
- (void).cxx_destruct;
@end
