@interface WeDropReportManager : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _reportObjDict; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)holdReportObj:(id)arg1;
- (void)releaseReportObj:(id)arg1;
- (id)reportObjDict;
- (void)setReportObjDict:(id)arg1;
- (void).cxx_destruct;
@end
