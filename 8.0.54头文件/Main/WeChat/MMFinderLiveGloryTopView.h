@interface MMFinderLiveGloryTopView : MMUIView <MMFinderLiveGloryTopItemViewDelegate>
{
    id <MMFinderLiveGloryTopViewDelegate> _delegate; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    MMUIImageView * _backgroundView; // +0x18
    MMUILabel * _titleView; // +0x20
    MMUIView * _seperatorLine; // +0x28
    MMUILabel * _titleTipsView; // +0x30
    MMFinderLiveGloryTopItemView * _top1UserView; // +0x38
    MMFinderLiveGloryTopItemView * _top2UserView; // +0x40
    MMFinderLiveGloryTopItemView * _top3UserView; // +0x48
    MMFinderLiveSharePubbleTipView * _tipsPubbleView; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2 delegate:(id)arg3;
- (void)setupSubviews;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)updateWithContacts:(id)arg1;
- (id)backgroundView;
- (id)titleView;
- (id)seperatorLine;
- (id)titleTipsView;
- (id)top1UserView;
- (id)top2UserView;
- (id)top3UserView;
- (id)liveTask;
- (BOOL)alwaysDark;
- (void)onTappedTopViewWithContact:(id)arg1;
- (void)showTipsOn:(id)arg1;
- (void)hidePubbleTipsView;
- (id)audienceLogReporter;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setSeperatorLine:(id)arg1;
- (void)setTitleTipsView:(id)arg1;
- (void)setTop1UserView:(id)arg1;
- (void)setTop2UserView:(id)arg1;
- (void)setTop3UserView:(id)arg1;
- (id)tipsPubbleView;
- (void)setTipsPubbleView:(id)arg1;
- (void).cxx_destruct;
@end

