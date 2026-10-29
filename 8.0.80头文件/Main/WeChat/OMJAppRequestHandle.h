@interface OMJAppRequestHandle : NSObject <NSCopying>
{
    unsigned int _taskID; // +0x8
    unsigned long long _serviceInstanceID; // +0x10
    unsigned long long _callbackToken; // +0x18
    unsigned long long _callbackGeneration; // +0x20
}
- (id)initWithServiceInstanceID:(unsigned long long)arg1 taskID:(unsigned int)arg2 callbackGeneration:(unsigned long long)arg3 callbackToken:(unsigned long long)arg4;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (unsigned long long)serviceInstanceID;
- (unsigned int)taskID;
- (unsigned long long)callbackToken;
- (unsigned long long)callbackGeneration;
@end
