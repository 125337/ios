@interface WCTopicOpenParams : NSObject
{
    BOOL _openWeAppWithoutAlert; // +0x8
    int _finderReportScene; // +0xc
    unsigned int _finderEnterType; // +0x10
    int _bizAddContactScene; // +0x14
    unsigned long long _scene; // +0x18
    NSString * _query; // +0x20
    long long _shareScene; // +0x28
    NSString * _shareSceneId; // +0x30
    long long _shareCreateTime; // +0x38
    long long _enterSource; // +0x40
    NSString * _talkerUsername; // +0x48
    NSString * _senderUsername; // +0x50
    id /* block */ _customWeAppItemBlock; // +0x58
    id /* block */ _weAppDidOpenBlock; // +0x60
    id /* block */ _h5DidOpenBlock; // +0x68
    TagCtrlInfo * _tagCtrlInfo; // +0x70
    id /* block */ _webViewDidOpenBlock; // +0x78
    unsigned long long _finderEnterScene; // +0x80
    unsigned long long _finderCardType; // +0x88
    id /* block */ _finderDidOpenBlock; // +0x90
    id /* block */ _bizDidOpenBlock; // +0x98
}
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
- (unsigned long long)finderEnterScene;
- (void)setFinderEnterScene:(unsigned long long)arg1;
- (unsigned long long)finderCardType;
- (void)setFinderCardType:(unsigned long long)arg1;
- (int)finderReportScene;
- (void)setFinderReportScene:(int)arg1;
- (unsigned int)finderEnterType;
- (void)setFinderEnterType:(unsigned int)arg1;
- (id /* block */)finderDidOpenBlock;
- (void)setFinderDidOpenBlock:(id /* block */)arg1;
- (int)bizAddContactScene;
- (void)setBizAddContactScene:(int)arg1;
- (id /* block */)bizDidOpenBlock;
- (void)setBizDidOpenBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

