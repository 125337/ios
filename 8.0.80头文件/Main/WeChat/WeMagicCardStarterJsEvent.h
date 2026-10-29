@interface WeMagicCardStarterJsEvent : NSObject
{
    void * eventName; // +0x8
    void * data; // +0x18
}
+ (id)eventWithName:(id)arg1 data:(id)arg2;
- (id)eventName;
- (id)data;
- (id)init;
- (void).cxx_destruct;
@end
