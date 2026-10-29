@interface WCFinderFeedHighlightItem : NSObject
{
    unsigned int _beginTimestamp; // +0x8
    unsigned int _endTimestamp; // +0xc
    NSString * _topic; // +0x10
    NSString * _summary; // +0x18
    NSString * _uniqId; // +0x20
}
- (id)initWithLiveHighlightInfo:(id)arg1;
- (unsigned int)beginTimestamp;
- (void)setBeginTimestamp:(unsigned int)arg1;
- (unsigned int)endTimestamp;
- (void)setEndTimestamp:(unsigned int)arg1;
- (id)topic;
- (void)setTopic:(id)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (id)uniqId;
- (void)setUniqId:(id)arg1;
- (void).cxx_destruct;
@end
