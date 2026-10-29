@interface GCContentModel : NSObject
{
    BOOL _supportLink; // +0x8
    BOOL _isPureText; // +0x9
    NSString * _contentStr; // +0x10
    NSMutableDictionary * _linkJumpInfoDict; // +0x18
    NSString * _sysTitleStr; // +0x20
    ChatroomMsgTpl * _chatroomMsgTpl; // +0x28
    NSMutableSet * _userNameSet; // +0x30
    NSMutableDictionary * _userNameDict; // +0x38
}
- (id)textThatCanCopy;
- (id)contentStr;
- (void)setContentStr:(id)arg1;
- (BOOL)supportLink;
- (void)setSupportLink:(BOOL)arg1;
- (id)linkJumpInfoDict;
- (void)setLinkJumpInfoDict:(id)arg1;
- (id)sysTitleStr;
- (void)setSysTitleStr:(id)arg1;
- (id)chatroomMsgTpl;
- (void)setChatroomMsgTpl:(id)arg1;
- (id)userNameSet;
- (void)setUserNameSet:(id)arg1;
- (id)userNameDict;
- (void)setUserNameDict:(id)arg1;
- (BOOL)isPureText;
- (void)setIsPureText:(BOOL)arg1;
- (void).cxx_destruct;
@end
