@interface DiskUsageDetailViewController : MMUIViewController <MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _bPro; // +0x68
    BOOL _showForMyself; // +0x69
    BOOL _ignoreDuplicateFile; // +0x6a
    int _showFileClass; // +0x6c
    NSString * _rootPath; // +0x70
    MMFolder * _m_folder; // +0x78
    MMTableView * _m_tableView; // +0x80
}
+ (id)p_getDescriptionStringNum:(id)arg1;
+ (id)getStringWithFileClass:(int)arg1;
+ (unsigned long long)sumFileSize:(id)arg1 ignoreDuplicate:(BOOL)arg2;
+ (unsigned long long)sumFileClassSize:(id)arg1 showClass:(int)arg2 ignoreDuplicate:(BOOL)arg3;
+ (unsigned long long)sumFileClassSize:(id)arg1 showClass:(int)arg2 ignoreDuplicate:(BOOL)arg3 ignoreClass:(BOOL)arg4 fileIDDict:(id)arg5;
+ (unsigned long long)sumFileTypeSize:(id)arg1 showTypeInUse:(int)arg2 ignoreDuplicate:(BOOL)arg3 fileIDDict:(id)arg4 resultFileInfo:(id)arg5;
- (id)rootPath;
- (void)initTableView;
- (void)p_onLongPressNavBar;
- (void)p_handleThreeTap:(id)arg1;
- (void)p_handleLongPress:(id)arg1;
- (void)selectShowType;
- (void)viewDidLoad;
- (void)startScanFolder:(id)arg1 withParentPath:(id)arg2 depth:(int)arg3;
- (void)scanSubfolder:(id)arg1 withParentPath:(id)arg2 depth:(int)arg3;
- (void)scanFileInFolder:(id)arg1 withParentPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setRootPath:(id)arg1;
- (id)m_folder;
- (void)setM_folder:(id)arg1;
- (BOOL)bPro;
- (void)setBPro:(BOOL)arg1;
- (int)showFileClass;
- (void)setShowFileClass:(int)arg1;
- (BOOL)showForMyself;
- (void)setShowForMyself:(BOOL)arg1;
- (BOOL)ignoreDuplicateFile;
- (void)setIgnoreDuplicateFile:(BOOL)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (void).cxx_destruct;
@end

