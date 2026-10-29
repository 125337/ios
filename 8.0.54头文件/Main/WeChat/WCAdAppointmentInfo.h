@interface WCAdAppointmentInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    BOOL _requestPhoneNumber; // +0x8
    unsigned int _expiredTime; // +0xc
    unsigned long long _appointmentId; // +0x10
    NSString * _btnTitleAfterAppointment; // +0x18
    NSString * _nickname; // +0x20
    NSString * _headImageUrl; // +0x28
    NSString * _title; // +0x30
    NSString * _content; // +0x38
    NSString * _extraContent; // +0x40
    NSString * _submitBtnTitle; // +0x48
    NSString * _cancelBtnTitle; // +0x50
    NSString * _submitSucToast; // +0x58
    NSString * _submitFailedToast; // +0x60
    NSString * _cancelSucToast; // +0x68
    NSString * _cancelFailedToast; // +0x70
    NSString * _expiredBtnTitle; // +0x78
    NSString * _phoneNumberRequestIcon; // +0x80
    NSString * _phoneNumberRequestName; // +0x88
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)needRequestPhoneNumber;
- (unsigned long long)appointmentId;
- (void)setAppointmentId:(unsigned long long)arg1;
- (id)btnTitleAfterAppointment;
- (void)setBtnTitleAfterAppointment:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)extraContent;
- (void)setExtraContent:(id)arg1;
- (id)submitBtnTitle;
- (void)setSubmitBtnTitle:(id)arg1;
- (id)cancelBtnTitle;
- (void)setCancelBtnTitle:(id)arg1;
- (id)submitSucToast;
- (void)setSubmitSucToast:(id)arg1;
- (id)submitFailedToast;
- (void)setSubmitFailedToast:(id)arg1;
- (id)cancelSucToast;
- (void)setCancelSucToast:(id)arg1;
- (id)cancelFailedToast;
- (void)setCancelFailedToast:(id)arg1;
- (unsigned int)expiredTime;
- (void)setExpiredTime:(unsigned int)arg1;
- (id)expiredBtnTitle;
- (void)setExpiredBtnTitle:(id)arg1;
- (BOOL)requestPhoneNumber;
- (void)setRequestPhoneNumber:(BOOL)arg1;
- (id)phoneNumberRequestIcon;
- (void)setPhoneNumberRequestIcon:(id)arg1;
- (id)phoneNumberRequestName;
- (void)setPhoneNumberRequestName:(id)arg1;
- (void).cxx_destruct;
@end

