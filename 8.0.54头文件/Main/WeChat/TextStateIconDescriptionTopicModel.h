@interface TextStateIconDescriptionTopicModel : TextStateTopicModel
{
    BOOL _dataConstructed; // +0x8
    NSMutableDictionary * _iconIdToTextStateList; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)topicPresentType;
- (void)onTopicAddOrUpdateWithTextState:(id)arg1;
- (void)onTopicDeleteWithTextState:(id)arg1;
- (id)clusterPresent;
- (id)mostFrequentAndRecentClusterPresent;
- (void)constructDataIfNeeded;
- (void)privateAddOrUpdateTextState:(id)arg1;
- (void)privateDeleteTextState:(id)arg1;
- (BOOL)isDataConstructed;
- (void)setDataConstructed:(BOOL)arg1;
- (id)iconIdToTextStateList;
- (void)setIconIdToTextStateList:(id)arg1;
- (void).cxx_destruct;
@end

