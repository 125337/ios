@interface WCAdOpenAppHalfScreenInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    BOOL _expandClickArea; // +0x8
    BOOL _forbidTapBgToClose; // +0x9
    BOOL _buttonWiderStyle; // +0xa
    int _style; // +0xc
    NSString * _appIcon; // +0x10
    NSString * _appName; // +0x18
    NSString * _tips1; // +0x20
    NSString * _tips2; // +0x28
    NSString * _btnTitle; // +0x30
    NSString * _appDesc; // +0x38
    NSArray * _appImageList; // +0x40
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)appIcon;
- (void)setAppIcon:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)tips1;
- (void)setTips1:(id)arg1;
- (id)tips2;
- (void)setTips2:(id)arg1;
- (id)btnTitle;
- (void)setBtnTitle:(id)arg1;
- (BOOL)expandClickArea;
- (void)setExpandClickArea:(BOOL)arg1;
- (BOOL)forbidTapBgToClose;
- (void)setForbidTapBgToClose:(BOOL)arg1;
- (BOOL)buttonWiderStyle;
- (void)setButtonWiderStyle:(BOOL)arg1;
- (int)style;
- (void)setStyle:(int)arg1;
- (id)appDesc;
- (void)setAppDesc:(id)arg1;
- (id)appImageList;
- (void)setAppImageList:(id)arg1;
- (void).cxx_destruct;
@end
