@interface WCAdMarketingBannerLogic : WCAdvertiseOperationLogicBase
{
    WCAdIntegratedMarketingBannerView * _bannerView; // +0x8
    WCDataItem * _dataItem; // +0x10
    unsigned long long _contentItemScene; // +0x18
}
+ (id)getMarketingBannerLogicWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (id)initWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void)prepare;
- (void)start;
- (void)pause;
- (void)stop;
- (id)bannerView;
- (void)setBannerView:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
