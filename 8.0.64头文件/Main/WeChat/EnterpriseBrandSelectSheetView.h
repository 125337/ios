@interface EnterpriseBrandSelectSheetView : MMUIView <UIScrollViewDelegate>
{
    unsigned int _scene; // +0x8
    CContact * _mainBrandContact; // +0x10
    NSArray * _arySubContact; // +0x18
    MMScrollView * _scrollView; // +0x20
    UIPageControl * _pageControl; // +0x28
    unsigned int _rowCount; // +0x30
    unsigned int _colCount; // +0x34
    unsigned int _pageCount; // +0x38
    double _topMargin; // +0x40
    double _rowMargin; // +0x48
    double _colMargin; // +0x50
    double _pageControlMargin; // +0x58
    double _cellWidth; // +0x60
    double _cellHeight; // +0x68
    id <EnterpriseBrandSelectSheetViewDelegate> _delegate; // +0x70
}
- (id)initWithMainContact:(id)arg1 scene:(unsigned int)arg2;
- (void)initData;
- (void)layoutSubviews;
- (void)onPageControllerChangePage:(id)arg1;
- (void)onIconClicked:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
