@interface MMFinderLiveConnectedMicCollectionCellHeaderView : UICollectionReusableView
{
    MMFinderLiveConnectedMicBaseCellHeaderView * _baseView; // +0x8
}
+ (id)ReuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateWithTitle:(id)arg1;
- (void)setCorner:(BOOL)arg1;
- (void)hideBackground;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (BOOL)showSeparatorBar;
- (void)setShowSeparatorBar:(BOOL)arg1;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (void).cxx_destruct;
@end
