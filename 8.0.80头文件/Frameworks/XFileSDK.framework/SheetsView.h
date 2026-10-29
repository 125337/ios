@interface SheetsView : 
{
    int _fileId; // +0x8
    unsigned int _defaultIndex; // +0xc
    id /* block */ _onSheetSwitch; // +0x10
    UIScrollView * _scrollView; // +0x18
    NSArray * _items; // +0x20
    UIButton * _selectedButton; // +0x28
}
- (id)initWithFrame:(int)arg1 frame:(CGRect)arg2 defaultIndex:(unsigned int)arg3;
- (void)setupScrollView;
- (void)createItems;
- (void)relayoutItems;
- (void)layoutSubviews;
- (void)didTapItem:(id)arg1;
- (void)setSelectedButton:(id)arg1;
- (void)showBottomBorderForButton:(id)arg1;
- (void)hideBottomBorderForButton:(id)arg1;
- (id /* block */)onSheetSwitch;
- (void)setOnSheetSwitch:(id /* block */)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (unsigned int)defaultIndex;
- (void)setDefaultIndex:(unsigned int)arg1;
- (id)selectedButton;
- (void).cxx_destruct;
@end
