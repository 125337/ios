@interface MultiTaskItemActionInfo : NSObject
{
    NSString * _contextId; // +0x8
    unsigned long long _itemType; // +0x10
    NSString * _itemId; // +0x18
    unsigned long long _position; // +0x20
    unsigned long long _exposeTimestamp; // +0x28
    unsigned long long _action; // +0x30
    NSString * _ItemSubId; // +0x38
    unsigned long long _lastExposeTimestamp; // +0x40
    unsigned long long _importTImestamp; // +0x48
    unsigned long long _aliveTime; // +0x50
    long long _operationPath; // +0x58
}
- (id)contextId;
- (void)setContextId:(id)arg1;
- (unsigned long long)itemType;
- (void)setItemType:(unsigned long long)arg1;
- (id)itemId;
- (void)setItemId:(id)arg1;
- (unsigned long long)position;
- (void)setPosition:(unsigned long long)arg1;
- (unsigned long long)exposeTimestamp;
- (void)setExposeTimestamp:(unsigned long long)arg1;
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
- (id)ItemSubId;
- (void)setItemSubId:(id)arg1;
- (unsigned long long)lastExposeTimestamp;
- (void)setLastExposeTimestamp:(unsigned long long)arg1;
- (unsigned long long)importTImestamp;
- (void)setImportTImestamp:(unsigned long long)arg1;
- (unsigned long long)aliveTime;
- (void)setAliveTime:(unsigned long long)arg1;
- (long long)operationPath;
- (void)setOperationPath:(long long)arg1;
- (void).cxx_destruct;
@end
