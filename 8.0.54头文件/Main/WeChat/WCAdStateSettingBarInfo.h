@interface WCAdStateSettingBarInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _numberDefaultTitle; // +0x8
    NSString * _numberRequestParams; // +0x10
    WCAdColorInfo * _numberTitleColor; // +0x18
    NSString * _numberCurrentTitle; // +0x20
    NSString * _jumpLinkTitle; // +0x28
    WCAdColorInfo * _linkTitleColor; // +0x30
    NSString * _desc; // +0x38
    WCAdColorInfo * _descColor; // +0x40
    NSString * _jumpLinkIconLight; // +0x48
    NSString * _jumpLinkIconDark; // +0x50
    WCAdCardBtnInfo * _jumpLinkActionInfo; // +0x58
    long long _stateTriggerType; // +0x60
    double _stateTriggerTime; // +0x68
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
+ (id)convertFromFireworkTagInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)stateTriggerTime;
- (id)fetchNumberTitleColor;
- (id)fetchLinkTitleColor;
- (id)fetchDescColor;
- (BOOL)isValid;
- (id)numberDefaultTitle;
- (void)setNumberDefaultTitle:(id)arg1;
- (id)numberRequestParams;
- (void)setNumberRequestParams:(id)arg1;
- (id)numberTitleColor;
- (void)setNumberTitleColor:(id)arg1;
- (id)numberCurrentTitle;
- (void)setNumberCurrentTitle:(id)arg1;
- (id)jumpLinkTitle;
- (void)setJumpLinkTitle:(id)arg1;
- (id)linkTitleColor;
- (void)setLinkTitleColor:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)descColor;
- (void)setDescColor:(id)arg1;
- (id)jumpLinkIconLight;
- (void)setJumpLinkIconLight:(id)arg1;
- (id)jumpLinkIconDark;
- (void)setJumpLinkIconDark:(id)arg1;
- (id)jumpLinkActionInfo;
- (void)setJumpLinkActionInfo:(id)arg1;
- (long long)stateTriggerType;
- (void)setStateTriggerType:(long long)arg1;
- (void)setStateTriggerTime:(double)arg1;
- (void).cxx_destruct;
@end

