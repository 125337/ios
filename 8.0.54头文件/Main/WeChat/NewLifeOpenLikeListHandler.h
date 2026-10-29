@interface NewLifeOpenLikeListHandler : NewLifeActionHandler <WCFinderFeedFriendsLikeListViewControllerDelegate, WCFinderFansProfileViewControllerDelegate>
{
    int _scene; // +0x8
    WCFinderFeedFriendsLikeListViewController * _tmpLikeListVC; // +0x10
}
- (void)handleRequest:(id)arg1;
- (BOOL)canShowMore;
- (void)onClickLikedListClickMoreActionWith:(id)arg1 ObjectId:(id)arg2;
- (void)onClickLikedListContactWithWith:(id)arg1 LikeInfo:(id)arg2 ObjectID:(id)arg3;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)wx_fansProfileViewController:(id)arg1 clickActionWithFinderContact:(id)arg2;
- (void)onFriendsLikeListViewControllerDisappear;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)tmpLikeListVC;
- (void)setTmpLikeListVC:(id)arg1;
- (void).cxx_destruct;
@end

