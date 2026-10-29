@interface MultiMoreLiveEnterParams : NSObject
{
    BOOL _useDarkStyle; // +0x8
    int _commentScene; // +0xc
    long long _scene; // +0x10
    unsigned long long _selectTabId; // +0x18
    unsigned long long _selectSubTabId; // +0x20
    NSString * _byPassInfo; // +0x28
    unsigned long long _entryScene; // +0x30
    NSString * _title; // +0x38
    NSString * _feedExportId; // +0x40
    NSString * _feedNonceId; // +0x48
    NSString * _appId; // +0x50
    unsigned long long _versionType; // +0x58
}
- (id)description;
- (BOOL)useDarkStyle;
- (void)setUseDarkStyle:(BOOL)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (unsigned long long)selectTabId;
- (void)setSelectTabId:(unsigned long long)arg1;
- (unsigned long long)selectSubTabId;
- (void)setSelectSubTabId:(unsigned long long)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)entryScene;
- (void)setEntryScene:(unsigned long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)feedExportId;
- (void)setFeedExportId:(id)arg1;
- (id)feedNonceId;
- (void)setFeedNonceId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned long long)versionType;
- (void)setVersionType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

