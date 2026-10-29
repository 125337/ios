@interface TingAudioRadioSquareDataServiceCpp : UnitRCObjcBaseProxyClass <TingAudioRadioSquareDataService>
+ (id)sharedInstance;
+ (id)sharedInstanceForAudioRadio;
+ (int)feedItemSourceType:(id)arg1;
- (BOOL)addListener:(id)arg1;
- (BOOL)removeListener:(id)arg1;
- (id)radioShutdownController;
- (id)getSquareCategoryItem;
@end
