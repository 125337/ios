@interface MMFinderLiveCreateLotteryDataItem : NSObject
{
    BOOL _isSelect; // +0x8
    BOOL _isFromStaterVC; // +0x9
    NSString * _title; // +0x10
    NSString * _stateTitle; // +0x18
    FinderLiveLotteryMethodItem * _lotteryMethodItem; // +0x20
}
+ (id)initLotteryMethodDataItemWithTitle:(id)arg1 stateTitle:(id)arg2 isSelect:(BOOL)arg3;
- (double)getLotteryTableCellHeight;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)stateTitle;
- (void)setStateTitle:(id)arg1;
- (BOOL)isSelect;
- (void)setIsSelect:(BOOL)arg1;
- (BOOL)isFromStaterVC;
- (void)setIsFromStaterVC:(BOOL)arg1;
- (id)lotteryMethodItem;
- (void)setLotteryMethodItem:(id)arg1;
- (void).cxx_destruct;
@end
