@interface StorageFilterView : MMUIView <StorageFilterPanelDelegate>
{
    MMUIView * m_titlePanel; // +0x8
    MMUIButton * m_sortBtn; // +0x10
    MMUIButton * m_filterBtn; // +0x18
    MMUIView * m_backgroundMask; // +0x20
    MMUIView * m_containView; // +0x28
    StorageFilterPanel * m_popupPanel; // +0x30
    NSArray * m_sortGroups; // +0x38
    NSArray * m_filterGroups; // +0x40
    NSMutableArray * m_selected; // +0x48
    BOOL m_selectedChanged; // +0x50
    BOOL m_sortPopup; // +0x51
    BOOL m_filterPopup; // +0x52
    int m_animationStage; // +0x54
    id <StorageFilterViewDelegate> _delegate; // +0x58
}
- (id)initWithFrame:(CGRect)arg1 sortOptions:(id)arg2 filterGroups:(id)arg3 filters:(id)arg4;
- (void)initView;
- (void)updatePanelTextAndSize;
- (void)selectItem:(long long)arg1 inGroup:(long long)arg2 forceChanged:(BOOL)arg3;
- (void)updateItemTitle:(id)arg1 inItem:(long long)arg2 andGroup:(long long)arg3;
- (void)onSortClick:(id)arg1;
- (void)onFilterClick:(id)arg1;
- (void)onFilterItemClicked:(long long)arg1 group:(long long)arg2;
- (void)onFilterShouldClosed:(int)arg1;
- (void)onFilterClearButtonClicked;
- (void)onBackgroundTapped;
- (void)showPanelWithFilters:(id)arg1 bottomBar:(BOOL)arg2;
- (void)dismissPanel;
- (void)dismissPanelWithAnimation:(BOOL)arg1 changeFocus:(id)arg2 event:(int)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
