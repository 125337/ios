@interface WCRedEnvelopesNetworkHelper : MMObject <PBMessageObserverDelegate>
{
    id <WCRedEnvelopesNetworkHelperDelegate> m_delegate; // +0x8
    NSMutableDictionary * m_dicCGIStartedTime; // +0x10
}
+ (void)initialize;
+ (void)idkeyCmdReport:(unsigned int)arg1 keyName:(id)arg2;
+ (void)idkeyCmdReport:(unsigned int)arg1 keyName:(id)arg2 value:(unsigned int)arg3;
- (id)init;
- (void)dealloc;
- (void)WCToOpenIMCommonRequest:(id)arg1;
- (void)WCToHongbaoCommonRequest:(id)arg1;
- (void)WCToYearHongbaoRequest:(id)arg1;
- (void)WCToEnterpriseHBBizReq:(id)arg1;
- (void)WCToEnterpriseCommonBizReq:(id)arg1;
- (void)WCToAsyncBizSubcribeReq:(id)arg1;
- (void)MessageReturnOnOpenIMHongbao:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnOnLiveStreamHongbao:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnOnHongbao:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnOnEnterpriseHongbao:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnOnCommonBizHongbao:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnOnAsyncBizSubScribe:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportHongBaoTenPayRes:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
