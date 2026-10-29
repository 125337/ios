@interface SnsSettingZidlUtilsCallback : NSObject
{
    SnsSettingZidlUtilsDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(SnsSettingZidlUtilsDispatcherBridgeObjcImpl *)arg1;
- (void)onGetExtStatus2Complete:(unsigned long long)arg1 status:(unsigned long long)arg2;
- (void)onSetExtStatus2Complete:(unsigned long long)arg1;
- (void)onPushExtStatus2Complete:(unsigned long long)arg1 result:(int)arg2;
@end
