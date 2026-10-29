@interface WCDeviceUtil : NSObject
+ (id)parseWCDeviceMsg:(id)arg1;
+ (long long)genTaskId;
+ (unsigned int)getDeviceBoundRelationshipVersion;
+ (BOOL)saveDeviceBoundRelationshipVersion:(unsigned int)arg1;
+ (unsigned int)hashString:(id)arg1;
+ (BOOL)parseConnectProto:(id)arg1 :(id)arg2;
+ (AccessoryCmd *)deepCopyAccessoryCmd:(AccessoryCmd *)arg1;
+ (id)parseDeviceRankMessageXML:(id)arg1;
+ (id)parseDeviceLikeMessageXML:(id)arg1;
+ (BOOL)isInternalSportBrand:(id)arg1;
+ (id)displayNameFromDevice:(id)arg1;
+ (id)deviceFromHardDevice:(id)arg1 DeviceAttr:(id)arg2;
+ (unsigned int)getUploadStepBeginTime;
+ (id)deviceFromILinkDeviceInfo:(id)arg1;
@end

