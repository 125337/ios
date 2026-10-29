@interface WNDisplayFontInfo : NSObject
{
    NSString * _displayName; // +0x8
    NSString * _familyName; // +0x10
    UIFont * _font; // +0x18
}
- (id)initWithDisplayName:(id)arg1 andFamilyName:(id)arg2 andFont:(id)arg3;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)familyName;
- (void)setFamilyName:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (void).cxx_destruct;
@end
