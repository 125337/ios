@interface MMFinderLiveGloryGiftWallTipsSheet : MMPageSheetBaseView
{
    UIView * _gloryLine; // +0x8
    MMUILabel * _gloryTitleLabel; // +0x10
    MMUILabel * _gloryDetailLabel; // +0x18
    UIImageView * _gloryIntroImageView; // +0x20
    UIView * _giftWallLine; // +0x28
    MMUILabel * _giftWallTitleLabel; // +0x30
    MMUILabel * _giftWallDetailLabel; // +0x38
    UIImageView * _giftWallIntroImageView; // +0x40
}
- (id)init;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (id)gloryLine;
- (id)gloryTitleLabel;
- (id)gloryDetailLabel;
- (id)gloryIntroImageView;
- (id)giftWallLine;
- (id)giftWallTitleLabel;
- (id)giftWallDetailLabel;
- (id)giftWallIntroImageView;
- (void)setGloryLine:(id)arg1;
- (void)setGloryTitleLabel:(id)arg1;
- (void)setGloryDetailLabel:(id)arg1;
- (void)setGloryIntroImageView:(id)arg1;
- (void)setGiftWallLine:(id)arg1;
- (void)setGiftWallTitleLabel:(id)arg1;
- (void)setGiftWallDetailLabel:(id)arg1;
- (void)setGiftWallIntroImageView:(id)arg1;
- (void).cxx_destruct;
@end
