@interface FavLocationCountry : NSObject
{
    NSString * _countryName; // +0x8
    NSArray * _cities; // +0x10
}
+ (id)makeWithCountryName:(id)arg1 cities:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)countryName;
- (void)setCountryName:(id)arg1;
- (id)cities;
- (void)setCities:(id)arg1;
- (void).cxx_destruct;
@end
