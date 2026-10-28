@interface WXGRoamPackageHandler : NSObject
{
    BOOL _isSupportWxam; // +0x8
    NSRecursiveLock * _handlerLock; // +0x10
    unsigned long long _msgListTotalSizeLimit; // +0x18
    NSMutableDictionary * _producerMap; // +0x20
}
+ (id)convertFrom:(id)arg1;
+ (unsigned long long)mediaFiltered:(id)arg1 svrIDs:(id)arg2 mediaIDs:(id)arg3 mediaTypes:(id)arg4 resWithFilteredList:(id)arg5;
+ (id)getMediaIDForMessage:(id)arg1 dataID:(id)arg2;
- (id)init;
- (id)getRoamPackage:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 offset:(unsigned long long)arg4 limit:(unsigned int)arg5;
- (id)getRoamPackageFastly:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 offset:(unsigned long long)arg4 limit:(unsigned int)arg5 TextOnly:(BOOL)arg6;
- (BOOL)isSupportWxam;
- (void)setIsSupportWxam:(BOOL)arg1;
- (id)handlerLock;
- (void)setHandlerLock:(id)arg1;
- (unsigned long long)msgListTotalSizeLimit;
- (void)setMsgListTotalSizeLimit:(unsigned long long)arg1;
- (id)producerMap;
- (void)setProducerMap:(id)arg1;
- (void).cxx_destruct;
@end
