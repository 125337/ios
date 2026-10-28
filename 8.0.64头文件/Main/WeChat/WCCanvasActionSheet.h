@interface WCCanvasActionSheet : MMUIView
{
    UIView * _backgroundMask; // +0x8
    UIView * _headerView; // +0x10
    MMTableViewInfo * _tableViewInfo; // +0x18
    BOOL _showCancelAction; // +0x20
    BOOL _hideHeader; // +0x21
    NSString * _title; // +0x28
    NSString * _desc; // +0x30
    NSString * _iconUrl; // +0x38
    WCCanvasComponentItem * _bodyItem; // +0x40
    id <WCCanvasComponentDelegate> _bodyDelegate; // +0x48
    id <WCCanvasActionSheetDelegate> _delegate; // +0x50
}
- (void)showInView:(id)arg1;
- (void)makeBodyCell:(id)arg1 cellInfo:(id)arg2;
- (void)cancel;
- (void)onCancel:(id)arg1;
- (void)clear;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)bodyItem;
- (void)setBodyItem:(id)arg1;
- (id)bodyDelegate;
- (void)setBodyDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)showCancelAction;
- (void)setShowCancelAction:(BOOL)arg1;
- (BOOL)hideHeader;
- (void)setHideHeader:(BOOL)arg1;
- (void).cxx_destruct;
@end
