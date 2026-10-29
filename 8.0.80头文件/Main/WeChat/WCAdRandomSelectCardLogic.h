@interface WCAdRandomSelectCardLogic : WCAdvertiseOperationLogicBase <WCAdDynamicCanvasVCExt>
{
    UIView * _titleView; // +0x8
    UIView * _bannerView; // +0x10
    UIView * _multiCardsView; // +0x18
    WCDataItem * _dataItem; // +0x20
    unsigned long long _contentItemScene; // +0x28
    NSString * _vangoghId; // +0x30
}
- (id)initWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void)dealloc;
- (id)getRandomSelectedCards;
- (long long)getRandomSelectCardLogicStatus;
- (id)vangoghId;
- (id)randomSelectCardInfo;
- (void)onAdDynamicCanvasNotifyDidBePoped:(id)arg1;
- (void)updateRandomSelectCardInfoWithItem:(id)arg1;
- (id)fetchAdOperationLogicKey;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)bannerView;
- (void)setBannerView:(id)arg1;
- (id)multiCardsView;
- (void)setMultiCardsView:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (void)setVangoghId:(id)arg1;
- (void).cxx_destruct;
@end
