@interface MMEmoticonLiteAppViewController : MMLiteAppViewController <EmoticonListCgiDelegate>
{
    EmoticonListCgi * _cgi; // +0x70
    unsigned long long _sessionId; // +0x78
}
- (void)viewDidLoad;
- (BOOL)isStoreHomePage;
- (void)configData;
- (id)handleSpecialKey:(id)arg1 capKey:(id)arg2;
- (void)capitalizeKeysForDispatch:(id)arg1;
- (void)onGetCellSetList:(id)arg1 andEmotionList:(id)arg2 hotNums:(id)arg3 forResult:(unsigned long long)arg4 reqType:(unsigned int)arg5 reqId:(id)arg6 pbData:(id)arg7;
- (void)onGetListFailedForReqType:(unsigned int)arg1;
- (id)cgi;
- (void)setCgi:(id)arg1;
- (unsigned long long)sessionId;
- (void)setSessionId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
