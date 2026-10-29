@interface WAAuthPageSheetDescView : WAAuthPageSheetBaseView <WARichTextViewHelperDelegate>
{
    UILabel * _titleLabel; // +0x8
    UILabel * _subTitleLabel; // +0x10
    id <IWARichTextViewHelper> _subTitleRichHelper; // +0x18
    UIButton * _subTitleInfoButton; // +0x20
}
+ (id)titleFontForViewModel:(id)arg1;
+ (id)subTitleFontForViewModel:(id)arg1;
+ (id)createAttrTitle:(id)arg1 font:(id)arg2;
+ (id)createAttrSubTitle:(id)arg1 font:(id)arg2 withInlineInfoIcon:(BOOL)arg3 traitCollection:(id)arg4 lineHeight:(double)arg5;
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)onInfoButtonClick;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)ensureSubTitleRichHelperWithFont:(id)arg1;
- (void)applyRichHelperThemeColors;
- (void)layoutSubTitleInfoButtonIfNeeded:(BOOL)arg1;
- (void)onLinkClicked:(id)arg1 linkRect:(CGRect)arg2;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)subTitleRichHelper;
- (void)setSubTitleRichHelper:(id)arg1;
- (id)subTitleInfoButton;
- (void)setSubTitleInfoButton:(id)arg1;
- (void).cxx_destruct;
@end
