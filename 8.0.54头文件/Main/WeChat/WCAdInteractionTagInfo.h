@interface WCAdInteractionTagInfo : NSObject <NSCoding>
{
    NSString * _normalIconImage; // +0x8
    NSString * _normalIconImageDark; // +0x10
    NSString * _normalTitle; // +0x18
    WCAdColorInfo * _normalTitleColor; // +0x20
    WCAdPagInfo * _activeIconPag; // +0x28
    NSString * _activeTitle; // +0x30
    WCAdColorInfo * _activeTitleColor; // +0x38
    NSString * _desc; // +0x40
    WCAdColorInfo * _descColor; // +0x48
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)fetchNormalTitleColor;
- (id)fetchActiveTitleColor;
- (id)fetchDescColor;
- (id)normalIconImage;
- (void)setNormalIconImage:(id)arg1;
- (id)normalIconImageDark;
- (void)setNormalIconImageDark:(id)arg1;
- (id)normalTitle;
- (void)setNormalTitle:(id)arg1;
- (id)normalTitleColor;
- (void)setNormalTitleColor:(id)arg1;
- (id)activeIconPag;
- (void)setActiveIconPag:(id)arg1;
- (id)activeTitle;
- (void)setActiveTitle:(id)arg1;
- (id)activeTitleColor;
- (void)setActiveTitleColor:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)descColor;
- (void)setDescColor:(id)arg1;
- (void).cxx_destruct;
@end

