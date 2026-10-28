@interface WCFinderGetTopicRecommendMusicCGIParams : NSObject
{
    int _topicType; // +0x8
    unsigned long long _topicId; // +0x10
    NSString * _encryptedEventTopicId; // +0x18
    NSString * _topicWording; // +0x20
    NSString * _fromObjectId; // +0x28
}
- (unsigned long long)topicId;
- (void)setTopicId:(unsigned long long)arg1;
- (id)encryptedEventTopicId;
- (void)setEncryptedEventTopicId:(id)arg1;
- (id)topicWording;
- (void)setTopicWording:(id)arg1;
- (int)topicType;
- (void)setTopicType:(int)arg1;
- (id)fromObjectId;
- (void)setFromObjectId:(id)arg1;
- (void).cxx_destruct;
@end
