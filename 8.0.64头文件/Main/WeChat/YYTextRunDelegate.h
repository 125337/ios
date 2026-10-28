@interface YYTextRunDelegate : NSObject <NSCopying, NSCoding>
{
    NSDictionary * _userInfo; // +0x8
    double _ascent; // +0x10
    double _descent; // +0x18
    double _width; // +0x20
}
- (__CTRunDelegate *)CTRunDelegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (double)ascent;
- (void)setAscent:(double)arg1;
- (double)descent;
- (void)setDescent:(double)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (void).cxx_destruct;
@end
