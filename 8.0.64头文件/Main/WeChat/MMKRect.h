@interface MMKRect : NSObject
{
    MMKPoint * _origin; // +0x8
    MMKSize * _size; // +0x10
}
+ (id)KRectWithOrigin:(id)arg1 size:(id)arg2;
- (id)initWithOrigin:(id)arg1 size:(id)arg2;
- (id)description;
- (id)origin;
- (id)size;
- (void).cxx_destruct;
@end
