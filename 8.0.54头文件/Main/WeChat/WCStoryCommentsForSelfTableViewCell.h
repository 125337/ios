@interface WCStoryCommentsForSelfTableViewCell : MMTableViewCell <WCStoryBubbleHeadViewDelegate>
{
    id <WCStoryCommentsForSelfTableViewCellDelegate> _delegate; // +0x8
    WCStoryComment * _comment; // +0x10
    WCStoryDataItem * _dataItem; // +0x18
    WCStoryBubbleHeadView * _storyBubbleView; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initViews;
- (void)updateVoiceOverState;
- (void)setComment:(id)arg1;
- (void)setRightFunctionalBtnHidden:(BOOL)arg1;
- (void)WCStoryBubbleHeadViewHeadImageDidClick:(id)arg1;
- (void)WCStoryBubbleHeadViewHeadImageDidDoubleClick:(id)arg1;
- (void)WCStoryBubbleHeadViewBlurEffectViewDidClick:(id)arg1;
- (void)WCStoryBubbleHeadViewDeleteBtnDidClick:(id)arg1;
- (void)WCStoryBubbleHeadViewDeleteBtnDidCancel:(id)arg1;
- (void)WCStoryBubbleHeadViewReplyBtnDidClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)comment;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)storyBubbleView;
- (void)setStoryBubbleView:(id)arg1;
- (void).cxx_destruct;
@end

