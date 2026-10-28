@interface WCPlayerNameMapper : NSObject
+ (id)getPlayerStateName:(unsigned long long)arg1;
+ (id)getVideoCodecName:(unsigned int)arg1;
+ (id)getVideoProfileName:(int)arg1;
+ (id)getTransportProtocolName:(int)arg1;
+ (id)getDecoderTypeName:(long long)arg1;
+ (id)getCodecIDTypeName:(int)arg1;
+ (id)getProcessStateName:(unsigned long long)arg1;
+ (id)getStringWithPlayerMode:(unsigned long long)arg1;
@end
