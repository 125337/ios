@interface MJTemplateActivity : NSObject <MMAssetPickerUserActionTipsProtocol>
{
    BOOL _hasAppeared; // +0x8
    BOOL _isUserActionManuallyCheckedOnTipsShow; // +0x9
    BOOL _shouldRemoveOnPickerAppear; // +0xa
    BOOL _isValid; // +0xb
    NSDictionary * _activityInfo; // +0x10
    long long _beginTime; // +0x18
    long long _endTime; // +0x20
    double _maxDisplayDuration; // +0x28
    long long _maxDisplayTimesPerDay; // +0x30
    long long _minDisplayInterval; // +0x38
    NSString * _tips; // +0x40
    long long _maasEventType; // +0x48
    NSString * _sessionID; // +0x50
}
- (id)initWithDictionary:(id)arg1;
- (void)reloadData;
- (id)description;
- (void)didShowTips;
- (void)didClickTips;
- (void)didClickCloseTipsButton;
- (BOOL)canShowTips;
- (id)displayTips;
- (double)tipsDisplayDuration;
- (BOOL)isTipsMeetExpectations;
- (void)doActivityReport:(unsigned long long)arg1;
- (id)activityInfo;
- (void)setActivityInfo:(id)arg1;
- (long long)beginTime;
- (void)setBeginTime:(long long)arg1;
- (long long)endTime;
- (void)setEndTime:(long long)arg1;
- (double)maxDisplayDuration;
- (void)setMaxDisplayDuration:(double)arg1;
- (long long)maxDisplayTimesPerDay;
- (void)setMaxDisplayTimesPerDay:(long long)arg1;
- (long long)minDisplayInterval;
- (void)setMinDisplayInterval:(long long)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (long long)maasEventType;
- (void)setMaasEventType:(long long)arg1;
- (BOOL)hasAppeared;
- (void)setHasAppeared:(BOOL)arg1;
- (BOOL)isUserActionManuallyCheckedOnTipsShow;
- (void)setIsUserActionManuallyCheckedOnTipsShow:(BOOL)arg1;
- (BOOL)shouldRemoveOnPickerAppear;
- (void)setShouldRemoveOnPickerAppear:(BOOL)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
- (void).cxx_destruct;
@end
