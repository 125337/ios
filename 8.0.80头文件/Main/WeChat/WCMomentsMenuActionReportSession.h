@interface WCMomentsMenuActionReportSession : MMObject
{
    long long _scene; // +0x8
    WCMomentsMenuActionReportSnsInfo * _snsInfo; // +0x10
    long long _actionType; // +0x18
    WCMomentsMenuActionReportForwardInfo * _forwardInfo; // +0x20
    WCMomentsMenuActionReportExtInfo * _extInfo; // +0x28
}
+ (id)replaceCommaToSemicolon:(id)arg1;
- (void)report;
- (id)generateReportString;
- (id)generateSnsInfoString;
- (id)generateForwardInfoString;
- (id)snsInfo;
- (id)forwardInfo;
- (id)generateExtInfoString;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (void)setSnsInfo:(id)arg1;
- (long long)actionType;
- (void)setActionType:(long long)arg1;
- (void)setForwardInfo:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
