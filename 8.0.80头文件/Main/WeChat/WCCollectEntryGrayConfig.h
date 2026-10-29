@interface WCCollectEntryGrayConfig : NSObject
+ (id)collectEntryKey;
+ (id)collectWordingKey;
+ (BOOL)isCollectEntryEnabled;
+ (BOOL)isCollectWordingEnabled;
+ (BOOL)isGrayHitWithKey:(id)arg1;
+ (id)attachEntranceVersion;
+ (BOOL)isSettableAttachEntranceVersion:(id)arg1;
+ (BOOL)setAttachEntranceVersion:(id)arg1;
+ (BOOL)isTransferEntryUpgraded;
+ (BOOL)isCollectEntryShown;
+ (BOOL)isOpenImSessionContact:(id)arg1;
+ (BOOL)isTransferEntryUpgradedForContact:(id)arg1;
+ (BOOL)isCollectEntryShownForContact:(id)arg1;
@end
