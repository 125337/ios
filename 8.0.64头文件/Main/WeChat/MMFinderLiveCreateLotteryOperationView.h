@interface MMFinderLiveCreateLotteryOperationView : MMPageSheetBaseView <MMFinderLiveCreateLotteryOperationViewDelegate>
{
    BOOL _noneData; // +0x8
    id <MMFinderLiveCreateLotteryOperationViewDelegate><UITableViewDelegate><UITableViewDataSource> _operationDelegate; // +0x10
    MMFinderLiveCreateLotteryViewModel * _lotteryGetPrizeMethodViewModel; // +0x18
    CAShapeLayer * _shapeLayer; // +0x20
    UIView * _contentView; // +0x28
    MMFinderLiveChooseClarityViewNavBar * _navBar; // +0x30
    MMTableView * _lotteryMethodTableView; // +0x38
    NSIndexPath * _selectIndexPath; // +0x40
    long long _locationId; // +0x48
    MMFinderLiveCreateLotteryTableHeaderView * _headerView; // +0x50
    MMUIButton * _rightButton; // +0x58
    MMUILabel * _leftLabel; // +0x60
    long long _previousOrientation; // +0x68
}
+ (id)getCreateLotteryOperationView:(id)arg1;
- (void)updateTableviewWithCount:(long long)arg1 locationId:(long long)arg2;
- (void)updateNoneDataView:(BOOL)arg1;
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
- (id)rightButton;
- (id)leftLabel;
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
- (void)setRightButton:(id)arg1;
- (void)setLeftLabel:(id)arg1;
- (long long)previousOrientation;
- (void)setPreviousOrientation:(long long)arg1;
- (BOOL)noneData;
- (void)setNoneData:(BOOL)arg1;
- (void).cxx_destruct;
@end
