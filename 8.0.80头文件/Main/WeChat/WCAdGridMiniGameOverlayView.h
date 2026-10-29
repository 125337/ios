@interface WCAdGridMiniGameOverlayView : MMUIView
{
    UIView * _bgColorView; // +0x8
    MMWebImageView * _avatarImageView; // +0x10
    MMUILabel * _nameLabel; // +0x18
    WCCollectedSubAdItem * _subAdItem; // +0x20
    WCMediaItem * _mediaItem; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 subAdItem:(id)arg2 mediaItem:(id)arg3;
- (void)setupSubviews;
- (void)loadAvatar;
- (id)fetchAvatarFromCache;
- (void)applyColors;
- (void)layoutSubviews;
- (id)bgColorView;
- (void)setBgColorView:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)subAdItem;
- (void)setSubAdItem:(id)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (void).cxx_destruct;
@end
