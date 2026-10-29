@interface CBTAsstNoteCellView : CBTAsstBoardBaseCellView
{
    UILabel * _titleLabel; // +0x8
    UILabel * _contentLabel; // +0x10
    UILabel * _tagLabel; // +0x18
    UIView * _iconContainerView; // +0x20
    UIImageView * _noteIconView; // +0x28
}
- (void)prepareForReuse;
- (void)setupUI;
- (void)parseData;
- (void)setupAmoebaViewReportingWithViewModel:(id)arg1;
- (BOOL)needsBubbleBackground;
- (void)layoutContainerView;
- (void)layoutIconContainerView;
- (void)layoutTitleLabel;
- (void)layoutTagLabel;
- (void)addTapGesture;
- (void)refreshTheme;
- (CGRect)getBubbleFrame;
- (id)getCellReuseId;
- (void)cardTapped;
- (void)openNoteDetailWithFavId:(unsigned long long)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)tagLabel;
- (void)setTagLabel:(id)arg1;
- (id)iconContainerView;
- (void)setIconContainerView:(id)arg1;
- (id)noteIconView;
- (void)setNoteIconView:(id)arg1;
- (void).cxx_destruct;
@end
