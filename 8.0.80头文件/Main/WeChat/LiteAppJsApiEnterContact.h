@interface LiteAppJsApiEnterContact : LiteAppJsApi
{
    BOOL _showMessageCard; // +0x20
    NSString * _targetAppId; // +0x28
    NSString * _userName; // +0x30
    NSString * _sessionFrom; // +0x38
    NSString * _businessID; // +0x40
    NSString * _sendMsgTitle; // +0x48
    NSString * _sendMsgPath; // +0x50
    NSString * _sendMsgImageURL; // +0x58
    NSString * _headimgUrl; // +0x60
    NSString * _title; // +0x68
    NSString * _subTitle; // +0x70
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)enterSession:(id)arg1;
- (id)targetAppId;
- (void)setTargetAppId:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)sessionFrom;
- (void)setSessionFrom:(id)arg1;
- (id)businessID;
- (void)setBusinessID:(id)arg1;
- (BOOL)showMessageCard;
- (void)setShowMessageCard:(BOOL)arg1;
- (id)sendMsgTitle;
- (void)setSendMsgTitle:(id)arg1;
- (id)sendMsgPath;
- (void)setSendMsgPath:(id)arg1;
- (id)sendMsgImageURL;
- (void)setSendMsgImageURL:(id)arg1;
- (id)headimgUrl;
- (void)setHeadimgUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (void).cxx_destruct;
@end
