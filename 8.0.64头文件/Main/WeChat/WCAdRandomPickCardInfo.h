@interface WCAdRandomPickCardInfo : NSObject <NSCoding>
{
    NSString * _title; // +0x8
    NSString * _introduceTitle; // +0x10
    NSString * _titleIconUrl; // +0x18
    NSString * _titleColor; // +0x20
    NSString * _desc; // +0x28
    NSString * _descColor; // +0x30
    NSString * _descColorDark; // +0x38
    NSString * _doneTitle; // +0x40
    NSString * _doneTitleColor; // +0x48
    NSString * _doneDesc; // +0x50
    NSString * _doneDescColor; // +0x58
    NSString * _doneDescColorDark; // +0x60
    NSString * _numberRequestParams; // +0x68
    NSString * _involvedCountInfo; // +0x70
    NSString * _collectedCountInfo; // +0x78
    WCAdRandomPickCardItemsInfo * _cardsInfo; // +0x80
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)introduceTitle;
- (void)setIntroduceTitle:(id)arg1;
- (id)titleIconUrl;
- (void)setTitleIconUrl:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)descColor;
- (void)setDescColor:(id)arg1;
- (id)descColorDark;
- (void)setDescColorDark:(id)arg1;
- (id)doneTitle;
- (void)setDoneTitle:(id)arg1;
- (id)doneTitleColor;
- (void)setDoneTitleColor:(id)arg1;
- (id)doneDesc;
- (void)setDoneDesc:(id)arg1;
- (id)doneDescColor;
- (void)setDoneDescColor:(id)arg1;
- (id)doneDescColorDark;
- (void)setDoneDescColorDark:(id)arg1;
- (id)numberRequestParams;
- (void)setNumberRequestParams:(id)arg1;
- (id)involvedCountInfo;
- (void)setInvolvedCountInfo:(id)arg1;
- (id)collectedCountInfo;
- (void)setCollectedCountInfo:(id)arg1;
- (id)cardsInfo;
- (void)setCardsInfo:(id)arg1;
- (void).cxx_destruct;
@end
