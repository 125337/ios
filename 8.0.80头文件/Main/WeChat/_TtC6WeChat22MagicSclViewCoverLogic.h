@interface _TtC6WeChat22MagicSclViewCoverLogic : NSObject
{
     startupCoverView; // +0x8
     startupCoverDebug; // +0x10
     hasRemoveCover; // +0x18
     showCoverTimestampMs; // +0x20
     hasReportClickCover; // +0x28
     shownCoverPath; // +0x30
     shownCoverEnvironment; // +0x40
     sclView; // +0x58
    void * frameSet; // +0x60
     bizName; // +0x68
     imageCache; // +0x78
}
- (id)frameSet;
- (void)setFrameSet:(id)arg1;
- (id)initWithSclView:(id)arg1 bizName:(id)arg2;
- (void)showStartupCoverView;
- (void)removeStartupCoverViewFromScl;
- (void)onSclViewAddSubView;
- (void)onSclViewLayout;
- (id)init;
- (void).cxx_destruct;
@end
