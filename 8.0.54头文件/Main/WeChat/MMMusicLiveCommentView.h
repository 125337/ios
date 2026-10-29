@interface MMMusicLiveCommentView : UIView <UITableViewDelegate, UITableViewDataSource, MMMusicLiveCommentModelDelegate, MMusicLiveCommentCommonDelegate, MMMusicLiveCommentUnreadMentionViewDelegate>
{
    BOOL _notJustShowPeopleCount; // +0x8
    BOOL _isScrollingToBottom; // +0x9
    id <MMMusicLiveCommentViewDelegate> _delegate; // +0x10
    MMMusicLiveCommentModel * _model; // +0x18
    MMMusicLiveCommentStatusView * _statusView; // +0x20
    MMTableView * _tableView; // +0x28
    UIView * _backgroundView; // +0x30
    CAGradientLayer * _fadeOutLayer; // +0x38
    MMMusicLiveCommentCommonNoticeView * _noticeView; // +0x40
    MMMusicLiveCommentUnreadMentionView * _unreadMentionView; // +0x48
    long long _maxDisplayIndex; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 model:(id)arg2;
- (void)setupSubviews;
- (void)setNotJustShowPeopleCount:(BOOL)arg1;
- (void)layoutSubviews;
- (void)layoutUnreadView;
- (void)adjustContentHeight:(BOOL)arg1;
- (void)notifyCommentViewContentChanged;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)isTableViewAtBottom;
- (void)setFrame:(CGRect)arg1;
- (void)setModel:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)showNextNotice;
- (void)liveCommentModelDidAppendData:(id)arg1;
- (void)liveCommentModelDidAddNotice:(id)arg1;
- (void)liveCommentModel:(id)arg1 didModifiedDataAt:(unsigned long long)arg2;
- (void)onCommentLongPressed:(id)arg1;
- (void)onCommentClicked:(id)arg1;
- (void)onCommentDetailViewClicked:(id)arg1;
- (void)onTapUnreadMention;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)model;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (BOOL)notJustShowPeopleCount;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)fadeOutLayer;
- (void)setFadeOutLayer:(id)arg1;
- (id)noticeView;
- (void)setNoticeView:(id)arg1;
- (id)unreadMentionView;
- (void)setUnreadMentionView:(id)arg1;
- (long long)maxDisplayIndex;
- (void)setMaxDisplayIndex:(long long)arg1;
- (BOOL)isScrollingToBottom;
- (void)setIsScrollingToBottom:(BOOL)arg1;
- (void).cxx_destruct;
@end

