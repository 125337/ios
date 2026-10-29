@interface WCCardDetailTable : MMObject <PBCoding>
{
    unsigned int _showNum; // +0x8
    NSString * _title; // +0x10
    NSString * _subtitle; // +0x18
    NSArray * _rows; // +0x20
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subtitle;
+ (void)PBArrayAdd_showNum;
+ (void)PBArrayAdd_rows;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (unsigned int)showNum;
- (void)setShowNum:(unsigned int)arg1;
- (id)rows;
- (void)setRows:(id)arg1;
- (void).cxx_destruct;
@end

