@interface QBBeaconUtil : NSObject
+ (id)getFilePathWithName:(id)arg1;
+ (id)getIDFV;
+ (id)getIDFA;
+ (id)generateAesKey;
+ (id)addParamWithSIdForUploadUrl:(id)arg1 sessionId:(id)arg2;
+ (id)base64Encode:(id)arg1;
@end
