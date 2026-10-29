@interface PeopleNearByCellModel : NSObject
{
    long long _type; // +0x8
    id _data; // +0x10
}
+ (id)modelWithType:(long long)arg1 data:(id)arg2;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
