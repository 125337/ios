@interface BizNotifyInfo : NSObject
{
    NSNumber * _eventType; // +0x8
    MassSendCardMsg * _msgInfo; // +0x10
    NSArray * _items; // +0x18
    NSString * _talker; // +0x20
}
+ (id)makeWithEventType:(id)arg1 msgInfo:(id)arg2 items:(id)arg3 talker:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)eventType;
- (void)setEventType:(id)arg1;
- (id)msgInfo;
- (void)setMsgInfo:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)talker;
- (void)setTalker:(id)arg1;
- (void).cxx_destruct;
@end

