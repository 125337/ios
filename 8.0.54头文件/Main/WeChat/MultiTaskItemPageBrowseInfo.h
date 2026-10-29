@interface MultiTaskItemPageBrowseInfo : NSObject
{
    NSString * _contextId; // +0x8
    NSString * _itemId; // +0x10
    unsigned long long _itemType; // +0x18
    NSString * _ItemSubId; // +0x20
    unsigned long long _duration; // +0x28
    unsigned long long _lastStartTime; // +0x30
}
- (id)contextId;
- (void)setContextId:(id)arg1;
- (id)itemId;
- (void)setItemId:(id)arg1;
- (unsigned long long)itemType;
- (void)setItemType:(unsigned long long)arg1;
- (id)ItemSubId;
- (void)setItemSubId:(id)arg1;
- (unsigned long long)duration;
- (void)setDuration:(unsigned long long)arg1;
- (unsigned long long)lastStartTime;
- (void)setLastStartTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

