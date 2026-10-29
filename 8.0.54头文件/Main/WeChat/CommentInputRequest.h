@interface CommentInputRequest : NSObject
{
    NSNumber * _show; // +0x8
    FlutterStandardTypedData * _commentInfo; // +0x10
    NSNumber * _canSwitch; // +0x18
    NSNumber * _useIdentityType; // +0x20
    NSNumber * _enableMention; // +0x28
    NSNumber * _showInputBar; // +0x30
    NSNumber * _disableShowKeyboard; // +0x38
}
+ (id)makeWithShow:(id)arg1 commentInfo:(id)arg2 canSwitch:(id)arg3 useIdentityType:(id)arg4 enableMention:(id)arg5 showInputBar:(id)arg6 disableShowKeyboard:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)show;
- (void)setShow:(id)arg1;
- (id)commentInfo;
- (void)setCommentInfo:(id)arg1;
- (id)canSwitch;
- (void)setCanSwitch:(id)arg1;
- (id)useIdentityType;
- (void)setUseIdentityType:(id)arg1;
- (id)enableMention;
- (void)setEnableMention:(id)arg1;
- (id)showInputBar;
- (void)setShowInputBar:(id)arg1;
- (id)disableShowKeyboard;
- (void)setDisableShowKeyboard:(id)arg1;
- (void).cxx_destruct;
@end

