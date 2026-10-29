@interface WCFinderGetTopicInfoRequestParams : NSObject
{
    int _topicType; // +0x8
    int _prefetchType; // +0xc
    int _getTopicInfoFlag; // +0x10
    NSString * _topicWording; // +0x18
    unsigned long long _topicId; // +0x20
    NSString * _encryptedEventTopicId; // +0x28
    NSString * _fromObjectId; // +0x30
    NSData * _topicInfoPassbuff; // +0x38
}
- (id)initWithTopicType:(int)arg1 prefetchType:(int)arg2 topicWording:(id)arg3 topicId:(unsigned long long)arg4 encryptedEventTopicId:(id)arg5 fromObjectId:(id)arg6 topicInfoPassbuff:(id)arg7 getTopicInfoFlag:(int)arg8;
- (id)description;
- (int)topicType;
- (void)setTopicType:(int)arg1;
- (int)prefetchType;
- (void)setPrefetchType:(int)arg1;
- (id)topicWording;
- (void)setTopicWording:(id)arg1;
- (unsigned long long)topicId;
- (void)setTopicId:(unsigned long long)arg1;
- (id)encryptedEventTopicId;
- (void)setEncryptedEventTopicId:(id)arg1;
- (id)fromObjectId;
- (void)setFromObjectId:(id)arg1;
- (id)topicInfoPassbuff;
- (void)setTopicInfoPassbuff:(id)arg1;
- (int)getTopicInfoFlag;
- (void)setGetTopicInfoFlag:(int)arg1;
- (void).cxx_destruct;
@end

