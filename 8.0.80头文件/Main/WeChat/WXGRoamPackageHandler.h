@interface WXGRoamPackageHandler : NSObject
{
    BOOL _isSupportWxam; // +0x8
    BOOL _isSupportOpusVoice; // +0x9
    BOOL _isSupportHeic; // +0xa
    BOOL _isSupportH265; // +0xb
    NSString * _migrationMediaRoot; // +0x10
    WCTDatabase * _migrationDatabase; // +0x18
    NSRecursiveLock * _handlerLock; // +0x20
    unsigned long long _msgListTotalSizeLimit; // +0x28
    NSMutableDictionary * _producerMap; // +0x30
}
+ (id)convertFrom:(id)arg1;
+ (unsigned long long)mediaFiltered:(id)arg1 svrIDs:(id)arg2 mediaIDs:(id)arg3 mediaTypes:(id)arg4 resWithFilteredList:(id)arg5;
+ (id)getMediaIDForMessage:(id)arg1 dataID:(id)arg2;
- (id)init;
- (id)getRoamPackage:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 offset:(unsigned long long)arg4 limit:(unsigned int)arg5;
- (id)getRoamPackageFastly:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 offset:(unsigned long long)arg4 limit:(unsigned int)arg5 TextOnly:(BOOL)arg6 descending:(BOOL)arg7;
- (id)getRoamPackageFastly:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 offset:(unsigned long long)arg4 limit:(unsigned int)arg5 TextOnly:(BOOL)arg6 needStatus:(BOOL)arg7 descending:(BOOL)arg8;
- (id)getRoamPackageFastlyConcurrent:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 offset:(unsigned long long)arg4 limit:(unsigned int)arg5 TextOnly:(BOOL)arg6 needStatus:(BOOL)arg7 descending:(BOOL)arg8;
- (BOOL)isSupportWxam;
- (void)setIsSupportWxam:(BOOL)arg1;
- (BOOL)isSupportOpusVoice;
- (void)setIsSupportOpusVoice:(BOOL)arg1;
- (BOOL)isSupportHeic;
- (void)setIsSupportHeic:(BOOL)arg1;
- (BOOL)isSupportH265;
- (void)setIsSupportH265:(BOOL)arg1;
- (id)migrationMediaRoot;
- (void)setMigrationMediaRoot:(id)arg1;
- (id)migrationDatabase;
- (void)setMigrationDatabase:(id)arg1;
- (id)handlerLock;
- (void)setHandlerLock:(id)arg1;
- (unsigned long long)msgListTotalSizeLimit;
- (void)setMsgListTotalSizeLimit:(unsigned long long)arg1;
- (id)producerMap;
- (void)setProducerMap:(id)arg1;
- (void).cxx_destruct;
@end
