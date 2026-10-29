@interface OMJRecommendOptions : NSObject
{
    unsigned int _eventType; // +0x8
    unsigned long long _mode; // +0x10
    NSString * _scene; // +0x18
}
- (id)initWithMode:(unsigned long long)arg1 scene:(id)arg2;
- (id)initWithMode:(unsigned long long)arg1 scene:(id)arg2 eventType:(unsigned int)arg3;
- (id)description;
- (unsigned long long)mode;
- (id)scene;
- (unsigned int)eventType;
- (void)setEventType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

