@interface MMFinderLivePrepayTiersPanelViewModel : NSObject
{
    BOOL _isUpgrade; // +0x8
    unsigned int _livingTime; // +0xc
    NSString * _productTitle; // +0x10
    NSString * _eventTitle; // +0x18
    NSString * _eventDescription; // +0x20
    NSArray * _tiers; // +0x28
    NSString * _referenceId; // +0x30
}
+ (id)viewModelWithPaymentItemsResponse:(id)arg1 eventTitle:(id)arg2 eventDescription:(id)arg3 referenceId:(id)arg4;
- (BOOL)hasAvailableTiers;
- (id)productTitle;
- (void)setProductTitle:(id)arg1;
- (id)eventTitle;
- (void)setEventTitle:(id)arg1;
- (id)eventDescription;
- (void)setEventDescription:(id)arg1;
- (id)tiers;
- (void)setTiers:(id)arg1;
- (BOOL)isUpgrade;
- (void)setIsUpgrade:(BOOL)arg1;
- (id)referenceId;
- (void)setReferenceId:(id)arg1;
- (unsigned int)livingTime;
- (void)setLivingTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
