@interface WCTopicOpenParams : NSObject
{
    BOOL _openWeAppWithoutAlert; // +0x8
    int _finderEnterScene; // +0xc
    int _finderCardType; // +0x10
    int _finderReportScene; // +0x14
    int _finderEnterType; // +0x18
    int _bizAddContactScene; // +0x1c
    NSMutableArray * _kvList; // +0x20
    unsigned long long _scene; // +0x28
    NSString * _query; // +0x30
    long long _shareScene; // +0x38
    NSString * _shareSceneId; // +0x40
    long long _shareCreateTime; // +0x48
    long long _enterSource; // +0x50
    NSString * _talkerUsername; // +0x58
    NSString * _senderUsername; // +0x60
    id /* block */ _customWeAppItemBlock; // +0x68
    id /* block */ _weAppDidOpenBlock; // +0x70
    id /* block */ _h5DidOpenBlock; // +0x78
    TagCtrlInfo * _tagCtrlInfo; // +0x80
    id /* block */ _webViewDidOpenBlock; // +0x88
    id /* block */ _finderDidOpenBlock; // +0x90
    id /* block */ _bizDidOpenBlock; // +0x98
}
- (id)kvList;
- (void)setKvList:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (long long)shareScene;
- (void)setShareScene:(long long)arg1;
- (id)shareSceneId;
- (void)setShareSceneId:(id)arg1;
- (long long)shareCreateTime;
- (void)setShareCreateTime:(long long)arg1;
- (long long)enterSource;
- (void)setEnterSource:(long long)arg1;
- (id)talkerUsername;
- (void)setTalkerUsername:(id)arg1;
- (id)senderUsername;
- (void)setSenderUsername:(id)arg1;
- (id /* block */)customWeAppItemBlock;
- (void)setCustomWeAppItemBlock:(id /* block */)arg1;
- (id /* block */)weAppDidOpenBlock;
- (void)setWeAppDidOpenBlock:(id /* block */)arg1;
- (id /* block */)h5DidOpenBlock;
- (void)setH5DidOpenBlock:(id /* block */)arg1;
- (BOOL)openWeAppWithoutAlert;
- (void)setOpenWeAppWithoutAlert:(BOOL)arg1;
- (id)tagCtrlInfo;
- (void)setTagCtrlInfo:(id)arg1;
- (id /* block */)webViewDidOpenBlock;
- (void)setWebViewDidOpenBlock:(id /* block */)arg1;
- (int)finderEnterScene;
- (void)setFinderEnterScene:(int)arg1;
- (int)finderCardType;
- (void)setFinderCardType:(int)arg1;
- (int)finderReportScene;
- (void)setFinderReportScene:(int)arg1;
- (int)finderEnterType;
- (void)setFinderEnterType:(int)arg1;
- (id /* block */)finderDidOpenBlock;
- (void)setFinderDidOpenBlock:(id /* block */)arg1;
- (int)bizAddContactScene;
- (void)setBizAddContactScene:(int)arg1;
- (id /* block */)bizDidOpenBlock;
- (void)setBizDidOpenBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
