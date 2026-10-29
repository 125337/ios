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
    WCAdRandomPickCardItemsInfo * _cardsInfo; // +0x50
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
- (id)cardsInfo;
- (void)setCardsInfo:(id)arg1;
- (void).cxx_destruct;
@end

