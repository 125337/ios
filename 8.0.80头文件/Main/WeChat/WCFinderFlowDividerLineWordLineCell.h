@interface WCFinderFlowDividerLineWordLineCell : UICollectionReusableView
{
    UIView * _leftLine; // +0x8
    UIView * _rightLine; // +0x10
    UILabel * _wordingLabel; // +0x18
    UIEdgeInsets _contentInsets; // +0x20
}
+ (CGSize)dispalySize:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setWording:(id)arg1;
- (id)wording;
- (void)setContentInsets:(UIEdgeInsets)arg1;
- (void)_doLayout;
- (UIEdgeInsets)contentInsets;
- (id)leftLine;
- (void)setLeftLine:(id)arg1;
- (id)rightLine;
- (void)setRightLine:(id)arg1;
- (id)wordingLabel;
- (void)setWordingLabel:(id)arg1;
- (void).cxx_destruct;
@end
