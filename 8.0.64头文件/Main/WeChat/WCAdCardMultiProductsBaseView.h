@interface WCAdCardMultiProductsBaseView : MMUIView
{
    id <WCAdCardMultiProductsScreenDelegate> _delegate; // +0x8
    CGSize _previousSize; // +0x10
}
- (void)layoutSubviews;
- (void)resizeSubviewsWithSize:(CGSize)arg1;
- (void)saveCurrentCenterWith:(id)arg1;
- (void)restorePrevioisCenterWith:(id)arg1;
- (CGSize)previousSize;
- (void)setPreviousSize:(CGSize)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
