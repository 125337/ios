@interface CBTMDTableCell : UICollectionViewCell <CBTStreamMDTextViewDelegate, CBTMDTableCellDataDelegate, CBTMDTableCellDataDelegate>
{
    BOOL _showVerticalDivider; // +0x8
    id <CBTMDTableCellDelegate> _delegate; // +0x10
    double _cellPadding; // +0x18
    double _headerCellPadding; // +0x20
    double _cellSpacing; // +0x28
    unsigned long long _columnCount; // +0x30
    CBTMDTableCellData * _cellData; // +0x38
    CBTStreamMDTextView * _textView; // +0x40
    CALayer * _topBorderLayer; // +0x48
    CALayer * _leftBorderLayer; // +0x50
    CALayer * _bottomBorderLayer; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (id)createBorderLayer;
- (void)setContentWithCellData:(id)arg1;
- (void)updateBorderForRow:(unsigned long long)arg1 column:(unsigned long long)arg2 totalRows:(unsigned long long)arg3 totalColumns:(unsigned long long)arg4;
- (void)updateAlignment;
- (void)updateBorderLayer;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBorderColors;
- (void)prepareForReuse;
- (id)footnoteDefInfoList;
- (void)onTextViewHeightChange:(id)arg1 height:(double)arg2;
- (void)onTextViewWidthChange:(id)arg1 width:(double)arg2;
- (void)onClickLink:(id)arg1;
- (void)onCellDataUpdate:(id)arg1;
- (void)onCellDataSizeUpdate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)showVerticalDivider;
- (void)setShowVerticalDivider:(BOOL)arg1;
- (double)cellPadding;
- (void)setCellPadding:(double)arg1;
- (double)headerCellPadding;
- (void)setHeaderCellPadding:(double)arg1;
- (double)cellSpacing;
- (void)setCellSpacing:(double)arg1;
- (unsigned long long)columnCount;
- (void)setColumnCount:(unsigned long long)arg1;
- (id)cellData;
- (void)setCellData:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)topBorderLayer;
- (void)setTopBorderLayer:(id)arg1;
- (id)leftBorderLayer;
- (void)setLeftBorderLayer:(id)arg1;
- (id)bottomBorderLayer;
- (void)setBottomBorderLayer:(id)arg1;
- (void).cxx_destruct;
@end
