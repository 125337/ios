@interface WCFinderJumpInfoMultiPacketView : UIView <WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderJumpInfoMultiPacketViewDelegate> _delegate; // +0x10
    double _maxWidth; // +0x18
    WCFinderRichTextView * _titleView; // +0x20
    NSMutableArray * _pagViewArray; // +0x28
    WCFinderJumpInfo * _titleJumpInfo; // +0x30
    NSMutableArray * _packetJumpInfoArray; // +0x38
}
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)updateWithJumpInfoArray:(id)arg1 showPosition:(int)arg2;
- (void)changeToShow:(BOOL)arg1;
- (void)startExposeAction;
- (void)endExposeAction;
- (id)jumpInfo;
- (int)showPosition;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (id)jumpInfoArray;
- (void)layoutUI;
- (void)onPagViewDidClick:(id)arg1;
- (id)contentVM;
- (id)titleView;
- (id)pagViewArray;
- (id)genPageView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void)setTitleView:(id)arg1;
- (void)setPagViewArray:(id)arg1;
- (id)titleJumpInfo;
- (void)setTitleJumpInfo:(id)arg1;
- (id)packetJumpInfoArray;
- (void)setPacketJumpInfoArray:(id)arg1;
- (void)setShowPosition:(int)arg1;
- (void).cxx_destruct;
@end
