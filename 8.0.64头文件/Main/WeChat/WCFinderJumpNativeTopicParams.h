@interface WCFinderJumpNativeTopicParams : NSObject
{
    int _topicType; // +0x8
    NSString * _topic; // +0x10
    NSString * _byPassInfoString; // +0x18
    NSData * _byPassInfo; // +0x20
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)byPassInfo;
- (int)topicType;
- (void)setTopicType:(int)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (id)byPassInfoString;
- (void)setByPassInfoString:(id)arg1;
- (void)setByPassInfo:(id)arg1;
- (void).cxx_destruct;
@end
