@interface WAUserGuideParam : NSObject
{
    unsigned int _dialogType; // +0x8
    int _pagAnimRepeatCount; // +0xc
    NSString * _appId; // +0x10
    NSString * _title; // +0x18
    NSString * _pagAnim; // +0x20
    id /* block */ _confirmAction; // +0x28
    NSString * _gotoText; // +0x30
    id /* block */ _gotoAction; // +0x38
}
- (unsigned int)dialogType;
- (void)setDialogType:(unsigned int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)pagAnim;
- (void)setPagAnim:(id)arg1;
- (int)pagAnimRepeatCount;
- (void)setPagAnimRepeatCount:(int)arg1;
- (id /* block */)confirmAction;
- (void)setConfirmAction:(id /* block */)arg1;
- (id)gotoText;
- (void)setGotoText:(id)arg1;
- (id /* block */)gotoAction;
- (void)setGotoAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

