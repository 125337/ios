@interface CBTAsstBoardAlertCellView : CBTAsstBoardBaseCellView
{
    BOOL _currentExpandedState; // +0x8
    NSMutableArray * _itemViews; // +0x10
    UIView * _contentContainerView; // +0x18
    UIButton * _moreButton; // +0x20
    CBTAsstBoardAlertViewModel * _currentViewModel; // +0x28
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setupUI;
- (void)refreshTheme;
- (void)setupCellWithViewModel:(id)arg1;
- (id)formatTimestamp:(unsigned long long)arg1;
- (void)moreButtonTapped:(id)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (BOOL)currentExpandedState;
- (void)setCurrentExpandedState:(BOOL)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (id)currentViewModel;
- (void)setCurrentViewModel:(id)arg1;
- (void).cxx_destruct;
@end
