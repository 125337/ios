@interface EcsBaseJsAPIEventDefault : NSObject <EcsBaseJsAPIEvent>
{
    NSString * _eventAction; // +0x8
    NSDictionary * _eventParam; // +0x10
}
- (id)initWithEventAction:(id)arg1 eventParam:(id)arg2;
- (id)getEcsEventAction;
- (id)getEcsEventParam;
- (void).cxx_destruct;
@end
