@interface VisionUnsupportMsgViewModel : TextMessageViewModel
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (BOOL)shouldShowRoomTodoView;
- (BOOL)isShowSourceView;
- (id)originContentText;
- (BOOL)canShowMsgReplyMenuItem;
@end
