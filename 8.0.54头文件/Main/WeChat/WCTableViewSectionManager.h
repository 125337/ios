@interface WCTableViewSectionManager : NSObject
{
    BOOL _bDrawNoSeparator; // +0x8
    BOOL _bDrawSeparatorBetweenCells; // +0x9
    BOOL _shouldRefreshHeaderAtSizeChange; // +0xa
    BOOL _shouldRefreshFooterAtSizeChange; // +0xb
    unsigned long long _cellMode; // +0x10
    UIView * _headerView; // +0x18
    UIView * _footerView; // +0x20
    NSString * _headerTitle; // +0x28
    NSString * _footerTitle; // +0x30
    NSMutableAttributedString * _attributedHeaderTitle; // +0x38
    NSMutableAttributedString * _attributedFooterTitle; // +0x40
    double _fHeaderHeight; // +0x48
    double _fFooterHeight; // +0x50
    double _fTopLineLeftInset; // +0x58
    double _fTopLineRightInset; // +0x60
    double _fBottomLineLeftInset; // +0x68
    double _fBottomLineRightInset; // +0x70
    id _userInfo; // +0x78
    UITableView * _tableView; // +0x80
    NSMutableArray * _cells; // +0x88
    double _lastTableWidth; // +0x90
}
+ (id)defaultSection;
+ (id)sectionWithHeader:(id)arg1;
+ (id)sectionWithFooter:(id)arg1;
+ (id)sectionWithHeader:(id)arg1 Footer:(id)arg2;
+ (id)sectionWithHeaderView:(id)arg1;
+ (id)sectionWithFooterView:(id)arg1;
+ (id)sectionWithHeaderView:(id)arg1 FooterView:(id)arg2;
+ (id)sectionInfoDefaut;
+ (id)sectionInfoHeader:(id)arg1;
+ (id)sectionInfoFooter:(id)arg1;
+ (id)sectionInfoHeader:(id)arg1 Footer:(id)arg2;
+ (id)sectionInfoHeaderWithView:(id)arg1;
+ (id)sectionInfoFooterWithView:(id)arg1;
- (id)init;
- (void)addCell:(id)arg1;
- (void)didBeClickedAt:(id)arg1;
- (id)makeViewWith:(id)arg1 attributedTitle:(id)arg2 topPading:(double)arg3 bottomPadding:(double)arg4;
- (id)getHeaderView;
- (id)getFooterView;
- (void)insertCell:(id)arg1 At:(unsigned int)arg2;
- (unsigned long long)getCellCount;
- (id)getAllCells;
- (id)getCellAt:(unsigned long long)arg1;
- (void)removeCellAt:(unsigned long long)arg1;
- (void)setFooterView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setFooterTitle:(id)arg1;
- (void)setAttributedFooterTitle:(id)arg1;
- (void)setAttributedHeaderTitle:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (unsigned long long)cellMode;
- (void)setCellMode:(unsigned long long)arg1;
- (id)headerView;
- (id)footerView;
- (id)headerTitle;
- (id)footerTitle;
- (id)attributedHeaderTitle;
- (id)attributedFooterTitle;
- (double)fHeaderHeight;
- (void)setFHeaderHeight:(double)arg1;
- (double)fFooterHeight;
- (void)setFFooterHeight:(double)arg1;
- (double)fTopLineLeftInset;
- (void)setFTopLineLeftInset:(double)arg1;
- (double)fTopLineRightInset;
- (void)setFTopLineRightInset:(double)arg1;
- (double)fBottomLineLeftInset;
- (void)setFBottomLineLeftInset:(double)arg1;
- (double)fBottomLineRightInset;
- (void)setFBottomLineRightInset:(double)arg1;
- (BOOL)bDrawNoSeparator;
- (void)setBDrawNoSeparator:(BOOL)arg1;
- (BOOL)bDrawSeparatorBetweenCells;
- (void)setBDrawSeparatorBetweenCells:(BOOL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)cells;
- (void)setCells:(id)arg1;
- (double)lastTableWidth;
- (void)setLastTableWidth:(double)arg1;
- (BOOL)shouldRefreshHeaderAtSizeChange;
- (void)setShouldRefreshHeaderAtSizeChange:(BOOL)arg1;
- (BOOL)shouldRefreshFooterAtSizeChange;
- (void)setShouldRefreshFooterAtSizeChange:(BOOL)arg1;
- (void).cxx_destruct;
@end

