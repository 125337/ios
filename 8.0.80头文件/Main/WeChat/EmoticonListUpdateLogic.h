@interface EmoticonListUpdateLogic : NSObject <EmoticonListCgiDelegate>
{
    id <EmoticonListUpdateLogicDelegate> _delegate; // +0x8
    NSMutableDictionary * _cgiDict; // +0x10
    NSMutableDictionary * _cgiBuffDict; // +0x18
}
- (id)init;
- (BOOL)GetEmotionListFromStore:(unsigned int)arg1 withReqType:(unsigned int)arg2;
- (BOOL)getBoughtListFromServer;
- (void)cleanBuffForReqType:(unsigned int)arg1;
- (void)endEmoticonListUpdateForReqType:(unsigned int)arg1;
- (unsigned long long)getSessionIDForReqType:(unsigned int)arg1;
- (id)getAdArrForReqType:(unsigned int)arg1;
- (void)onGetListFinishedWithBuff:(id)arg1 reqType:(unsigned int)arg2;
- (void)onGetBannerSetList:(id)arg1 andNewBannerList:(id)arg2 reqType:(unsigned int)arg3;
- (void)onGetListFailedForReqType:(unsigned int)arg1;
- (void)onGetEmojiList:(id)arg1 forResult:(unsigned long long)arg2 reqType:(unsigned int)arg3;
- (void)onGetCellSetList:(id)arg1 andEmotionList:(id)arg2 hotNums:(id)arg3 forResult:(unsigned long long)arg4 reqType:(unsigned int)arg5 reqId:(id)arg6 pbData:(id)arg7;
- (void)onGetExptConfig:(id)arg1 reqType:(unsigned int)arg2;
- (id)getBufForReqType:(unsigned int)arg1;
- (BOOL)isBufForReqTypeExist:(unsigned int)arg1;
- (id)getCgiForReqType:(unsigned int)arg1;
- (BOOL)checkIsBannerSetValid:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cgiDict;
- (void)setCgiDict:(id)arg1;
- (id)cgiBuffDict;
- (void)setCgiBuffDict:(id)arg1;
- (void).cxx_destruct;
@end
