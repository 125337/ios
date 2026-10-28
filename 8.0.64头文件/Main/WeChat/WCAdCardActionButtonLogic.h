@interface WCAdCardActionButtonLogic : WCAdvertiseOperationLogicBase
{
    id <WCAdCardActionButtonLogicDelegate> _delegate; // +0x8
    long long _buttonStyle; // +0x10
    WCDataItem * _dataItem; // +0x18
    WCAdCardActionButton * _actionButton; // +0x20
}
+ (long long)getActionButtonStyleWithDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1;
- (id)fetchActionButton;
- (id)actionButton;
- (void)onActionBtnClicked;
- (void)start;
- (void)stop;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)buttonStyle;
- (void)setButtonStyle:(long long)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end
