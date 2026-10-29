@interface WCAdBreakFrameClickView : MMUIButton
{
    WCAdBreakFrameClickInfo * _clickInfo; // +0x8
    id <WCAdBreakFrameClickViewDelegate> _delegate; // +0x10
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)checkAreaCanClick:(CGPoint)arg1;
- (id)clickInfo;
- (void)setClickInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
