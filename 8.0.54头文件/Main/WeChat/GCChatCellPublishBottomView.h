@interface GCChatCellPublishBottomView : UIView
{
    BOOL _isSelfMsg; // +0x8
    id <GCChatCellPublishBottomViewDelegate> _delegate; // +0x10
    TopicInfo * _topicInfo; // +0x18
    double _leftStartX; // +0x20
    UIButton * _publishBtn; // +0x28
    UILabel * _leftLabel; // +0x30
    UILabel * _rightLabel; // +0x38
    UIImageView * _rightArrow; // +0x40
    UITapGestureRecognizer * _tapGesture; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)publishAction;
- (void)onViewTaped;
- (void)configViewWithInfo:(id)arg1 isSelfMsg:(BOOL)arg2 leftStartX:(double)arg3;
- (void)loadSelfMsgUIStyle;
- (void)loadOtherMsgUIStyle;
- (void)setLeftStartX:(double)arg1;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topicInfo;
- (void)setTopicInfo:(id)arg1;
- (double)leftStartX;
- (BOOL)isSelfMsg;
- (void)setIsSelfMsg:(BOOL)arg1;
- (id)publishBtn;
- (void)setPublishBtn:(id)arg1;
- (id)leftLabel;
- (void)setLeftLabel:(id)arg1;
- (id)rightLabel;
- (void)setRightLabel:(id)arg1;
- (id)rightArrow;
- (void)setRightArrow:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end

