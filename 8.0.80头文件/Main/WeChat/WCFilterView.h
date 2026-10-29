@interface WCFilterView : MMUIView <WCFilterBasePanelDelegate>
{
    NSMutableArray * m_sections; // +0x8
    MMUIView * m_titlePanel; // +0x10
    NSMutableDictionary * m_selectedIndexes; // +0x18
    int m_extendedIndex; // +0x20
    BOOL m_duringAnimation; // +0x24
    WCFilterBasePanel * m_extendedPanel; // +0x28
    MMUIView * m_containView; // +0x30
    MMUIView * m_animateView; // +0x38
    MMUIView * m_maskView; // +0x40
    CGRect m_preFrame; // +0x48
    UIView * m_preSuperView; // +0x68
    unsigned long long m_sectionMode; // +0x70
    BOOL _autoDismissAfterSelect; // +0x78
    BOOL _useEmphasizeColor; // +0x79
    BOOL _useBoldFont; // +0x7a
    id <WCFilterViewDelegate> _delegate; // +0x80
    unsigned long long _popType; // +0x88
    UIColor * _curTintColor; // +0x90
}
- (id)initWithFrame:(CGRect)arg1 andFilterSections:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 andFilterSections:(id)arg2 sectionMode:(unsigned long long)arg3;
- (void)setCurTintColor:(id)arg1;
- (void)initView;
- (void)setFrame:(CGRect)arg1;
- (void)dismissSelectionPanel;
- (void)dismissSelectionPanelAnimation:(BOOL)arg1;
- (id)getSelectedIndexes;
- (id)getSelectedItems;
- (void)updateTitleInButton:(id)arg1;
- (void)updateFilterSection:(id)arg1 atIndex:(unsigned int)arg2;
- (void)clearAllSelection;
- (void)onClickBtn:(id)arg1;
- (void)dismissCurrentPanel:(BOOL)arg1 updateTitle:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)dismissCurrentPanelComplete:(BOOL)arg1;
- (void)onDismissSelectionPanelUpdateTitle;
- (void)onDismissSelectionPanel;
- (void)syncSelection;
- (void)onItemClick:(unsigned int)arg1;
- (void)onCleanBtnClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)popType;
- (void)setPopType:(unsigned long long)arg1;
- (BOOL)autoDismissAfterSelect;
- (void)setAutoDismissAfterSelect:(BOOL)arg1;
- (BOOL)useEmphasizeColor;
- (void)setUseEmphasizeColor:(BOOL)arg1;
- (BOOL)useBoldFont;
- (void)setUseBoldFont:(BOOL)arg1;
- (id)curTintColor;
- (void).cxx_destruct;
@end
