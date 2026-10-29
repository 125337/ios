@interface QBJceObject : NSObject <NSCoding>
+ (id)qb_objectWithName:(id)arg1 andType:(id)arg2 inAttributes:(id)arg3;
+ (id)qb_objectWithAttributeData:(id)arg1;
+ (id)jcePropertiesWithEncodedTypes;
+ (id)object;
+ (id)fromData:(id)arg1;
+ (id)jceType;
- (void)qb_setInAttributes:(id)arg1 withName:(id)arg2 andType:(id)arg3;
- (id)fromData:(id)arg1;
- (id)toData;
- (id)jceType;
- (void)__pack:(id)arg1;
- (void)__unpack:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@end
