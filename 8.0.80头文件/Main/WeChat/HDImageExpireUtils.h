@interface HDImageExpireUtils : NSObject
+ (int)getRecordRawAssetExpireDuration;
+ (int)getImageExpireDuration;
+ (int)getVideoExpireDuration;
+ (int)getCdnExpireDurationInKitchen;
+ (BOOL)isMsgExpire:(id)arg1;
+ (int)getMsgRemainDay:(id)arg1;
+ (BOOL)isCleanOriginMsgOpened;
+ (BOOL)isMsgExpireWithCreateTime:(unsigned int)arg1;
@end
