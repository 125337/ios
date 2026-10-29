@interface WCFinderEventHeaderActionHandler : NSObject <WCFinderEventDescriptionViewControllerDelegate, WCFinderEventHeaderViewDelegate>
{
    int _commentScene; // +0x8
    int _refCommentScene; // +0xc
    UIViewController<WCFinderFeedBaseViewControllerProtocol> * _presentingVC; // +0x10
}
+ (id)handlerWithPresentingVC:(id)arg1 commentScene:(int)arg2 refCommentScene:(int)arg3;
- (void)onEventHeaderClickAuthorInfoAction:(id)arg1;
- (void)onEventHeaderClickDescriptionDetailAction:(id)arg1;
- (void)showDescriptionJumpInfoSheet:(id)arg1;
- (void)showDescriptionViewSheet:(id)arg1;
- (void)onEventHeaderClickDescriptionContactAction:(id)arg1;
- (void)onEventHeaderClickMiniAppEntranceAction:(id)arg1;
- (void)finderEventDescriptionViewController:(id)arg1 didClickUrl:(id)arg2;
- (id)presentingVC;
- (void)setPresentingVC:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (int)refCommentScene;
- (void)setRefCommentScene:(int)arg1;
- (void).cxx_destruct;
@end

