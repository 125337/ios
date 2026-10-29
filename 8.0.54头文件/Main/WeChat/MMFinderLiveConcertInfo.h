@interface MMFinderLiveConcertInfo : NSObject
{
    BOOL _isConcert; // +0x8
    NSString * _concertActivityId; // +0x10
    unsigned long long _topicId; // +0x18
    unsigned long long _topicType; // +0x20
}
+ (id)concertInfoWithBackendModel:(id)arg1;
- (BOOL)isConcert;
- (void)setIsConcert:(BOOL)arg1;
- (id)concertActivityId;
- (void)setConcertActivityId:(id)arg1;
- (unsigned long long)topicId;
- (void)setTopicId:(unsigned long long)arg1;
- (unsigned long long)topicType;
- (void)setTopicType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

