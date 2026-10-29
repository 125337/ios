@interface WCFinderProfileOverviewJumpMoreCell : UICollectionViewCell
{
    UILabel * _wordingLabel; // +0x8
    UIView * _topLine; // +0x10
    UIEdgeInsets _contentInsets; // +0x18
    UIEdgeInsets _topLineEdgeInsets; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)topLine;
- (void)layoutTopLine;
- (void)prepareForReuse;
- (UIEdgeInsets)contentInsets;
- (void)setContentInsets:(UIEdgeInsets)arg1;
- (id)wordingLabel;
- (void)setWordingLabel:(id)arg1;
- (UIEdgeInsets)topLineEdgeInsets;
- (void)setTopLineEdgeInsets:(UIEdgeInsets)arg1;
- (void)setTopLine:(id)arg1;
- (void).cxx_destruct;
@end

