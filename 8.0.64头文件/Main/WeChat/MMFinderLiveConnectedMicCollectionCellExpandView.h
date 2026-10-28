@interface MMFinderLiveConnectedMicCollectionCellExpandView : UICollectionReusableView
{
    MMFinderLiveConnectedMicBaseExpandView * _baseView; // +0x8
}
+ (id)ReuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateWithTitle:(id)arg1 isExpand:(BOOL)arg2;
- (void)hideBackground;
- (BOOL)isExpand;
- (void)setIsExpand:(BOOL)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id)baseView;
- (void)setBaseView:(id)arg1;
- (void).cxx_destruct;
@end
