@interface WXKBMessageActionReportObject : NSObject
{
    unsigned int _actionType; // +0x8
    unsigned int _messageType; // +0xc
    NSString * _contentTitle; // +0x10
    NSString * _appId; // +0x18
    NSString * _songName; // +0x20
    NSString * _emoticonMd5; // +0x28
    NSString * _emoticonProductId; // +0x30
    NSString * _cardUsername; // +0x38
}
- (void)report;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (unsigned int)messageType;
- (void)setMessageType:(unsigned int)arg1;
- (id)contentTitle;
- (void)setContentTitle:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)songName;
- (void)setSongName:(id)arg1;
- (id)emoticonMd5;
- (void)setEmoticonMd5:(id)arg1;
- (id)emoticonProductId;
- (void)setEmoticonProductId:(id)arg1;
- (id)cardUsername;
- (void)setCardUsername:(id)arg1;
- (void).cxx_destruct;
@end
