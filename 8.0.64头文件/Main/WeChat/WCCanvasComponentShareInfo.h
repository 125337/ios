@interface WCCanvasComponentShareInfo : MMObject <NSCoding>
{
    BOOL _reportClickEventByOwner; // +0x8
    NSString * _shareText; // +0x10
    NSString * _fontColor; // +0x18
    long long _shareActionType; // +0x20
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shareText;
- (void)setShareText:(id)arg1;
- (id)fontColor;
- (void)setFontColor:(id)arg1;
- (long long)shareActionType;
- (void)setShareActionType:(long long)arg1;
- (BOOL)reportClickEventByOwner;
- (void)setReportClickEventByOwner:(BOOL)arg1;
- (void).cxx_destruct;
@end
