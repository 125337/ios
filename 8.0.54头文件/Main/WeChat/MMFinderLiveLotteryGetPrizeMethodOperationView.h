@interface MMFinderLiveLotteryGetPrizeMethodOperationView : MMPageSheetBaseView <MMFinderLiveLotteryGetPrizeMethodDelegate>
{
    MMFinderLiveLotteryGetPrizeMethodDataItem * _selectItem; // +0x8
    id <MMFinderLiveLotteryGetPrizeMethodOperationViewDelegate> _operationDelegate; // +0x10
    MMFinderLiveLotteryGetPrizeMethodViewModel * _lotteryGetPrizeMethodViewModel; // +0x18
    CAShapeLayer * _shapeLayer; // +0x20
    UIView * _contentView; // +0x28
    MMFinderLiveLotteryMethodOperationViewNavBar * _navBar; // +0x30
    MMTableView * _lotteryMethodTableView; // +0x38
    NSIndexPath * _selectIndexPath; // +0x40
    long long _previousOrientation; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)pageSheetDidRotation;
- (id)initWithLotteryMethodData:(id)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)updateData:(id)arg1;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateSelfViewShapeClip;
- (double)contentViewHeight;
- (id)lotteryMethodTableView;
- (double)getLotteryTableHeight;
- (id)lotteryMethodTableViewModel;
- (id)contentView;
- (id)navBar;
- (void)didSelectRowWithItem:(id)arg1 indexPath:(id)arg2;
- (id)selectItem;
- (void)setSelectItem:(id)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)lotteryGetPrizeMethodViewModel;
- (void)setLotteryGetPrizeMethodViewModel:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setNavBar:(id)arg1;
- (void)setLotteryMethodTableView:(id)arg1;
- (id)selectIndexPath;
- (void)setSelectIndexPath:(id)arg1;
- (long long)previousOrientation;
- (void)setPreviousOrientation:(long long)arg1;
- (void).cxx_destruct;
@end

