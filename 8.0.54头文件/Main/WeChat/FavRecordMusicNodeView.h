@interface FavRecordMusicNodeView : FavRecordLeftThumbRightLabelNodeView <MMWebImageViewDelegate, MMMusicPlayerContollerDelegate>
{
    MMMusicPlayerContoller * m_musicPlayButton; // +0x78
    UIImage * _mvThumbImage; // +0x80
}
- (void)addContentSubView;
- (void)addMusicThumbView;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (void)addMusicPlayButton;
- (void)updateNodeWithTimePrefix:(int)arg1 headHidden:(BOOL)arg2 bottomLineHidden:(BOOL)arg3;
- (void)setPlayerSource:(long long)arg1;
- (void)updateMinimizeThumbImage:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(BOOL)arg3;
- (id)mvThumbImage;
- (void)setMvThumbImage:(id)arg1;
- (void).cxx_destruct;
@end

