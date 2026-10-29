@interface FWFNSHttpCookieData : NSObject
{
    NSArray * _propertyKeys; // +0x8
    NSArray * _propertyValues; // +0x10
}
+ (id)makeWithPropertyKeys:(id)arg1 propertyValues:(id)arg2;
+ (id)fromMap:(id)arg1;
- (id)toMap;
- (id)propertyKeys;
- (void)setPropertyKeys:(id)arg1;
- (id)propertyValues;
- (void)setPropertyValues:(id)arg1;
- (void).cxx_destruct;
@end

