@interface WCFinderJumpInfoAnimationView : UIView <WCFinderNetPagViewDelegate, WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderJumpInfoAnimationViewDelegate> _delegate; // +0x10
    double _maxWidth; // +0x18
    WCFinderJumpInfo * _jumpInfo; // +0x20
    FinderJumpInfo_Style * _style; // +0x28
    WCFinderNetPagView * _pagView; // +0x30
    UILabel * _wordingLabel; // +0x38
}
- (id)init;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2 playPos:(double)arg3;
- (void)onVideoPlayStateChanged:(BOOL)arg1;
- (void)changeToShow:(BOOL)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (id)jumpInfo;
- (int)showPosition;
- (double)animationStartProgress:(double)arg1;
- (void)layoutUI;
- (void)updatePagWithPath:(id)arg1;
- (id)pagView;
- (id)wordingLabel;
- (void)onFinderPagViewDidLoad:(BOOL)arg1 path:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void)setJumpInfo:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (void)setShowPosition:(int)arg1;
- (void)setPagView:(id)arg1;
- (void)setWordingLabel:(id)arg1;
- (void).cxx_destruct;
@end
