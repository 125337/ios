@interface EditVideoSecondCutPromotionButton : MMUIButton
{
    long long currentEntryType; // +0x8
    UIStackView * stackView; // +0x10
    MMUIImageView * secondCutLogo; // +0x18
    MMUILabel * textLabel; // +0x20
    MMUIImageView * arrowImageView; // +0x28
    unsigned long long _editVideoEntrance; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_initStackView;
- (void)_initSecondCutLogo;
- (void)_initTextLabel;
- (void)_initArrowImageView;
- (long long)getCurrentEntryType;
- (void)updateEntryType:(long long)arg1;
- (void)sizeToFit;
- (long long)currentEntryType;
- (void)setCurrentEntryType:(long long)arg1;
- (id)stackView;
- (void)setStackView:(id)arg1;
- (id)secondCutLogo;
- (void)setSecondCutLogo:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (unsigned long long)editVideoEntrance;
- (void)setEditVideoEntrance:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
