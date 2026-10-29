@interface CBTAsstBoardLegacyRenderContext : NSObject
{
    BOOL _needCell; // +0x8
    NSString * _itemType; // +0x10
    long long _pageMode; // +0x18
    CBTAsstCardWrap * _cardWrap; // +0x20
    id <CBTAsstBoardBaseViewModelDelegate> _viewModelDelegate; // +0x28
    id <CBTAsstBoardBaseCellViewDelegate> _cellDelegate; // +0x30
    double _width; // +0x38
}
- (id)itemType;
- (void)setItemType:(id)arg1;
- (long long)pageMode;
- (void)setPageMode:(long long)arg1;
- (id)cardWrap;
- (void)setCardWrap:(id)arg1;
- (BOOL)needCell;
- (void)setNeedCell:(BOOL)arg1;
- (id)viewModelDelegate;
- (void)setViewModelDelegate:(id)arg1;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (void).cxx_destruct;
@end
