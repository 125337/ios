@interface QuickReplyNotifyItem : NSObject
{
    BOOL _hideDetailContent; // +0x8
    BOOL _hideIcon; // +0x9
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    long long _scene; // +0x20
    UIImage * _customIconImage; // +0x28
    id _userInfo; // +0x30
    id /* block */ _action; // +0x38
    NSString * _msgContent; // +0x40
    NSString * _username; // +0x48
    CContact * _contact; // +0x50
    CMessageWrap * _message; // +0x58
    NSString * _reportMsgId; // +0x60
    NSString * _reportMsgType; // +0x68
}
- (id)initWithUsername:(id)arg1 message:(id)arg2;
- (id)initWithUsername:(id)arg1 messages:(id)arg2;
- (BOOL)isSupportedMessage:(id)arg1;
- (id)voiceOver;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)customIconImage;
- (void)setCustomIconImage:(id)arg1;
- (BOOL)hideDetailContent;
- (void)setHideDetailContent:(BOOL)arg1;
- (BOOL)hideIcon;
- (void)setHideIcon:(BOOL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (id)msgContent;
- (void)setMsgContent:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)reportMsgId;
- (void)setReportMsgId:(id)arg1;
- (id)reportMsgType;
- (void)setReportMsgType:(id)arg1;
- (void).cxx_destruct;
@end
