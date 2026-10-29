@interface WAMainFrameTaskBarSectionMusicViewCell : WAMainFrameTaskBarSectionOtherViewCell
{
    MMImageView * _playIcon; // +0x8
    MMMusicInfo * _curMusicInfo; // +0x10
}
- (void)dealloc;
- (void)initView;
- (void)layoutSubviews;
- (BOOL)supportAddToMinimize;
- (id)defaultImage;
- (void)updateWithListInfo:(id)arg1;
- (id)getCurLeftImage;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(BOOL)arg3;
- (void).cxx_destruct;
@end
