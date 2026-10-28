@interface WXGRoamRemoteConfigViewController : MMUIViewController <UITextFieldDelegate>
{
    NSString * path; // +0x70
    UITextField * _deviceText; // +0x78
    UITextField * _domainText; // +0x80
    UITextField * _portText; // +0x88
    UITextField * _ticketText; // +0x90
    UIButton * _saveBtn; // +0x98
    UIButton * _deleteBtn; // +0xa0
    NSMutableArray * _textArr; // +0xa8
}
- (void)viewDidLoad;
- (void)setupMainView;
- (void)getTextCache;
- (BOOL)saveTextToCache;
- (BOOL)deleteCache;
- (void)onSave;
- (void)onDelete;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)deviceText;
- (void)setDeviceText:(id)arg1;
- (id)domainText;
- (void)setDomainText:(id)arg1;
- (id)portText;
- (void)setPortText:(id)arg1;
- (id)ticketText;
- (void)setTicketText:(id)arg1;
- (id)saveBtn;
- (void)setSaveBtn:(id)arg1;
- (id)deleteBtn;
- (void)setDeleteBtn:(id)arg1;
- (id)textArr;
- (void)setTextArr:(id)arg1;
- (void).cxx_destruct;
@end
