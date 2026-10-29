@interface WCGiftCardMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    NSMutableDictionary * _successDic; // +0x8
    NSMutableDictionary * _failureDic; // +0x10
    WCCardCDNDownloadHelper * _helper; // +0x18
}
+ (id)sourceLocalPath;
+ (id)sourceTempPath;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
- (void)dealloc;
- (void)preAcceptGiftCardWithBizUin:(unsigned int)arg1 orderId:(id)arg2 chatroomName:(id)arg3 success:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)acceptGiftCardWithBizUin:(unsigned int)arg1 orderId:(id)arg2 chatroomName:(id)arg3 doNotAccept:(BOOL)arg4 success:(id /* block */)arg5 failure:(id /* block */)arg6;
- (void)getGiftCardWithBizUin:(unsigned int)arg1 orderId:(id)arg2 success:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)cancelAllGiftCardCgi;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getVideoByUrl:(id)arg1 aesKey:(id)arg2 length:(unsigned int)arg3 success:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)getPicbyUrl:(id)arg1 aeskey:(id)arg2 length:(unsigned int)arg3 success:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)uploadKVByType:(long long)arg1 orderId:(id)arg2 BizUin:(unsigned int)arg3 giftUserName:(id)arg4;
- (id)giftFilePathByFileName:(id)arg1;
- (id)giftFileTempPathByFileName:(id)arg1;
- (id)handlePreAccept:(id)arg1;
- (id)handleAccept:(id)arg1;
- (id)handleGiftCard:(id)arg1;
- (id)successDic;
- (id)failureDic;
- (id)helper;
- (void)setSuccessDic:(id)arg1;
- (void)setFailureDic:(id)arg1;
- (void)setHelper:(id)arg1;
- (void).cxx_destruct;
@end
