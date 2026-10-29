@interface MMWebCustomLog : MMObject
{
    NSString * _preMsgUrl; // +0x8
    NSString * _preMsgTitle; // +0x10
    NSString * _preMsgDesc; // +0x18
    NSString * _preMsgIconUrl; // +0x20
    NSString * _preMsgAppId; // +0x28
    unsigned long long _fromScene; // +0x30
    NSString * _bizUserName; // +0x38
    NSString * _currentUrl; // +0x40
    NSString * _currentTitle; // +0x48
    NSString * _appId; // +0x50
    NSString * _msgUrl; // +0x58
    NSString * _msgTitle; // +0x60
    NSString * _msgDesc; // +0x68
    NSString * _msgIconUrl; // +0x70
    unsigned long long _toScene; // +0x78
    unsigned long long _sendToFriendsTimes; // +0x80
    unsigned long long _shareTimelineTimes; // +0x88
}
- (id)init;
- (void)uploadKV;
- (void)recordPreMsgUrl:(id)arg1 preMsgTitle:(id)arg2 preMsgDesc:(id)arg3 preMsgIconUrl:(id)arg4 preMsgAppId:(id)arg5 fromScence:(unsigned long long)arg6;
- (void)recordCurrentUrl:(id)arg1 currentTitle:(id)arg2 currentAppId:(id)arg3;
- (void)recordShareMsgUrl:(id)arg1 msgTitle:(id)arg2 msgDesc:(id)arg3 msgIconUrl:(id)arg4 toScene:(unsigned long long)arg5;
- (id)preMsgUrl;
- (void)setPreMsgUrl:(id)arg1;
- (id)preMsgTitle;
- (void)setPreMsgTitle:(id)arg1;
- (id)preMsgDesc;
- (void)setPreMsgDesc:(id)arg1;
- (id)preMsgIconUrl;
- (void)setPreMsgIconUrl:(id)arg1;
- (id)preMsgAppId;
- (void)setPreMsgAppId:(id)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (id)bizUserName;
- (void)setBizUserName:(id)arg1;
- (id)currentUrl;
- (void)setCurrentUrl:(id)arg1;
- (id)currentTitle;
- (void)setCurrentTitle:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)msgUrl;
- (void)setMsgUrl:(id)arg1;
- (id)msgTitle;
- (void)setMsgTitle:(id)arg1;
- (id)msgDesc;
- (void)setMsgDesc:(id)arg1;
- (id)msgIconUrl;
- (void)setMsgIconUrl:(id)arg1;
- (unsigned long long)toScene;
- (void)setToScene:(unsigned long long)arg1;
- (unsigned long long)sendToFriendsTimes;
- (void)setSendToFriendsTimes:(unsigned long long)arg1;
- (unsigned long long)shareTimelineTimes;
- (void)setShareTimelineTimes:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

