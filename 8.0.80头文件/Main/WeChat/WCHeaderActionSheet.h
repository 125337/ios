@interface WCHeaderActionSheet : WCActionSheet
{
    BOOL _hideSeperator; // +0x8
    NSArray * _headerArr; // +0x10
    UIView * _headerView; // +0x18
    NSArray * _customViewModels; // +0x20
    UIColor * _headerBackgroundColor; // +0x28
}
- (id)initByHeader:(id)arg1;
- (id)initByHeader:(id)arg1 headerBackgroundColor:(id)arg2 hideSeperator:(BOOL)arg3;
- (void)setAllButtonTitle:(id)arg1;
- (void)setAllButtonCustomViewModels:(id)arg1;
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getFixedHeaderViewInWidth:(double)arg1;
- (void)onCloseMenu:(id)arg1;
- (void)tapActionSheetCustomView:(id)arg1;
- (id)headerArr;
- (void)setHeaderArr:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)customViewModels;
- (void)setCustomViewModels:(id)arg1;
- (id)headerBackgroundColor;
- (void)setHeaderBackgroundColor:(id)arg1;
- (BOOL)hideSeperator;
- (void)setHideSeperator:(BOOL)arg1;
- (void).cxx_destruct;
@end
