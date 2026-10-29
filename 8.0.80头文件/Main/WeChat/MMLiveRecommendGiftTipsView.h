@interface MMLiveRecommendGiftTipsView : MMRectTriangleArrowView <MMFinderLiveGiftResourceMgrExt>
{
    unsigned long long _scene; // +0x8
    MMFinderLiveRewardGiftItem * _giftItem; // +0x10
    id /* block */ _tapAction; // +0x18
    MMFinderLiveTaskId * _liveTaskId; // +0x20
    NSString * _wording; // +0x28
    UIImageView * _thumbnailView; // +0x30
    MMUIView * _expireDaysContainerView; // +0x38
    MMUILabel * _expireDaysLabel; // +0x40
    MMUILabel * _recommendWordingLabel; // +0x48
    MMUILabel * _priceLabel; // +0x50
    UIImageView * _coinIconView; // +0x58
    UIView * _seperatorLine; // +0x60
}
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2 orientation:(long long)arg3;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)removeAllSubViews;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)selfCornerRadius;
- (id)getDefaultGiftThumbImage;
- (void)onTapGiftTipsView;
- (void)updateWithScene:(unsigned long long)arg1 giftItem:(id)arg2 wording:(id)arg3;
- (id)currentBasicReportParams;
- (id)finderLiveTask;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 resType:(long long)arg2 productId:(id)arg3 downloadUrl:(id)arg4;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)giftItem;
- (void)setGiftItem:(id)arg1;
- (id /* block */)tapAction;
- (void)setTapAction:(id /* block */)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)expireDaysContainerView;
- (void)setExpireDaysContainerView:(id)arg1;
- (id)expireDaysLabel;
- (void)setExpireDaysLabel:(id)arg1;
- (id)recommendWordingLabel;
- (void)setRecommendWordingLabel:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)coinIconView;
- (void)setCoinIconView:(id)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (void).cxx_destruct;
@end
