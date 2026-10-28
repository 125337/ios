@interface MMFinderLivePaidConnectMicAnchorSettingConfig : NSObject
{
    NSArray * _availableConnectDurations; // +0x8
    NSArray * _disconnectOptions; // +0x10
    NSArray * _availableConnectPrices; // +0x18
    NSArray * _availableBidPrices; // +0x20
}
+ (id)fromPurchaseConfig:(id)arg1;
- (id)availableConnectDurations;
- (void)setAvailableConnectDurations:(id)arg1;
- (id)disconnectOptions;
- (void)setDisconnectOptions:(id)arg1;
- (id)availableConnectPrices;
- (void)setAvailableConnectPrices:(id)arg1;
- (id)availableBidPrices;
- (void)setAvailableBidPrices:(id)arg1;
- (void).cxx_destruct;
@end
