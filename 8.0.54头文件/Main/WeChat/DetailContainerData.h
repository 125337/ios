@interface DetailContainerData : NSObject
{
    TableCellViewData * _cellData; // +0x8
    RedDot * _redDot; // +0x10
    DetailSubIcon * _subIcon; // +0x18
    UIImage * _rightIcon; // +0x20
}
- (id)cellData;
- (void)setCellData:(id)arg1;
- (id)redDot;
- (void)setRedDot:(id)arg1;
- (id)subIcon;
- (void)setSubIcon:(id)arg1;
- (id)rightIcon;
- (void)setRightIcon:(id)arg1;
- (void).cxx_destruct;
@end

