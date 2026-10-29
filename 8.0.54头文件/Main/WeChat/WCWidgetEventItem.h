@interface WCWidgetEventItem : MMObject <PBCoding>
{
    unsigned int _touchInterval; // +0x8
    long long _eventType; // +0x10
    long long _eventSubType; // +0x18
    NSString * _widgetName; // +0x20
    NSString * _widgetIdentify; // +0x28
    NSString * _action; // +0x30
    CGPoint _touchBeginPoint; // +0x38
    CGPoint _touchEndPoint; // +0x48
}
+ (void)PBArrayAdd_eventType;
+ (void)PBArrayAdd_eventSubType;
+ (void)PBArrayAdd_widgetName;
+ (void)PBArrayAdd_widgetIdentify;
+ (void)PBArrayAdd_action;
+ (void)PBArrayAdd_touchBeginPoint;
+ (void)PBArrayAdd_touchEndPoint;
+ (void)PBArrayAdd_touchInterval;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)getWidgeName;
- (id)getTouchBeginPoint;
- (id)getTouchEndPoint;
- (id)formatPointToIntString:(CGPoint)arg1;
- (long long)eventType;
- (void)setEventType:(long long)arg1;
- (long long)eventSubType;
- (void)setEventSubType:(long long)arg1;
- (id)widgetName;
- (void)setWidgetName:(id)arg1;
- (id)widgetIdentify;
- (void)setWidgetIdentify:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (CGPoint)touchBeginPoint;
- (void)setTouchBeginPoint:(CGPoint)arg1;
- (CGPoint)touchEndPoint;
- (void)setTouchEndPoint:(CGPoint)arg1;
- (unsigned int)touchInterval;
- (void)setTouchInterval:(unsigned int)arg1;
- (void).cxx_destruct;
@end

