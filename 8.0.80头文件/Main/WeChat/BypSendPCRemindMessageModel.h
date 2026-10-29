@interface BypSendPCRemindMessageModel : NSObject
{
    NSString * _title; // +0x8
    NSString * _iconUrl; // +0x10
    NSString * _extraInfo; // +0x18
    NSString * _remindId; // +0x20
    NSString * _type; // +0x28
    NSString * _busiType; // +0x30
    NSString * _startDate; // +0x38
    NSString * _expireDate; // +0x40
    NSString * _version; // +0x48
    NSString * _descType; // +0x50
    NSString * _url; // +0x58
    NSString * _domain; // +0x60
    NSString * _sendTime; // +0x68
}
+ (id)initWithDict:(id)arg1;
+ (BOOL)isPCLoggedin;
- (id)getXml;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)remindId;
- (void)setRemindId:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)busiType;
- (void)setBusiType:(id)arg1;
- (id)startDate;
- (void)setStartDate:(id)arg1;
- (id)expireDate;
- (void)setExpireDate:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)descType;
- (void)setDescType:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)domain;
- (void)setDomain:(id)arg1;
- (id)sendTime;
- (void)setSendTime:(id)arg1;
- (void).cxx_destruct;
@end
