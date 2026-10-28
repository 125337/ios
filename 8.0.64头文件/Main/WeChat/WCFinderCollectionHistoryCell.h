@interface WCFinderCollectionHistoryCell : UICollectionViewCell
{
    WCFinderCollectionFeedContentVM * _contentVM; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _descLabel; // +0x18
    UIImageView * _logoView; // +0x20
    UILabel * _contactNameLabel; // +0x28
    UILabel * _timeLabel; // +0x30
    UIImageView * _coverView; // +0x38
}
+ (double)displayHeight:(double)arg1 contentVM:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setContentVM:(id)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)contentVM;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)logoView;
- (void)setLogoView:(id)arg1;
- (id)contactNameLabel;
- (void)setContactNameLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (void).cxx_destruct;
@end
