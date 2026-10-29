@interface LiveCDNPlayerEvent : NSObject
{
    NSNumber * _viewId; // +0x8
    NSString * _eventName; // +0x10
    NSNumber * _progress; // +0x18
    NSNumber * _width; // +0x20
    NSNumber * _height; // +0x28
    NSNumber * _state; // +0x30
    NSNumber * _isMuted; // +0x38
    NSArray * _seiData; // +0x40
}
+ (id)makeWithViewId:(id)arg1 eventName:(id)arg2 progress:(id)arg3 width:(id)arg4 height:(id)arg5 state:(id)arg6 isMuted:(id)arg7 seiData:(id)arg8;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)viewId;
- (void)setViewId:(id)arg1;
- (id)eventName;
- (void)setEventName:(id)arg1;
- (id)progress;
- (void)setProgress:(id)arg1;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (id)state;
- (void)setState:(id)arg1;
- (id)isMuted;
- (void)setIsMuted:(id)arg1;
- (id)seiData;
- (void)setSeiData:(id)arg1;
- (void).cxx_destruct;
@end
