@interface GameCenterGroupMsg : GameCenterOldBaseMsg
{
    int _subType; // +0x8
    NSString * _topicTitle; // +0x10
    NSString * _reply; // +0x18
    NSString * _commentToReply; // +0x20
    NSString * _topicUrl; // +0x28
    NSString * _sourceUrl; // +0x30
    NSString * _groupName; // +0x38
    NSString * _groupUrl; // +0x40
}
- (id)initWithXmlNode:(XmlReaderNode_t *)arg1;
- (id)getMsgCenterContent;
- (int)subType;
- (void)setSubType:(int)arg1;
- (id)topicTitle;
- (void)setTopicTitle:(id)arg1;
- (id)reply;
- (void)setReply:(id)arg1;
- (id)commentToReply;
- (void)setCommentToReply:(id)arg1;
- (id)topicUrl;
- (void)setTopicUrl:(id)arg1;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (id)groupName;
- (void)setGroupName:(id)arg1;
- (id)groupUrl;
- (void)setGroupUrl:(id)arg1;
- (void).cxx_destruct;
@end

