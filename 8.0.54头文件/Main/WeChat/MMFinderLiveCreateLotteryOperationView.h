@interface MMFinderLiveCreateLotteryOperationView : MMPageSheetBaseView <MMFinderLiveCreateLotteryOperationViewDelegate>
{
    id <MMFinderLiveCreateLotteryOperationViewDelegate><UITableViewDelegate><UITableViewDataSource> _operationDelegate; // +0x8
    MMFinderLiveCreateLotteryViewModel * _lotteryGetPrizeMethodViewModel; // +0x10
    CAShapeLayer * _shapeLayer; // +0x18
    UIView * _contentView; // +0x20
    MMFinderLiveChooseClarityViewNavBar * _navBar; // +0x28
    MMTableView * _lotteryMethodTableView; // +0x30
    NSIndexPath * _selectIndexPath; // +0x38
    long long _locationId; // +0x40
    MMFinderLiveCreateLotteryTableHeaderView * _headerView; // +0x48
    long long _previousOrientation; // +0x50
}
+ (id)getCreateLotteryOperationView:(id)arg1;
- (void)updateTableviewWithCount:(long long)arg1 locationId:(long long)arg2;
- (void)setOperationDelegate:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)pageSheetDidRotation;
- (void)scrollToRowAtIndexPath:(id)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)pageSheetDidAppear;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (double)getCurrentHeight;
- (id)lotteryMethodTableView;
- (id)headerView;
- (double)getLotteryTableHeight;
- (id)contentView;
- (id)navBar;
- (void)createLotteryClick;
- (id)operationDelegate;
- (id)lotteryGetPrizeMethodViewModel;
- (void)setLotteryGetPrizeMethodViewModel:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setNavBar:(id)arg1;
- (void)setLotteryMethodTableView:(id)arg1;
- (id)selectIndexPath;
- (void)setSelectIndexPath:(id)arg1;
- (long long)locationId;
- (void)setLocationId:(long long)arg1;
- (void)setHeaderView:(id)arg1;
- (long long)previousOrientation;
- (void)setPreviousOrientation:(long long)arg1;
- (void).cxx_destruct;
@end

