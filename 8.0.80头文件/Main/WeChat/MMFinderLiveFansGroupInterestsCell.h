@interface MMFinderLiveFansGroupInterestsCell : UIView
{
    BOOL _shouldAdaptToDarkLight; // +0x8
    MMWebImageView * _iconImageView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _descriptionLabel; // +0x20
    WCFinderLiveFansGroupInterestsInfo * _interestsInfo; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithInterestsInfo:(id)arg1;
- (void)adjustSelfSize;
- (void)setFrame:(CGRect)arg1;
- (void)updateLabels;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)interestsInfo;
- (void)setInterestsInfo:(id)arg1;
- (BOOL)shouldAdaptToDarkLight;
- (void)setShouldAdaptToDarkLight:(BOOL)arg1;
- (void).cxx_destruct;
@end
