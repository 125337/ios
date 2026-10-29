@interface DataReportAbilityProviderStnImpl : NSObject <AmoebaAbilityProviderStn, PBMessageObserverDelegate>
{
    id <AmoebaStnDelegate> _stnDelegate; // +0x8
}
- (void)setDelegate:(id)arg1;
- (void)sendData:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)stnDelegate;
- (void)setStnDelegate:(id)arg1;
- (void).cxx_destruct;
@end
