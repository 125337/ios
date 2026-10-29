@interface ZZNPAopModel : NSObject
{
    NSString * _name; // +0x8
    NSMutableArray * _eventList; // +0x10
    NSMutableDictionary * _eventMap; // +0x18
}
+ (id)createWithName:(id)arg1;
- (id)init;
- (void)addEventAction:(id)arg1 tag:(id)arg2;
- (void)removeEventByTag:(id)arg1;
- (void)executeWithInstance:(id)arg1;
- (unsigned long long)eventCount;
- (id)name;
- (void)setName:(id)arg1;
- (id)eventList;
- (void)setEventList:(id)arg1;
- (id)eventMap;
- (void)setEventMap:(id)arg1;
- (void).cxx_destruct;
@end
