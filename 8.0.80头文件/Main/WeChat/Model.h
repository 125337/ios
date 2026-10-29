@interface Model : NSObject
{
    BOOL _showLoading; // +0x8
    NSString * _entranceGMsgID; // +0x10
    NSString * _appUin; // +0x18
    NSString * _bizReportData; // +0x20
}
- (id)entranceGMsgID;
- (void)setEntranceGMsgID:(id)arg1;
- (id)appUin;
- (void)setAppUin:(id)arg1;
- (id)bizReportData;
- (void)setBizReportData:(id)arg1;
- (BOOL)showLoading;
- (void)setShowLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end
