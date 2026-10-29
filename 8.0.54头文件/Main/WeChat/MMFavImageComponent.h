@interface MMFavImageComponent : MMComponent <MMMusicPlayerContollerDelegate, FavTingPlayButtonDelegate>
{
    MMUIImageView * m_thumbImageView; // +0x10
    MMCDNImageView * m_cdnImageView; // +0x18
    MMWebImageView * m_webImageView; // +0x20
    MMUILabel * m_ocrLabel; // +0x28
    NSMutableArray * m_arrKVOImageView; // +0x30
    id <MMFavImageComponentDelegate> _delegate; // +0x38
}
+ (double)calHeightWithComData:(id)arg1;
- (void)configContentLayout;
- (void)configImage;
- (void)setFrame:(CGRect)arg1;
- (void)configPlayButton:(id)arg1;
- (void)configTingBtn:(id)arg1 comData:(id)arg2;
- (void)configMusicBtn:(id)arg1 shareItem:(id)arg2;
- (id)getThumbView;
- (id)getImgView;
- (id)getThumbImageWithDataFmt:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(BOOL)arg3;
- (BOOL)enableTingListMode;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2;
- (void)didClickPlay:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

