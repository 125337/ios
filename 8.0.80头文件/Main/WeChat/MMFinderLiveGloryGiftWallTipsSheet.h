@interface MMFinderLiveGloryGiftWallTipsSheet : MMPageSheetBaseView
{
    UIView * _giftWallLine; // +0x8
    MMUILabel * _giftWallTitleLabel; // +0x10
    MMUILabel * _giftWallDetailLabel; // +0x18
    UIImageView * _giftWallIntroImageView; // +0x20
}
- (id)init;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (id)giftWallLine;
- (id)giftWallTitleLabel;
- (id)giftWallDetailLabel;
- (id)giftWallIntroImageView;
- (void)setGiftWallLine:(id)arg1;
- (void)setGiftWallTitleLabel:(id)arg1;
- (void)setGiftWallDetailLabel:(id)arg1;
- (void)setGiftWallIntroImageView:(id)arg1;
- (void).cxx_destruct;
@end
