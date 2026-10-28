@interface AffNewLifeMentionManager : NSObject
{
    weak_ptr<zidl::ZClientInvoker> client_invoker_; // +0x8
    ConcurrentDictionary * initWithTaskIdConfigDirUinFinderUsernameClientVersionIsStandaloneIsDebugResetDataAdOpenBlockDict; // +0x18
    NSMapTable * dataChangeEventMap; // +0x20
    ConcurrentDictionary * insertBlockDict; // +0x28
    ConcurrentDictionary * deleteByIdBlockDict; // +0x30
    ConcurrentDictionary * updateByIdBlockDict; // +0x38
    ConcurrentDictionary * getByIdBlockDict; // +0x40
    ConcurrentDictionary * getBeforeTimeLimitBlockDict; // +0x48
    ConcurrentDictionary * getAfterTimeCreateBlockDict; // +0x50
    ConcurrentDictionary * getLastBufferBlockDict; // +0x58
    ConcurrentDictionary * updateLastBufferBlockDict; // +0x60
    ConcurrentDictionary * updateLastestMentionReadIdBlockDict; // +0x68
    ConcurrentDictionary * getUnreadMentionListBlockDict; // +0x70
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (void)attachClientInvoker:(const void *)arg1;
- (shared_ptr<zidl::ZClientInvoker>)getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)initWithTaskIdConfigDirUinFinderUsernameClientVersionIsStandaloneIsDebugResetDataAdOpenAsync:(id)arg1 uin:(id)arg2 finderUsername:(id)arg3 clientVersion:(int)arg4 isStandalone:(BOOL)arg5 isDebug:(BOOL)arg6 resetData:(BOOL)arg7 adOpen:(BOOL)arg8 completion:(id /* block */)arg9;
- (void)initWithTaskIdConfigDirUinFinderUsernameClientVersionIsStandaloneIsDebugResetDataAdOpenAsync:(id)arg1 uin:(id)arg2 finderUsername:(id)arg3 clientVersion:(int)arg4 isStandalone:(BOOL)arg5 isDebug:(BOOL)arg6 resetData:(BOOL)arg7 adOpen:(BOOL)arg8 on:(id)arg9 completion:(id /* block */)arg10;
- (void)subscribeDataChangeEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeDataChangeEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unSubscribeDataChangeEvent:(id)arg1;
- (void)insertAsync:(id)arg1 finderUsername:(id)arg2 completion:(id /* block */)arg3;
- (void)insertAsync:(id)arg1 finderUsername:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)deleteByIdAsync:(id)arg1 id:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)deleteByIdAsync:(id)arg1 id:(unsigned long long)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)updateByIdAsync:(id)arg1 mentionInfo:(id)arg2 id:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)updateByIdAsync:(id)arg1 mentionInfo:(id)arg2 id:(unsigned long long)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)getByIdAsync:(id)arg1 id:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)getByIdAsync:(id)arg1 id:(unsigned long long)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)getBeforeTimeLimitAsync:(id)arg1 limit:(int)arg2 mentionType:(int)arg3 id:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)getBeforeTimeLimitAsync:(id)arg1 limit:(int)arg2 mentionType:(int)arg3 id:(unsigned long long)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)getAfterTimeCreateAsync:(id)arg1 createTime:(int)arg2 id:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)getAfterTimeCreateAsync:(id)arg1 createTime:(int)arg2 id:(unsigned long long)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)getLastBufferAsync:(id)arg1 mentionType:(int)arg2 completion:(id /* block */)arg3;
- (void)getLastBufferAsync:(id)arg1 mentionType:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)updateLastBufferAsync:(id)arg1 mentionType:(int)arg2 lastBuffer:(id)arg3 completion:(id /* block */)arg4;
- (void)updateLastBufferAsync:(id)arg1 mentionType:(int)arg2 lastBuffer:(id)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)updateLastestMentionReadIdAsync:(id)arg1 mentionType:(int)arg2 id:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)updateLastestMentionReadIdAsync:(id)arg1 mentionType:(int)arg2 id:(unsigned long long)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)getUnreadMentionListAsync:(id)arg1 mentionType:(int)arg2 completion:(id /* block */)arg3;
- (void)getUnreadMentionListAsync:(id)arg1 mentionType:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
