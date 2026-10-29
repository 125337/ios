@interface WCInputTextCacheMgr : NSObject
{
    NSMutableArray * _arrCacheText; // +0x8
    NSMutableDictionary * _dicRedEnvelopesReceiveInfo; // +0x10
    BOOL m_bNeedCacheRecieveInfo; // +0x18
    NSMutableDictionary * pasteLengthDic; // +0x20
    NSMutableDictionary * extBeanDic; // +0x28
}
- (id)init;
- (void)saveCacheText;
- (void)dealloc;
- (id)cacheTextKey:(id)arg1 refCommentItem:(id)arg2;
- (void)uncacheText:(id)arg1 refCommentItem:(id)arg2;
- (void)cacheText:(id)arg1 image:(id)arg2 emoji:(id)arg3 refDataItem:(id)arg4 refCommentItem:(id)arg5 PasteLogic:(id)arg6 withExtBean:(id)arg7;
- (id)getCacheText:(id)arg1 refCommentItem:(id)arg2 PasteLogic:(id)arg3 withExtBean:(id)arg4;
- (void)saveRedEnvelopesReceiveInfo;
- (void)cacheRewardStatus:(id)arg1;
- (void)cacheFreeStatus:(id)arg1;
- (id)getRedEnvelopesInfoByDataItem:(id)arg1;
- (void)saveAllCache;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (void).cxx_destruct;
@end
