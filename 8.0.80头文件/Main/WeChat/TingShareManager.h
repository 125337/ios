@interface TingShareManager : NSObject <SendAppMsgHandleDelegate, WCCommitViewResultDelegate, ForwardMessageLogicDelegate>
{
    SendAppMsgHandler * _sendAppMsgHandler; // +0x8
    ForwardMessageLogicController * _forwardLogicController; // +0x10
}
- (void)brand_messageFromTingItem:(id)arg1 observer:(id)arg2 completion:(id /* block */)arg3;
- (void)brand_cancelMessageFromTingItem:(id)arg1 observer:(id)arg2;
- (id)sendAppMsgHandler;
- (id)forwardLogicController;
- (id)shareThumbnailData:(id)arg1;
- (void)loadShareThumbnailDataForUrl:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)canShowFidnerSinger;
- (void)shareToFriend:(id)arg1 withConfig:(id)arg2;
- (void)shareToMoment:(id)arg1;
- (void)messageFromTingItem:(id)arg1 completion:(id /* block */)arg2;
- (void)shareToFriendWithTingItem:(id)arg1 categoryItem:(id)arg2;
- (void)shareToFriendWithTingItem:(id)arg1 categoryItem:(id)arg2 config:(id)arg3;
- (void)shareToMomentWithTingItem:(id)arg1 categoryItem:(id)arg2;
- (void)shareToTextStateWithTingItem:(id)arg1 commentInfo:(id)arg2 viewController:(id)arg3;
- (void)shareToFavouriteWithTingItem:(id)arg1;
- (id)favItemFromTingItem:(id)arg1 coverImageData:(id)arg2;
- (void)messageFromCategoryItem:(id)arg1 completion:(id /* block */)arg2;
- (id)messageFromCategoryItem:(id)arg1 listenItem:(id)arg2;
- (void)shareToFriendWithCategoryItem:(id)arg1;
- (void)shareToFriendWithCategoryItem:(id)arg1 config:(id)arg2;
- (void)shareToMomentWithCategoryItem:(id)arg1;
- (void)shareToFavouriteWithCategoryItem:(id)arg1;
- (void)shareTingChatRoomToFriendWithCategoryItem:(id)arg1 listenItem:(id)arg2;
- (void)shareTingChatRoomForwardWithCategoryItem:(id)arg1 listenItem:(id)arg2 userName:(id)arg3;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)OnSendAppMsgOKToContacts:(id)arg1;
- (void)sendAppMsg:(id)arg1 searchScene:(unsigned long long)arg2;
- (void)showSharePreConfirmToContact:(id)arg1 tingItem:(id)arg2 categoryItem:(id)arg3 inView:(id)arg4;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)setSendAppMsgHandler:(id)arg1;
- (void)setForwardLogicController:(id)arg1;
- (void).cxx_destruct;
@end
