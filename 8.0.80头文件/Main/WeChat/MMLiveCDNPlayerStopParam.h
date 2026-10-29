@interface MMLiveCDNPlayerStopParam : NSObject
{
    BOOL _relateToStopPIP; // +0x8
}
+ (id)generateStopParamWithStopPIP:(BOOL)arg1;
- (id)description;
- (BOOL)relateToStopPIP;
- (void)setRelateToStopPIP:(BOOL)arg1;
@end
