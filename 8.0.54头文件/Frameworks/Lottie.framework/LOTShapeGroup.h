@interface LOTShapeGroup : NSObject
{
    NSString * _keyname; // +0x8
    NSArray * _items; // +0x10
}
+ (id)shapeItemWithJSON:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (void)_mapFromJSON:(id)arg1;
- (id)description;
- (id)keyname;
- (id)items;
- (void).cxx_destruct;
@end

