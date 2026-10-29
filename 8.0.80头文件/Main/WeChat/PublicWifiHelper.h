@interface PublicWifiHelper : MMObject
+ (id)genSessionKey;
+ (id)stringForNow;
+ (int)getSvrTypeFromWifiScene:(unsigned int)arg1;
+ (void)logCloseGuidePageOfProtoOneWithAPMac:(id)arg1;
+ (void)logCloseGuidePageOfProtoFourWithAPMac:(id)arg1;
+ (void)logClickCompleteButtonOfCompletePageWithAPMac:(id)arg1 followBrand:(int)arg2 protoType:(int)arg3;
+ (BOOL)isWifiConnected;
+ (BOOL)isNeedSpecialHandling;
@end
