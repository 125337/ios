@interface WebViewSanboxSessionTaskEventInfo : NSObject
{
    NSString * _name; // +0x8
    unsigned long long _eventTime; // +0x10
}
- (id)descriptionWithStartTime:(unsigned long long)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned long long)eventTime;
- (void)setEventTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
