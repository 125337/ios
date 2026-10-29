@interface RecentReadReportItem : NSObject
{
    int _actionType; // +0x8
    BizRecentReadSmallItemViewModel * _viewModel; // +0x10
    unsigned long long _timeStamp; // +0x18
}
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (unsigned long long)timeStamp;
- (void)setTimeStamp:(unsigned long long)arg1;
- (int)actionType;
- (void)setActionType:(int)arg1;
- (void).cxx_destruct;
@end

