@interface WCFinderJumpInfoNextObjectHelper : NSObject
{
    WCFinderJumpInfo * _jumpInfo; // +0x8
}
+ (BOOL)shouldShowNextObjectButtonWithJumpInfo:(id)arg1;
+ (id)viewControllerWithJumpInfo:(id)arg1 tid:(id)arg2 finderUserName:(id)arg3;
+ (id)_videoCollectionViewControllerWithJumpInfo:(id)arg1 tid:(id)arg2 finderUserName:(id)arg3;
+ (id)_nativeDramaViewControllerWithJumpInfo:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end
