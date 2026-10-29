@interface NewLifeShowUserInfoHandler : NewLifeActionHandler <MMUIHalfScreenViewControllerDelegate, WCFinderFansProfileViewControllerDelegate>
{
    MMUIViewController * _viewController; // +0x8
    JumpToShowUserInfoReq * _request; // +0x10
    WCFinderMention * _mention; // +0x18
    WCFinderCommentDetailViewModel * _commentViewModel; // +0x20
    WCFinderComment * _comment; // +0x28
    WCFinderDataItem * _dataItem; // +0x30
    NewLifeThumbUpInfo * _thumbUpInfo; // +0x38
    FinderLikeInfo * _finderLikeInfo; // +0x40
}
- (void)handleRequest:(id)arg1;
- (void)endHandler;
- (unsigned long long)actionType;
- (unsigned long long)profileRefScene;
- (unsigned long long)fromSceneType;
- (BOOL)showMsgButton;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)showAddBlackListViewWithContact:(id)arg1;
- (void)showRevertBlackListActionViewWithComment:(id)arg1;
- (void)showBlackListActionViewWithComment:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (id)mention;
- (void)setMention:(id)arg1;
- (id)commentViewModel;
- (void)setCommentViewModel:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)thumbUpInfo;
- (void)setThumbUpInfo:(id)arg1;
- (id)finderLikeInfo;
- (void)setFinderLikeInfo:(id)arg1;
- (void).cxx_destruct;
@end

