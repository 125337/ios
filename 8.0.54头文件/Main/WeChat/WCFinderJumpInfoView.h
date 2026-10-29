@interface WCFinderJumpInfoView : UIView <WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderJumpInfoViewBaseDelegate> _delegate; // +0x10
    WCFinderJumpInfo * _jumpInfo; // +0x18
    FinderJumpInfo_Style * _style; // +0x20
}
+ (BOOL)shouldHiddenJumpInfoView:(id)arg1 playPos:(double)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (id)jumpInfo;
- (int)showPosition;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setJumpInfo:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (void)setShowPosition:(int)arg1;
- (void).cxx_destruct;
@end

