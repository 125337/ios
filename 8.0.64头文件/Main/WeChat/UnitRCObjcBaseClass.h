@interface UnitRCObjcBaseClass : NSObject <UnitRCObjcBaseProtocol>
{
    UnitRCAssociatedObjc * _urObjc; // +0x8
}
- (void)notifyFieldUpdated:(int)arg1;
- (BOOL)isUnitRCProxy;
- (BOOL)isUnitRCObject;
- (id)urObjc;
- (void)setUrObjc:(id)arg1;
- (void).cxx_destruct;
@end
