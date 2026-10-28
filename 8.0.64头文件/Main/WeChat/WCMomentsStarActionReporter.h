@interface WCMomentsStarActionReporter : NSObject
+ (void)reportWithDataItem:(id)arg1 actinType:(unsigned long long)arg2 actionScene:(unsigned long long)arg3 entranceScene:(long long)arg4;
+ (unsigned long long)entranceTypeWithEntranceScene:(long long)arg1;
+ (unsigned long long)privacyTypeWithPostPrivacy:(long long)arg1;
+ (unsigned long long)ownerAlbumVisibleType;
@end
