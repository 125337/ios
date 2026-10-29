@interface ChatBotAccountInfo : NSObject
{
    unsigned int _version; // +0x8
    unsigned int _agreementId; // +0xc
    NSString * _title; // +0x10
    NSString * _content; // +0x18
    NSString * _url; // +0x20
}
+ (id)createFromInfoDic:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)agreementId;
- (void)setAgreementId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
