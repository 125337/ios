@interface StatusStorageManager : NSObject
{
    weak_ptr<zidl::ZClientInvoker> client_invoker_; // +0x8
    ConcurrentDictionary * testBlockDict; // +0x18
    ConcurrentDictionary * initIconConfigBlockDict; // +0x20
    ConcurrentDictionary * cleanExpireDBBlockDict; // +0x28
    NSMapTable * statusInfoChangeEventMap; // +0x30
    NSMapTable * statusCommentChangeEventMap; // +0x38
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (void)attachClientInvoker:(const void *)arg1;
- (shared_ptr<zidl::ZClientInvoker>)getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)testAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)testAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)initWithRootDirUserNameClientVersionIsDebugMediaDirPath:(id)arg1 userName:(id)arg2 clientVersion:(int)arg3 isDebug:(BOOL)arg4 mediaDirPath:(id)arg5;
- (void)constructStatusInfoCache;
- (id)getAllCacheStatsInfo;
- (void)updateConfig:(id)arg1;
- (void)initIconConfigAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)initIconConfigAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)cleanExpireDBAsync:(long long)arg1 deleteFlag:(BOOL)arg2 keepSelf:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)cleanExpireDBAsync:(long long)arg1 deleteFlag:(BOOL)arg2 keepSelf:(BOOL)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (id)insertOrReplaceInfo:(id)arg1;
- (id)selectStatusInfoWithUsername:(id)arg1 offset:(int)arg2 count:(int)arg3 timeMsLimit:(long long)arg4;
- (id)selectStatusInfoWithId:(id)arg1;
- (id)selectStatusInfo:(id)arg1;
- (id)deleteStatusInfoWithId:(id)arg1 sequence:(int)arg2;
- (id)deleteStatusInfoWithUsername:(id)arg1 sequence:(int)arg2;
- (id)deleteTempStatusInfo:(id)arg1 createTime:(long long)arg2 sequence:(int)arg3;
- (id)updateStatusInteractData:(id)arg1 interactData:(id)arg2;
- (id)updateStatusPrivateData:(id)arg1 privateInfoData:(id)arg2;
- (id)deleteLocalPublishStatusInfo:(id)arg1;
- (BOOL)markReadUserLatestStatus:(id)arg1;
- (BOOL)setKV:(id)arg1 value:(int)arg2;
- (int)getKV:(id)arg1 defValue:(int)arg2;
- (void)subscribeStatusInfoChangeEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeStatusInfoChangeEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unSubscribeStatusInfoChangeEvent:(id)arg1;
- (void)subscribeStatusCommentChangeEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeStatusCommentChangeEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unSubscribeStatusCommentChangeEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
