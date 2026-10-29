@interface WCFinderCommentSearchMentionContainerView : UIView <WCFinderCommentSearchMentionHeaderViewDelegate>
{
    id <WCFinderCommentSearchMentionContainerViewDelegate> _delegate; // +0x8
    WCFinderCommentSearchMentionHeaderView * _headerView; // +0x10
    WCFinderCommentContactSelectView * _contactSelectView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupWithDelegate:(id)arg1;
- (void)resetSearchView;
- (void)setupContactSelectView;
- (void)cancelSearch;
- (void)reloadLatestCommentMentionedContacts;
- (void)resignResponder;
- (void)onClickCloseCommentSearchMentionHeaderBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)contactSelectView;
- (void)setContactSelectView:(id)arg1;
- (void).cxx_destruct;
@end
