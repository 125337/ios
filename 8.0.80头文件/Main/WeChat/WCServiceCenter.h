@interface WCServiceCenter : NSObject
{
    NSMutableDictionary * _serviceData; // +0x8
}
+ (id)center;
- (id)init;
- (BOOL)registerService:(Class)arg1 forProtocol:(id)arg2;
- (Class)serviceForProtocol:(id)arg1;
- (BOOL)unregisterServiceForProtocol:(id)arg1;
- (id)serviceData;
- (void).cxx_destruct;
@end
