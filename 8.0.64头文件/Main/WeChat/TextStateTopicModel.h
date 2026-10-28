@interface TextStateTopicModel : NSObject <NSCopying>
{
    NSString * _topicId; // +0x8
    OrderedDictionary * _usernameToTextState; // +0x10
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)iconWrap;
- (id)usernames;
- (void)addOrUpdateUsername:(id)arg1 textState:(id)arg2;
- (void)deleteUsername:(id)arg1;
- (id)textStateForUsername:(id)arg1;
- (id)anyTextState;
- (void)sortUsernames;
- (long long)compare:(id)arg1;
- (void)inserSelfStatus;
- (id)topicPresentType;
- (void)onTopicAddOrUpdateWithTextState:(id)arg1;
- (void)onTopicDeleteWithTextState:(id)arg1;
- (id)clusterPresent;
- (BOOL)localJudgeClusterWithTopicId:(id)arg1;
- (id)topicId;
- (void)setTopicId:(id)arg1;
- (id)usernameToTextState;
- (void)setUsernameToTextState:(id)arg1;
- (void).cxx_destruct;
@end
