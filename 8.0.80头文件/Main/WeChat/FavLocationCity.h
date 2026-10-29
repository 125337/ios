@interface FavLocationCity : NSObject
{
    BOOL _isCurrentLocation; // +0x8
    NSString * _cityName; // +0x10
    long long _count; // +0x18
    NSArray * _itemLocalIds; // +0x20
    NSArray * _items; // +0x28
}
+ (id)makeWithCityName:(id)arg1 count:(long long)arg2 isCurrentLocation:(BOOL)arg3 itemLocalIds:(id)arg4 items:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)cityName;
- (void)setCityName:(id)arg1;
- (long long)count;
- (void)setCount:(long long)arg1;
- (BOOL)isCurrentLocation;
- (void)setIsCurrentLocation:(BOOL)arg1;
- (id)itemLocalIds;
- (void)setItemLocalIds:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
