@interface W1wPersonalMsgReportMgr : MMUserService <MMServiceProtocol>
{
    BOOL _isReferListPage; // +0x8
    W1wCommonReport * _commonReport; // +0x10
    NSString * _referClickId; // +0x18
    NSString * _referPagePath; // +0x20
    NSString * _referListClickId; // +0x28
    NSString * _referContentClickId; // +0x30
}
- (void)report28760:(unsigned long long)arg1 actionType:(unsigned long long)arg2 itemType:(unsigned long long)arg3 isClick:(BOOL)arg4 msgSessionId:(id)arg5 pageId:(id)arg6;
- (id)getBoxInfo:(unsigned long long)arg1;
- (id)getItemInfo:(unsigned long long)arg1 msgSessionId:(id)arg2;
- (id)getBoxExtInfo:(unsigned long long)arg1 msgSessionId:(id)arg2;
- (void)sendW1wPersonalMsgDataReportWithLogId:(unsigned int)arg1 logstring:(id)arg2 category:(unsigned int)arg3;
- (id)getCommonReport;
- (void)setCommonReport:(id)arg1;
- (id)getExtInfo:(id)arg1 type:(unsigned long long)arg2;
- (void)setReferClickId:(id)arg1;
- (void)setReferPagePath:(id)arg1;
- (void)setReferListClickId:(id)arg1;
- (id)getReferListClickId;
- (void)setReferContentClickId:(id)arg1;
- (id)getReferContentClickId;
- (void)setIsReferListPage:(BOOL)arg1;
- (id)commonReport;
- (id)referClickId;
- (id)referPagePath;
- (id)referListClickId;
- (id)referContentClickId;
- (BOOL)isReferListPage;
- (void).cxx_destruct;
@end
