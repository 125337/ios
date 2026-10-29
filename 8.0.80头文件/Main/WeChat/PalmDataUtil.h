@interface PalmDataUtil : NSObject
+ (id)generateRandomSM4Key;
+ (id)generateRandomGcmIV;
+ (id)encryptPalmData:(id)arg1 outKey:(id *)arg2;
@end
