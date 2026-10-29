@interface WCMomentsMenuActionReportSession : MMObject
{
    long long _scene; // +0x8
    WCMomentsMenuActionReportSnsInfo * _snsInfo; // +0x10
    long long _actionType; // +0x18
    WCMomentsMenuActionReportForwardInfo * _forwardInfo; // +0x20
}
- (void)report;
- (id)generateReportString;
- (id)generateSnsInfoString;
- (id)generateForwardInfoString;
- (id)snsInfo;
- (id)forwardInfo;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (void)setSnsInfo:(id)arg1;
- (long long)actionType;
- (void)setActionType:(long long)arg1;
- (void)setForwardInfo:(id)arg1;
- (void).cxx_destruct;
@end

