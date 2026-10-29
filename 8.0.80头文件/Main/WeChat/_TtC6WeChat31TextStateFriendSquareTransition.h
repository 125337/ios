@interface _TtC6WeChat31TextStateFriendSquareTransition : NSObject <UIViewControllerTransitioningDelegate>
{
    void * friendSquare; // +0x8
    void * cardList; // +0x10
    void * username; // +0x18
    void * dismissUsername; // +0x28
}
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)friendSquare;
- (void)setFriendSquare:(id)arg1;
- (id)cardList;
- (void)setCardList:(id)arg1;
- (id)initWithFriendSquare:(id)arg1 cardList:(id)arg2;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)dismissUsername;
- (void)setDismissUsername:(id)arg1;
- (id)internalDismissHeadImage;
- (void)onWillBeginInternalDismiss;
- (void)onWillEndInternalDismiss;
- (void)onDidCancelInternalDismiss;
- (id)init;
- (void).cxx_destruct;
@end
