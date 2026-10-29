@interface MMFloorPickView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    NSArray * levels; // +0x8
    NSString * buildingId; // +0x10
    NSIndexPath * selectIndexPath; // +0x18
    BOOL _needHidden; // +0x20
    QMapView * _mapView; // +0x28
    double _scaleLength; // +0x30
    long long _reportShowCount; // +0x38
    long long _reportTapCount; // +0x40
    UITableView * _tableView; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)setScaleLength:(double)arg1;
- (id)tableView;
- (void)changeActiveBuilding:(id)arg1;
- (void)changeActiveIndoorInfo:(id)arg1;
- (void)updateCurrentStatus;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)mapView;
- (void)setMapView:(id)arg1;
- (BOOL)needHidden;
- (void)setNeedHidden:(BOOL)arg1;
- (double)scaleLength;
- (long long)reportShowCount;
- (void)setReportShowCount:(long long)arg1;
- (long long)reportTapCount;
- (void)setReportTapCount:(long long)arg1;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
@end

