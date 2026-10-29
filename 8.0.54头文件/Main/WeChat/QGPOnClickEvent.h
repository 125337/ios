@interface QGPOnClickEvent : QGPEvent
{
    NSArray * _clickedPosition; // +0x18
    NSString * _identifier; // +0x20
    NSString * _name; // +0x28
}
+ (id)instanceWithClickedPosition:(id)arg1 identifier:(id)arg2 name:(id)arg3;
- (id)clickedPosition;
- (void)setClickedPosition:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void).cxx_destruct;
@end

