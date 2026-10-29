@interface MMFinderLiveLotteryMethodOperationView : MMPageSheetBaseView <MMFinderLiveLotteryMethodOperationTableDataDelegate>
{
    id <MMFinderLiveLotteryMethodOperationViewDelegate> _operationDelegate; // +0x8
    MMFinderLiveLotteryMethodOperationTableViewModel * _lotteryMethodTableViewModel; // +0x10
    CAShapeLayer * _shapeLayer; // +0x18
    UIView * _contentView; // +0x20
    MMFinderLiveLotteryMethodOperationViewNavBar * _navBar; // +0x28
    MMTableView * _lotteryMethodTableView; // +0x30
    NSIndexPath * _selectIndexPath; // +0x38
    long long _previousOrientation; // +0x40
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
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (void)setLotteryMethodTableViewModel:(id)arg1;
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

