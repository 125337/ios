@interface WCFinderJumpBigButton : MMUIButton <WCFinderJumpInfoViewProtocol>
{
    BOOL _needHighlight; // +0x8
    int _showPosition; // +0xc
    id <WCFinderJumpBigButtonDelegate> _delegate; // +0x10
    WCFinderJumpInfo * _jumpInfo; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setNeedHighlight:(BOOL)arg1;
- (void)reloadWithFollowState:(BOOL)arg1;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (id)jumpInfo;
- (int)showPosition;
- (void)hiddenBigButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)needHighlight;
- (void)setJumpInfo:(id)arg1;
- (void)setShowPosition:(int)arg1;
- (void).cxx_destruct;
@end

