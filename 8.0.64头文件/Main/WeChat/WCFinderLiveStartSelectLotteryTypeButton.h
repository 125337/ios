@interface WCFinderLiveStartSelectLotteryTypeButton : MMUIButton
{
    int _lotteryType; // +0x8
    id /* block */ _selectButtonBlock; // +0x10
}
+ (id)getSelectLotteryTypeButton;
- (id)getTitleWithType:(int)arg1;
- (void)chooseWithType:(int)arg1;
- (void)updateWithType:(int)arg1;
- (int)lotteryType;
- (void)setLotteryType:(int)arg1;
- (id /* block */)selectButtonBlock;
- (void)setSelectButtonBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
