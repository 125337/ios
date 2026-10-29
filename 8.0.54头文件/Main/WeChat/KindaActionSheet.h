@interface KindaActionSheet : NSObject <WCActionSheetDelegate, MMKActionSheet>
{
    int _destructiveIndex; // +0x8
    NSMutableArray * _callbacks; // +0x10
    NSMutableArray * _buttonTitles; // +0x18
    NSString * _cancelTitle; // +0x20
    NSString * _actionSheetTitle; // +0x28
}
- (id)init;
- (void)setTitle:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)addButtonImpl:(id)arg1 callback:(id)arg2;
- (void)show;
- (void)setDestructiveIndex:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void).cxx_destruct;
@end

