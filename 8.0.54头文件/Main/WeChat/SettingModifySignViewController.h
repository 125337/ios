@interface SettingModifySignViewController : MMUIViewController <UITextViewDelegate, UITableViewDelegate, UITableViewDataSource, IOplogExt>
{
    UITextView * m_textView; // +0x68
    NSString * m_nsLastSign; // +0x70
    id <settingModifySignDelegate> m_delegate; // +0x78
    UILabel * m_wordCountLabel; // +0x80
    MMTableView * m_tableView; // +0x88
}
+ (id)filterSpecialChars:(id)arg1;
+ (id)unicodeStringWithString:(id)arg1;
- (void)updateWordCount:(int)arg1;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)initTableView;
- (void)viewDidLoad;
- (void)OnCancel;
- (void)OnReturn;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)m_nsLastSign;
- (void)setM_nsLastSign:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

