@interface MMKSize : NSObject
{
    float _width; // +0x8
    float _height; // +0xc
}
+ (id)KSizeWithWidth:(float)arg1 height:(float)arg2;
- (id)initWithWidth:(float)arg1 height:(float)arg2;
- (id)description;
- (float)width;
- (float)height;
@end
