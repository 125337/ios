@interface CBTMDTableConfig : NSObject
{
    BOOL _showHeader; // +0x8
    BOOL _showTableBorder; // +0x9
    BOOL _showVerticalDivider; // +0xa
    BOOL _streaming; // +0xb
    NSString * _headerText; // +0x10
    double _headerCellPadding; // +0x18
    double _cellPadding; // +0x20
    double _cellSpacing; // +0x28
    double _cellMaxWidth; // +0x30
    double _visibleWidth; // +0x38
}
+ (id)defaultConfig;
- (double)cellHeightForContentHeight:(double)arg1 isHeader:(BOOL)arg2;
- (BOOL)showHeader;
- (void)setShowHeader:(BOOL)arg1;
- (id)headerText;
- (void)setHeaderText:(id)arg1;
- (BOOL)showTableBorder;
- (void)setShowTableBorder:(BOOL)arg1;
- (BOOL)showVerticalDivider;
- (void)setShowVerticalDivider:(BOOL)arg1;
- (double)headerCellPadding;
- (void)setHeaderCellPadding:(double)arg1;
- (double)cellPadding;
- (void)setCellPadding:(double)arg1;
- (double)cellSpacing;
- (void)setCellSpacing:(double)arg1;
- (double)cellMaxWidth;
- (void)setCellMaxWidth:(double)arg1;
- (double)visibleWidth;
- (void)setVisibleWidth:(double)arg1;
- (BOOL)streaming;
- (void)setStreaming:(BOOL)arg1;
- (void).cxx_destruct;
@end
