@interface WCFinderThemeLiveStreamShareItem : NSObject <NSCoding, NSCopying, PBCoding>
{
    NSString * _mainTitle; // +0x8
    NSString * _subTitle; // +0x10
    NSString * _imgUrl; // +0x18
    NSString * _themeId; // +0x20
}
+ (void)PBArrayAdd_mainTitle;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_imgUrl;
+ (void)PBArrayAdd_themeId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)mainTitle;
- (void)setMainTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)imgUrl;
- (void)setImgUrl:(id)arg1;
- (id)themeId;
- (void)setThemeId:(id)arg1;
- (void).cxx_destruct;
@end
