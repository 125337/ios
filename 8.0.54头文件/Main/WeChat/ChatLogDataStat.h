@interface ChatLogDataStat : NSObject <PBCoding>
{
    NSMutableDictionary * _dicFileInfo; // +0x8
    NSMutableDictionary * _dicSessionInfo; // +0x10
    long long _cacheVersion; // +0x18
    NSRecursiveLock * _markLock; // +0x20
}
+ (void)PBArrayAdd_dicFileInfo;
+ (void)PBArrayAdd_dicSessionInfo;
+ (void)PBArrayAdd_cacheVersion;
+ (void)initialize;
+ (id)loadChatLogStatFromFile;
+ (BOOL)saveChatLogStat:(id)arg1 isAll:(BOOL)arg2;
+ (void)resetChatLogStat;
- (id)getPBPropertyTable;
- (id)init;
- (id)getSessionInfoForKey:(id)arg1;
- (void)saveSessionInfo:(id)arg1 withKey:(id)arg2;
- (id)getObjectForKey:(id)arg1;
- (void)saveObject:(id)arg1 withKey:(id)arg2;
- (id)convertSessionItemToInfo:(shared_ptr<ChatLogSessionItem>)arg1;
- (shared_ptr<ChatLogSessionItem>)convertSessionItemInfoToItem:(id)arg1;
- (id)dicFileInfo;
- (void)setDicFileInfo:(id)arg1;
- (id)dicSessionInfo;
- (void)setDicSessionInfo:(id)arg1;
- (long long)cacheVersion;
- (void)setCacheVersion:(long long)arg1;
- (id)markLock;
- (void)setMarkLock:(id)arg1;
- (void).cxx_destruct;
@end

