@interface CMail : NSObject
{
    int tipColor; // +0x8
    unsigned int _sendType; // +0xc
    CMailContact * from; // +0x10
    NSMutableArray * tolist; // +0x18
    NSMutableArray * cclist; // +0x20
    NSMutableArray * bcclist; // +0x28
    NSString * subject; // +0x30
    NSString * datetime; // +0x38
    NSString * contentType; // +0x40
    NSString * content; // +0x48
    NSMutableArray * attachlist; // +0x50
    NSString * tipWording; // +0x58
    NSString * _oldMailId; // +0x60
}
+ (id)stringForContacts:(id)arg1;
- (void)parseFromXML:(id)arg1;
- (id)initWithXml:(id)arg1;
- (id)description;
- (id)briefDesc;
- (id)appendToNewMailContent:(id)arg1;
- (id)from;
- (void)setFrom:(id)arg1;
- (id)tolist;
- (void)setTolist:(id)arg1;
- (id)cclist;
- (void)setCclist:(id)arg1;
- (id)bcclist;
- (void)setBcclist:(id)arg1;
- (id)subject;
- (void)setSubject:(id)arg1;
- (id)datetime;
- (void)setDatetime:(id)arg1;
- (id)contentType;
- (void)setContentType:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)attachlist;
- (void)setAttachlist:(id)arg1;
- (int)tipColor;
- (void)setTipColor:(int)arg1;
- (id)tipWording;
- (void)setTipWording:(id)arg1;
- (id)oldMailId;
- (void)setOldMailId:(id)arg1;
- (unsigned int)sendType;
- (void)setSendType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

