@interface MultiDeviceUtility : NSObject
+ (id)svgLargeIconNameFromType:(unsigned int)arg1;
+ (id)svgIconNameFromType:(unsigned int)arg1 isLocked:(BOOL)arg2;
+ (id)generateLargeIconFromType:(unsigned int)arg1;
+ (id)defaultTitleForIconType:(unsigned int)arg1;
+ (BOOL)enableLocalSyncChatForIconType:(unsigned int)arg1 clientVersion:(unsigned int)arg2;
+ (id)generateKidsWatchCheckbox;
+ (id)generateCheckboxWithSideLength:(double)arg1 selectedColor:(id)arg2;
@end
