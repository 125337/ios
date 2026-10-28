@interface WCFinderLiveFeedBaseStyleableCell : UICollectionViewCell
{
    FinderLiveSquareStyleInfo * _styleInfo; // +0x8
}
+ (double)cellHeightInWidth:(double)arg1 styleInfo:(id)arg2;
- (void)initializeIfNeeded:(id)arg1;
- (BOOL)enableBottomExtraInfo;
- (void)willDisplay;
- (void)didEndDisplay;
- (void)initViewsIfNeeded;
- (void)updateStyle;
- (id)styleInfo;
- (void)setStyleInfo:(id)arg1;
- (void).cxx_destruct;
@end
