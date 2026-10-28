@interface WCFinderPostInputView : UIImageView <WCFinderPostUsualTopicContainerViewDelegate>
{
    BOOL _forbidRecommendTopic; // +0x8
    int _commentScene; // +0xc
    id <WCFinderPostInputViewDelegate> _delegate; // +0x10
    WCFinderPostUsualTopicLogic * _usualTopicLogic; // +0x18
    UIButton * _expressionButton; // +0x20
    WCFinderPostUsualTopicContainerView * _topicContainerView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 inputViewStyle:(unsigned long long)arg2 commentScene:(int)arg3;
- (id)topicContainerView;
- (id)usualTopicLogic;
- (id)expressionButton;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)reloadExpressionButtonImageMode:(long long)arg1;
- (void)updateInputViewStyle:(unsigned long long)arg1;
- (void)updateTopicWithTextTopicModel:(id)arg1;
- (void)horizonViewClickItemWith:(id)arg1 inputTextTopicModel:(id)arg2 dataIndex:(long long)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setUsualTopicLogic:(id)arg1;
- (BOOL)forbidRecommendTopic;
- (void)setForbidRecommendTopic:(BOOL)arg1;
- (void)setExpressionButton:(id)arg1;
- (void)setTopicContainerView:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void).cxx_destruct;
@end
