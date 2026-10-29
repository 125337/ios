@interface WAReportOperateRealtimeItem : WAReportBaseItem
{
    unsigned int _itemId; // +0x8
    unsigned int _itemType; // +0xc
    unsigned int _priority; // +0x10
    unsigned int _retryInterval; // +0x14
    unsigned int _retryCount; // +0x18
    unsigned int _action; // +0x1c
}
- (int)reportID;
- (id)reportString;
- (unsigned int)itemId;
- (void)setItemId:(unsigned int)arg1;
- (unsigned int)itemType;
- (void)setItemType:(unsigned int)arg1;
- (unsigned int)priority;
- (void)setPriority:(unsigned int)arg1;
- (unsigned int)retryInterval;
- (void)setRetryInterval:(unsigned int)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
@end
