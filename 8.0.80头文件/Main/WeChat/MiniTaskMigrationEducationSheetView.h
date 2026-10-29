@interface MiniTaskMigrationEducationSheetView : MMPageSheetBaseView
{
    unsigned long long _scene; // +0x8
    id /* block */ _dismissBlock; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _descLabel; // +0x20
    UIImageView * _illustrationImageView; // +0x28
    MMUIButton * _understandButton; // +0x30
    MMUIButton * _browseButton; // +0x38
}
- (id)initWithScene:(unsigned long long)arg1 dismissBlock:(id /* block */)arg2;
- (id)initWithDismissBlock:(id /* block */)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (double)pageSheetContentWidth;
- (double)pageSheetContentHeight;
- (double)illustrationHeightForContentWidth:(double)arg1;
- (void)onUnderstandButtonClicked;
- (void)onBrowseButtonClicked;
- (void)pageSheetDidDismiss;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)illustrationImageView;
- (void)setIllustrationImageView:(id)arg1;
- (id)understandButton;
- (void)setUnderstandButton:(id)arg1;
- (id)browseButton;
- (void)setBrowseButton:(id)arg1;
- (void).cxx_destruct;
@end
