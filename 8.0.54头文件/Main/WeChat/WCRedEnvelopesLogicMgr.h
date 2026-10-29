@interface WCRedEnvelopesLogicMgr : MMUserService <WCRedEnvelopesGetShowResourcesCgiDelegate, MMServiceProtocol, WCRedEnvelopesNetworkHelperDelegate>
{
    WCRedEnvelopesNetworkHelper * m_networkHelper; // +0x8
    BOOL _m_isDownloadingNewYearRes; // +0x10
    ContactUpdateHelper * _m_senderNickNameHelper; // +0x18
    WCRedEnvelopesGetShowResourcesCgi * _getShowResourcesCgi; // +0x20
}
- (id)init;
- (void)OnWCToHongbaoCommonSystemErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToHongbaoCommonErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToOpenIMHongbaoCommonResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToLiveStreamHongbaoCommonResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToHongbaoCommonResponse:(id)arg1 Request:(id)arg2;
- (void)predownloadHbShowResource:(id)arg1;
- (void)uploadNewYearResource;
- (void)preDownloadNewYearResource:(id)arg1 fileId:(id)arg2 aesKey:(id)arg3;
- (void)addOpenIMReceiveSystemMsgWithDic:(id)arg1;
- (void)addReceiveSystemMsgWithDic:(id)arg1;
- (void)OnWCToEnterpriseHBCommonErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToEnterpriseHBCommonSystemErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToEnterpriseHBCommonResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToBizHBCommonErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToBizHBCommonSystemErrorResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToBizHBCommonResponse:(id)arg1 Request:(id)arg2;
- (void)OnWCToAsyncBizSubscribeResponse:(id)arg1 Request:(id)arg2;
- (void)GetOpenIMHongbaoBusinessRequest:(id)arg1 CMDID:(unsigned int)arg2 OutputType:(unsigned int)arg3;
- (void)GetHongbaoBusinessRequest:(id)arg1 CMDID:(unsigned int)arg2 OutputType:(unsigned int)arg3;
- (void)GetYearHongbaoRequest:(id)arg1 CMDID:(unsigned int)arg2 OutputType:(unsigned int)arg3;
- (void)GetEnterpriseHongbaoBusinessRequest:(id)arg1 CMDID:(unsigned int)arg2 SendKey:(id)arg3 OutputType:(unsigned int)arg4 ShouldSubscribe:(BOOL)arg5;
- (void)GetEnterpriseHongbaoBizRequest:(id)arg1 CMDID:(unsigned int)arg2 SendKey:(id)arg3 OutputType:(unsigned int)arg4;
- (void)QueryRedEnvelopesUserInfo:(id)arg1;
- (void)QueryLiveStreamRedEnvelopesUserInfo:(id)arg1;
- (void)QueryH5RedEnvelopesUserInfo:(id)arg1;
- (void)QueryRedEnvelopesUserInfoNoCache:(id)arg1;
- (void)QueryLiveStreamRedEnvelopesUserInfoNoCache:(id)arg1;
- (void)QueryH5RedEnvelopesUserInfoNoCache:(id)arg1;
- (void)QueryOpenIMRedEnvelopesUserInfo:(id)arg1;
- (void)QueryOpenIMRedEnvelopesUserInfoNoCache:(id)arg1;
- (void)GenOpenIMRedEnvelopesPayRequest:(id)arg1;
- (void)GenRedEnvelopesPayRequest:(id)arg1;
- (void)GenLiveStreamRedEnvelopesPayRequest:(id)arg1;
- (void)ReceiverQueryLiveStreamRedEnvelopesRequest:(id)arg1;
- (void)OpenLiveStreamRedEnvelopesRequest:(id)arg1;
- (void)QueryLiveStreamRedEnvelopesDetailRequest:(id)arg1;
- (void)GenH5RedEnvelopesPayRequest:(id)arg1;
- (void)GenYearRedEnvelopesPayRequest:(id)arg1;
- (void)SendShareRedEnvelopesoRequest:(id)arg1;
- (void)ReceiverQueryRedEnvelopesRequest:(id)arg1;
- (void)ReceiverQueryOpenIMRedEnvelopesRequest:(id)arg1;
- (void)OpenOpenIMRedEnvelopesRequest:(id)arg1;
- (void)QueryOpenIMRedEnvelopesDetailRequest:(id)arg1;
- (void)OpenRedEnvelopesRequest:(id)arg1;
- (void)QueryRedEnvelopesDetailRequest:(id)arg1;
- (void)QueryUserSendOrReceiveRedEnveloperListRequest:(id)arg1;
- (void)DeleteRedEnvelopesRecord:(id)arg1;
- (void)ClearserSendOrReceiveRedEnveloperListRequest:(id)arg1;
- (void)ThanksForRedEnvelopesRequest:(id)arg1;
- (void)OpenEnterpriseRedEnvelopesRequest:(id)arg1 SendKey:(id)arg2 ShouldSubscribe:(BOOL)arg3;
- (void)ReceiveBizEnterpriseRedEnvelopesRequest:(id)arg1;
- (void)OpenBizEnterpriseRedEnvelopesRequest:(id)arg1;
- (void)CheckAuthBizEnterpriseRedEnvelopesRequest:(id)arg1;
- (void)AsyncBizSubcribeRequest:(id)arg1;
- (void)predownloadHongBaoShowResource;
- (void)onWCRedEnvelopesGetShowResourcesCgiResponseOK:(id)arg1 type:(unsigned int)arg2;
- (void)onWCRedEnvelopesGetShowResourcesCgiError:(id)arg1 errorCode:(unsigned int)arg2;
- (id)m_senderNickNameHelper;
- (void)setM_senderNickNameHelper:(id)arg1;
- (id)getShowResourcesCgi;
- (void)setGetShowResourcesCgi:(id)arg1;
- (BOOL)m_isDownloadingNewYearRes;
- (void)setM_isDownloadingNewYearRes:(BOOL)arg1;
- (void).cxx_destruct;
@end

