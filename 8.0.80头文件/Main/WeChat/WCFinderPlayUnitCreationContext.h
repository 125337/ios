@interface WCFinderPlayUnitCreationContext : NSObject
{
    BOOL _hasHorizontalScrollUnit; // +0x8
    NSMutableArray * _horizontalScrollUnits; // +0x10
    NSMutableArray * _verticalScrollUnits; // +0x18
}
- (id)init;
- (id)horizontalScrollUnits;
- (void)setHorizontalScrollUnits:(id)arg1;
- (id)verticalScrollUnits;
- (void)setVerticalScrollUnits:(id)arg1;
- (BOOL)hasHorizontalScrollUnit;
- (void)setHasHorizontalScrollUnit:(BOOL)arg1;
- (void).cxx_destruct;
@end
