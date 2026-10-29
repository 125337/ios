@interface TingRedDotServiceCpp : UnitRCObjcBaseProxyClass <TingRedDotService>
+ (id)sharedInstance;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)requestRedDotItem:(id)arg1 version:(int)arg2;
- (id)getCenterRedDotItem;
- (void)clearCenterRedDotItem;
- (void)clearCenterRedDotItemWithParams:(id)arg1;
- (id)getRedDotItem:(int)arg1;
- (void)clearRedDotItemFromScene:(int)arg1 scene:(int)arg2;
@end
