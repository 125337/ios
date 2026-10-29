@interface BrandProfileMsgBaseCell : MMTableViewCell
{
    BOOL _isDisplaying; // +0x8
    BOOL _forceHighlighted; // +0x9
    UIView * _highlightMaskView; // +0x10
    BrandProfileMsgBaseViewModel * _viewModel; // +0x18
    id <BrandProfileMsgCellDelegate> _delegate; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setViewModel:(id)arg1;
- (void)onUpdateViewModel;
- (void)prepareForReuse;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)addHighlightMaskView;
- (void)removeHighlightMaskView;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setForceHighlighted:(BOOL)arg1;
- (void)addCornerToContentView:(unsigned long long)arg1;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isDisplaying;
- (void)setIsDisplaying:(BOOL)arg1;
- (BOOL)forceHighlighted;
- (void).cxx_destruct;
@end
