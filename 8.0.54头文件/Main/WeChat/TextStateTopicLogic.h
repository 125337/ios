@interface TextStateTopicLogic : NSObject
{
    id <TextStateTopicLogicDelegate> _delegate; // +0x8
    TextStateTopicFactory * _factory; // +0x10
    NSMutableArray * _topics; // +0x18
    NSMutableDictionary * _idToTopic; // +0x20
    NSMutableDictionary * _usernameToTopicId; // +0x28
    NSMutableOrderedSet * _sortedUsernameSet; // +0x30
    NSString * _presentType; // +0x38
}
- (id)init;
- (void)initData;
- (unsigned long long)topicUsernameCount;
- (id)topicTextStateForUsername:(id)arg1;
- (id)topicSortedUsernameList;
- (id)getTopics;
- (id)topicForId:(id)arg1;
- (void)constructTopicsFromData:(id)arg1 presentType:(id)arg2;
- (void)updateTopicWithUsername:(id)arg1 textState:(id)arg2;
- (void)privateAddOrUpdateTopicWithUsername:(id)arg1 textState:(id)arg2;
- (void)privateDeleteTopicWithUsername:(id)arg1;
- (void)sortTopics;
- (id)factory;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setFactory:(id)arg1;
- (id)topics;
- (void)setTopics:(id)arg1;
- (id)idToTopic;
- (void)setIdToTopic:(id)arg1;
- (id)usernameToTopicId;
- (void)setUsernameToTopicId:(id)arg1;
- (id)sortedUsernameSet;
- (void)setSortedUsernameSet:(id)arg1;
- (id)presentType;
- (void)setPresentType:(id)arg1;
- (void).cxx_destruct;
@end

