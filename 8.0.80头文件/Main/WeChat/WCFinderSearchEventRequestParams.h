@interface WCFinderSearchEventRequestParams : NSObject
{
    NSData * _lastBuffer; // +0x8
    NSString * _queryText; // +0x10
    NSString * _requestId; // +0x18
    NSString * _finderNickname; // +0x20
    NSString * _eventName; // +0x28
    unsigned long long _topicId; // +0x30
    FinderPostAttachExtInfo * _attachExtInfo; // +0x38
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONString:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)queryText;
- (void)setQueryText:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)finderNickname;
- (void)setFinderNickname:(id)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (unsigned long long)topicId;
- (void)setTopicId:(unsigned long long)arg1;
- (id)attachExtInfo;
- (void)setAttachExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
