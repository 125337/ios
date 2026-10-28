@interface WCFinderTopicListSectionHeaderViewOptionParams : NSObject
{
    BOOL _showHighlightTopicStyle; // +0x8
    int _commentScene; // +0xc
    NSString * _topicId; // +0x10
    NSString * _topicName; // +0x18
}
- (id)topicId;
- (void)setTopicId:(id)arg1;
- (id)topicName;
- (void)setTopicName:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (BOOL)showHighlightTopicStyle;
- (void)setShowHighlightTopicStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
