@interface WAJSEventHandler_showActionSheet : WAJSEventHandler_BaseEvent <WAWebActionSheetDelegate>
{
    WAWebActionSheet * _actionSheet; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onCancel;
- (void)onSelected:(long long)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (void).cxx_destruct;
@end

