@interface HDImageExpireUtils : NSObject
+ (int)getImageExpireDuration;
+ (int)getVideoExpireDuration;
+ (int)getCdnExpireDurationInKitchen;
+ (BOOL)isMsgExpire:(id)arg1;
+ (int)getMsgRemainDay:(id)arg1;
+ (BOOL)isExptCleanOriginMsgOpened;
+ (BOOL)isCleanOriginMsgOpened;
@end

