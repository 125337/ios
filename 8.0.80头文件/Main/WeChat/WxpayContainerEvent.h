@interface WxpayContainerEvent : NSObject
{
    NSString * _name; // +0x8
    unsigned long long _callId; // +0x10
    NSString * _scene; // +0x18
    NSDictionary * _data; // +0x20
    WxpaySceneOpenContext * _openContext; // +0x28
}
+ (id)eventWithName:(id)arg1;
+ (id)eventWithName:(id)arg1 data:(id)arg2;
+ (id)eventWithName:(id)arg1 callId:(unsigned long long)arg2 scene:(id)arg3 data:(id)arg4;
+ (id)eventWithName:(id)arg1 callId:(unsigned long long)arg2 scene:(id)arg3 data:(id)arg4 openContext:(id)arg5;
- (id)initInternal;
- (id)name;
- (unsigned long long)callId;
- (id)scene;
- (id)data;
- (id)openContext;
- (void).cxx_destruct;
@end
