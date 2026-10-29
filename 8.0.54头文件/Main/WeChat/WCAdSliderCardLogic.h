@interface WCAdSliderCardLogic : WCAdvertiseOperationLogicBase
{
    BOOL _isOpeningAnimationVisible; // +0x8
    WCAdSliderCardView * _sliderCardViewCache; // +0x10
    WCAdSliderCardOpeningAnimationView * _openingAnimationViewCache; // +0x18
    WCAdSliderCardProductView * _productViewCache; // +0x20
    WCDataItem * _dataItem; // +0x28
    unsigned long long _contentItemScene; // +0x30
}
+ (id)getLogicWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (id)initWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void)setIsOpeningAnimationVisible:(BOOL)arg1;
- (void)notifyOpeningAnimationVisibleStateChanged;
- (id)sliderCardViewCache;
- (void)setSliderCardViewCache:(id)arg1;
- (id)openingAnimationViewCache;
- (void)setOpeningAnimationViewCache:(id)arg1;
- (id)productViewCache;
- (void)setProductViewCache:(id)arg1;
- (BOOL)isOpeningAnimationVisible;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

