@interface QBASIAuthenticationDialog : QBASIAutorotatingViewController <UIActionSheetDelegate, UITableViewDelegate, UITableViewDataSource>
{
    QBASIHTTPRequest * request; // +0x8
    int type; // +0x10
    UITableView * tableView; // +0x18
    UIViewController * presentingController; // +0x20
    BOOL didEnableRotationNotifications; // +0x28
}
+ (void)initialize;
+ (void)presentAuthenticationDialogForRequest:(id)arg1;
+ (void)dismiss;
- (id)init;
- (void)dealloc;
- (void)keyboardWillShow:(id)arg1;
- (void)orientationChanged:(id)arg1;
- (id)presentingController;
- (id)textFieldInRow:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (id)usernameField;
- (id)passwordField;
- (id)domainField;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dismiss;
- (void)showTitle;
- (void)show;
- (void)cancelAuthenticationFromDialog:(id)arg1;
- (id)requestsRequiringTheseCredentials;
- (void)presentNextDialog;
- (void)loginWithCredentialsFromDialog:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)request;
- (void)setRequest:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (BOOL)didEnableRotationNotifications;
- (void)setDidEnableRotationNotifications:(BOOL)arg1;
- (void)setPresentingController:(id)arg1;
@end

