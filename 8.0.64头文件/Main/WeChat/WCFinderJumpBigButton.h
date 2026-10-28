@interface WCFinderJumpBigButton : MMUIButton <WCFinderJumpInfoViewProtocol>
{
    BOOL _needHighlight; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setNeedHighlight:(BOOL)arg1;
- (void)reloadWithFollowState:(BOOL)arg1;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)hiddenBigButton;
- (BOOL)needHighlight;
@end
