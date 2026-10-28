@interface EmoticonDescMgr : MMUserService <EmoticonDescRecommandLogicDelegate, IEmoticonPackageMgrExt, PBMessageObserverDelegate, IMMLanguageMgrExt, MMServiceProtocol>
{
    NSMutableSet * _m_requestPidSet; // +0x8
    NSMutableDictionary * _m_emoticonDescCache; // +0x10
    NSMutableDictionary * _m_emoticonPackageHasDesc; // +0x18
    NSMutableDictionary * _m_emoticonPackageDescCount; // +0x20
    EmoticonDescRecommandLogic * _descRecommandLogic; // +0x28
    NSMutableSet * _requestingPids; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)requestEmoticonWrapByDesc:(id)arg1;
- (BOOL)isInWordList:(id)arg1;
- (BOOL)hasDescPid:(id)arg1;
- (unsigned long long)getEmoticonDescCountByPid:(id)arg1;
- (id)getEmoticonCurLangDescByPackageId:(id)arg1 Md5:(id)arg2 needGetRemoteDesc:(BOOL)arg3;
- (id)getEmoticonCurLangDescByPackageId:(id)arg1 Md5:(id)arg2;
- (id)getEmoticonDescByPackageId:(id)arg1 Md5:(id)arg2 withLanguageCode:(id)arg3 needGetRemoteDesc:(BOOL)arg4;
- (id)getEmoticonDescByPackageId:(id)arg1 Md5:(id)arg2 withLanguageCode:(id)arg3;
- (id)getEmoticonMsgDescForCurlangWithMsgWrap:(id)arg1;
- (id)dicFromSvrDescStr:(id)arg1;
- (BOOL)getEmoticonButtonDescByPid:(id)arg1;
- (BOOL)getEmoticonDescByPid:(id)arg1 LastRequestTime:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleRespForGetEmotionDesc:(id)arg1;
- (void)updateDescToMd5CacheFromServerPackageDesc:(id)arg1;
- (id)getWordingFromDic:(id)arg1 withCode:(id)arg2;
- (id)updateEmoticonDescFromServer:(id)arg1 shouldGetFromServer:(BOOL)arg2;
- (void)updateDescFromFile:(id)arg1 shouldUpdateFromServer:(BOOL)arg2;
- (void)updateEmoticonDescCacheWithDescList:(id)arg1 pid:(id)arg2;
- (void)onLanguageChange;
- (void)OnUpdateEmoticonPackageListFor:(unsigned long long)arg1 WithPid:(id)arg2;
- (id)getEmoticonPackageDescForPid:(id)arg1;
- (void)onEmoticonDescRecommandLogicFinishSearchWithKeyword:(id)arg1 result:(id)arg2;
- (id)m_requestPidSet;
- (void)setM_requestPidSet:(id)arg1;
- (id)m_emoticonDescCache;
- (void)setM_emoticonDescCache:(id)arg1;
- (id)m_emoticonPackageHasDesc;
- (void)setM_emoticonPackageHasDesc:(id)arg1;
- (id)m_emoticonPackageDescCount;
- (void)setM_emoticonPackageDescCount:(id)arg1;
- (id)descRecommandLogic;
- (void)setDescRecommandLogic:(id)arg1;
- (id)requestingPids;
- (void)setRequestingPids:(id)arg1;
- (void).cxx_destruct;
@end
