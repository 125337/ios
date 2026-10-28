@interface WASheetActionReportItem : WAReportBaseItem
{
    BOOL _expandButtonEnable; // +0x8
    long long _action; // +0x10
    long long _mode; // +0x18
    long long _actionScene; // +0x20
    NSString * _fromAppId; // +0x28
    NSString * _fromSessionId; // +0x30
    NSString * _targetAppId; // +0x38
    NSString * _targetSessionId; // +0x40
}
- (int)reportID;
- (id)reportString;
- (long long)action;
- (void)setAction:(long long)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (BOOL)expandButtonEnable;
- (void)setExpandButtonEnable:(BOOL)arg1;
- (long long)actionScene;
- (void)setActionScene:(long long)arg1;
- (id)fromAppId;
- (void)setFromAppId:(id)arg1;
- (id)fromSessionId;
- (void)setFromSessionId:(id)arg1;
- (id)targetAppId;
- (void)setTargetAppId:(id)arg1;
- (id)targetSessionId;
- (void)setTargetSessionId:(id)arg1;
@end
