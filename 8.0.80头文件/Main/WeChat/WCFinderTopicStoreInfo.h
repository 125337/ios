@interface WCFinderTopicStoreInfo : NSObject <PBCoding>
{
    unsigned long long _topicId; // +0x8
    NSString * _topic; // +0x10
}
+ (void)PBArrayAdd_topicId;
+ (void)PBArrayAdd_topic;
+ (void)initialize;
+ (id)fromTopicInfo:(id)arg1;
+ (id)fromTopicInfoList:(id)arg1;
- (id)getPBPropertyTable;
- (id)converTopicInfo;
- (unsigned long long)topicId;
- (void)setTopicId:(unsigned long long)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (void).cxx_destruct;
@end
