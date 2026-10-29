@interface GCImgLinkCell : GCChatBaseCell
{
    MMWebImageView * _coverImgView; // +0x8
    UIImageView * _playBtn; // +0x10
    UILabel * _timeDuration; // +0x18
    UIView * _videoLayerView; // +0x20
    UIView * _imgAndVideoContainerView; // +0x28
}
+ (void)onCalculatLayoutInfo:(id)arg1;
+ (CGSize)getFitSizeForImgSize:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)timeTextForDutation:(long long)arg1;
- (void)configureWithCellModel:(id)arg1;
- (id)coverImgView;
- (void)setCoverImgView:(id)arg1;
- (id)playBtn;
- (void)setPlayBtn:(id)arg1;
- (id)timeDuration;
- (void)setTimeDuration:(id)arg1;
- (id)videoLayerView;
- (void)setVideoLayerView:(id)arg1;
- (id)imgAndVideoContainerView;
- (void)setImgAndVideoContainerView:(id)arg1;
- (void).cxx_destruct;
@end

