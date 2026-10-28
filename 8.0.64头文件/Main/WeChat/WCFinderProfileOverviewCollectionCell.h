@interface WCFinderProfileOverviewCollectionCell : UICollectionViewCell
{
    BOOL _showSeparatorLine; // +0x8
    UIImageView * _coverView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subTitleLabel; // +0x20
    NSString * _coverUrl; // +0x28
    WCFinderDetailTimeStringConfig * _timeStringConfig; // +0x30
    UIView * _separatorLine; // +0x38
    UIEdgeInsets _contentInsets; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setCoverUrl:(id)arg1;
- (id)timeStringConfig;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)coverUrl;
- (UIEdgeInsets)contentInsets;
- (void)setContentInsets:(UIEdgeInsets)arg1;
- (void)setTimeStringConfig:(id)arg1;
- (BOOL)showSeparatorLine;
- (void)setShowSeparatorLine:(BOOL)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (void).cxx_destruct;
@end
