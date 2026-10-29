@interface MMFinderSocketPacket : NSObject
+ (id)packetWithBufferLength:(unsigned long long)arg1 msgType:(unsigned long long)arg2 state:(unsigned long long)arg3;
+ (id)packetWithBuffer:(id)arg1;
+ (id)packetWithBuffer:(id)arg1 head:(struct *)arg2;
@end

