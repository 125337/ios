@interface MMFinderLiveLotteryGetPrizeMethodDataItem : NSObject
{
    BOOL _isSelect; // +0x8
    unsigned int _index; // +0xc
    unsigned long long _cellStyle; // +0x10
    NSString * _title; // +0x18
    NSString * _stateTitle; // +0x20
}
+ (id)initLotteryMethodDataItemWithCellStyle:(unsigned long long)arg1 title:(id)arg2 stateTitle:(id)arg3 isSelect:(BOOL)arg4;
- (double)getLotteryTableCellHeight;
- (unsigned long long)cellStyle;
- (void)setCellStyle:(unsigned long long)arg1;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)stateTitle;
- (void)setStateTitle:(id)arg1;
- (BOOL)isSelect;
- (void)setIsSelect:(BOOL)arg1;
- (void).cxx_destruct;
@end
