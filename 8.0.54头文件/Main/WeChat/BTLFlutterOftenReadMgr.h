@interface BTLFlutterOftenReadMgr : MMUserService <BrandTimelineMsgMgrExt, MMServiceProtocol>
{
    MemoryMappedKV * _autoExpiredKV; // +0x8
}
+ (BOOL)isContactHasMsgInTime:(unsigned int)arg1 username:(id)arg2;
- (void)onServiceInit;
- (id)autoExpiredKV;
- (id)getContactData:(id)arg1;
- (void)resetNewMsgStatusIfNeed:(id)arg1;
- (void)resetNewMsgStatusIfNeedWhenOpenUrl:(id)arg1 msgSvrId:(unsigned long long)arg2;
- (void)onAddBrandTimelineMsg:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)setAutoExpiredKV:(id)arg1;
- (void).cxx_destruct;
@end

