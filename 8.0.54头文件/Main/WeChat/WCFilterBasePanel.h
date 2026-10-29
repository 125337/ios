@interface WCFilterBasePanel : MMUIView
{
    NSString * m_cleanBtnTitle; // +0x8
    BOOL m_isLoading; // +0x10
    NSString * m_loadingTitle; // +0x18
    NSString * m_emptyTitle; // +0x20
    NSArray * m_filterItems; // +0x28
    BOOL m_canMultiSelect; // +0x30
    NSMutableSet * m_selectedIndexes; // +0x38
    unsigned int m_itemCount; // +0x40
    UIView * m_emptyView; // +0x48
    MMUIView * m_loadingView; // +0x50
    BOOL _useEmphasizeColor; // +0x58
    BOOL _useBoldFont; // +0x59
    id <WCFilterBasePanelDelegate> _delegate; // +0x60
}
- (id)initWithWidth:(double)arg1 andSection:(id)arg2;
- (BOOL)hasCleanBtn;
- (void)updateFilterSection:(id)arg1;
- (void)clearSelection;
- (void)configWithSection:(id)arg1;
- (id)getSelectedIndexes;
- (void)updateHeightWithRowNum:(unsigned int)arg1 andRowHeight:(double)arg2;
- (void)configSelectedIndex:(id)arg1;
- (void)clearLoadingAndEmptyView;
- (void)showLoadingOrEmptyView;
- (void)showLoadingView;
- (void)showEmptyView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)useEmphasizeColor;
- (void)setUseEmphasizeColor:(BOOL)arg1;
- (BOOL)useBoldFont;
- (void)setUseBoldFont:(BOOL)arg1;
- (void).cxx_destruct;
@end

