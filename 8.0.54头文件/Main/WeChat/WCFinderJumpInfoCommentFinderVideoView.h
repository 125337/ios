@interface WCFinderJumpInfoCommentFinderVideoView : UIView <WCFinderJumpInfoViewProtocol, WCFinderJumpInfoInteractable>
{
    id <WCFinderJumpInfoInteractDelegate> _interactDelegate; // +0x8
    WCFinderJumpInfo * _jumpInfo; // +0x10
    WCFinderJumpInfoCommentFinderVideoViewModel * _model; // +0x18
    UIImageView * _videoCover; // +0x20
    UIImageView * _playIcon; // +0x28
    UIImageView * _likeIcon; // +0x30
    UILabel * _likeCountLabel; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupView;
- (void)_updateView;
- (void)_updateLayout;
- (void)didTapConverView;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (int)showPosition;
- (id)videoCover;
- (id)playIcon;
- (id)likeIcon;
- (id)likeCountLabel;
- (id)interactDelegate;
- (void)setInteractDelegate:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void)setVideoCover:(id)arg1;
- (void)setPlayIcon:(id)arg1;
- (void)setLikeIcon:(id)arg1;
- (void)setLikeCountLabel:(id)arg1;
- (void).cxx_destruct;
@end

