@interface WCFinderJumpInfoPagView : UIView <WCFinderNetPagViewDelegate, WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    WCFinderJumpInfo * _jumpInfo; // +0x10
    WCFinderNetPagView * _pagView; // +0x18
}
- (void)setFrame:(CGRect)arg1;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (id)jumpInfo;
- (int)showPosition;
- (void)startExposeAction;
- (void)endExposeAction;
- (id)pagView;
- (void)onFinderPagViewDidLoad:(BOOL)arg1 path:(id)arg2;
- (void)setJumpInfo:(id)arg1;
- (void)setShowPosition:(int)arg1;
- (void)setPagView:(id)arg1;
- (void).cxx_destruct;
@end
