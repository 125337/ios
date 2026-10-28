@interface CgiLiteAppInfo : NSObject <YYModel>
{
    unsigned int _itemType; // +0x8
    NSString * _itemId; // +0x10
    unsigned long long _eventTime; // +0x18
    NSString * _sourcePageJson; // +0x20
    NSString * _sessionId; // +0x28
    NSString * _dataJson; // +0x30
    NSString * _eventId; // +0x38
    NSString * _curPageJson; // +0x40
    NSString * _refPageJson; // +0x48
}
- (BOOL)checkCanReort;
- (int)checkIsWqBatch;
- (id)itemId;
- (void)setItemId:(id)arg1;
- (unsigned long long)eventTime;
- (void)setEventTime:(unsigned long long)arg1;
- (id)sourcePageJson;
- (void)setSourcePageJson:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)dataJson;
- (void)setDataJson:(id)arg1;
- (id)eventId;
- (void)setEventId:(id)arg1;
- (id)curPageJson;
- (void)setCurPageJson:(id)arg1;
- (id)refPageJson;
- (void)setRefPageJson:(id)arg1;
- (unsigned int)itemType;
- (void)setItemType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
