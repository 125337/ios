@interface QuickReplyNotifyItem : NSObject
{
    BOOL _hideDetailContent; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    NSString * _content; // +0x20
    NSString * _username; // +0x28
    UIImage * _customIconImage; // +0x30
    CContact * _contact; // +0x38
    CMessageWrap * _message; // +0x40
    NSString * _reportMsgId; // +0x48
    NSString * _reportMsgType; // +0x50
}
- (id)initWithUsername:(id)arg1 message:(id)arg2;
- (id)initWithUsername:(id)arg1 messages:(id)arg2;
- (BOOL)isSupportedMessage:(id)arg1;
- (id)voiceOver;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (BOOL)hideDetailContent;
- (void)setHideDetailContent:(BOOL)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)customIconImage;
- (void)setCustomIconImage:(id)arg1;
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

