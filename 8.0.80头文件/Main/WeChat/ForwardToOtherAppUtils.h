@interface ForwardToOtherAppUtils : NSObject
+ (id)forwardToOtherAppEntriesWithDisableLocalWeWork:(BOOL)arg1 canShowYuanbaoEntry:(BOOL)arg2;
+ (BOOL)hasOnlySystemShareForwardEntryWithDisableLocalWeWork:(BOOL)arg1 canShowYuanbaoEntry:(BOOL)arg2;
+ (BOOL)isLocalWeWorkExposedEntryWithDisableLocalWeWork:(BOOL)arg1;
+ (BOOL)useHKMOForwardOtherAppTipScene;
+ (id)forwardToOtherAppTitle;
@end
