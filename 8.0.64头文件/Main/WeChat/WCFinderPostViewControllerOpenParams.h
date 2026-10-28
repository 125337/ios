@interface WCFinderPostViewControllerOpenParams : NSObject
{
    BOOL _presentAnimated; // +0x8
    WCFinderPostSessionModel * _postSession; // +0x10
    WCFinderFeedDraft * _draft; // +0x18
    UIViewController * _fromVC; // +0x20
    id <WCFinderPostViewControllerDelegate> _delegate; // +0x28
}
- (id)postSession;
- (void)setPostSession:(id)arg1;
- (id)draft;
- (void)setDraft:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)presentAnimated;
- (void)setPresentAnimated:(BOOL)arg1;
- (void).cxx_destruct;
@end
