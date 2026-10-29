@interface MMVoiceAtContactCoordinator : NSObject <RoomContactSelectDelegate, IMMGrowTextViewExt>
{
    BOOL _presentingRoomContactSelector; // +0x8
    NSString * _chatName; // +0x10
    MMGrowTextView * _textView; // +0x18
    NSString * _textViewExtensionKey; // +0x20
    id /* block */ _restoreEditingHandler; // +0x28
}
- (id)initWithChatName:(id)arg1 textView:(id)arg2 restoreEditingHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (BOOL)shouldShowRoomContactSelectorForTextView:(id)arg1 changeRange:(_NSRange)arg2 replacementText:(id)arg3;
- (id)roomContentLogicController;
- (void)presentRoomContactSelector;
- (id)displayNameForAtContact:(id)arg1 roomContact:(id)arg2;
- (void)addAtUserContact:(id)arg1 roomContact:(id)arg2;
- (void)didSelectContact:(id)arg1;
- (void)didMultiSelectContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)finishSelection;
- (BOOL)presentingRoomContactSelector;
- (void)setPresentingRoomContactSelector:(BOOL)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)textViewExtensionKey;
- (void)setTextViewExtensionKey:(id)arg1;
- (id /* block */)restoreEditingHandler;
- (void)setRestoreEditingHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
