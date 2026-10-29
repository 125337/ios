@interface MultiTaskItemAddInfo : NSObject
{
    BOOL _isExist; // +0x8
    NSString * _itemId; // +0x10
    unsigned long long _itemType; // +0x18
    unsigned long long _addType; // +0x20
    NSString * _contextId; // +0x28
    NSString * _ItemSubId; // +0x30
    long long _taskCount; // +0x38
}
- (id)itemId;
- (void)setItemId:(id)arg1;
- (unsigned long long)itemType;
- (void)setItemType:(unsigned long long)arg1;
- (unsigned long long)addType;
- (void)setAddType:(unsigned long long)arg1;
- (BOOL)isExist;
- (void)setIsExist:(BOOL)arg1;
- (id)contextId;
- (void)setContextId:(id)arg1;
- (id)ItemSubId;
- (void)setItemSubId:(id)arg1;
- (long long)taskCount;
- (void)setTaskCount:(long long)arg1;
- (void).cxx_destruct;
@end
