@interface WAServiceEventParam : NSObject
{
    BOOL _afterThreadInject; // +0x8
    BOOL _notAsyncIfPossibleForGameApp; // +0x9
    BOOL _permissionCheck; // +0xa
    unsigned int _srcWebviewID; // +0xc
    unsigned int _dstWebviewID; // +0x10
    NSString * _eventName; // +0x18
    NSObject * _eventParam; // +0x20
}
- (id)init;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)eventParam;
- (void)setEventParam:(id)arg1;
- (unsigned int)srcWebviewID;
- (void)setSrcWebviewID:(unsigned int)arg1;
- (unsigned int)dstWebviewID;
- (void)setDstWebviewID:(unsigned int)arg1;
- (BOOL)afterThreadInject;
- (void)setAfterThreadInject:(BOOL)arg1;
- (BOOL)notAsyncIfPossibleForGameApp;
- (void)setNotAsyncIfPossibleForGameApp:(BOOL)arg1;
- (BOOL)permissionCheck;
- (void)setPermissionCheck:(BOOL)arg1;
- (void).cxx_destruct;
@end

