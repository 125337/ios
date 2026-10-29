@interface _TtC6WeChat20FinderBulletRenderer : NSObject <CAAnimationDelegate>
{
     canvas; // +0x8
     viewPool; // +0x10
     fontCache; // +0x18
     viewMap; // +0x28
     idByView; // +0x30
     displayLeases; // +0x38
     animationStates; // +0x40
     playbackStartPoint; // +0x48
     preparedThrough; // +0x50
     onEntryDisplayed; // +0x58
     onEntryRecycled; // +0x68
     onDisplayLeaseEnded; // +0x78
     onLocalBulletAppeared; // +0x88
     interactionStateProvider; // +0x98
     lineOffsetProvider; // +0xa8
     localLineOffsetProvider; // +0xb8
}
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)init;
- (void).cxx_destruct;
@end
