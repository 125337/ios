@interface WAReportKFSessionActionItem : WAReportBaseItem
{
    int _unreadcount; // +0x8
    int _unreadappcount; // +0xc
    unsigned int _clicktime; // +0x10
    NSString * _sceneID; // +0x18
    NSString * _lastpushappid; // +0x20
    NSString * _lastpushmsg; // +0x28
}
- (id)reportString;
- (id)sceneID;
- (void)setSceneID:(id)arg1;
- (int)unreadcount;
- (void)setUnreadcount:(int)arg1;
- (int)unreadappcount;
- (void)setUnreadappcount:(int)arg1;
- (id)lastpushappid;
- (void)setLastpushappid:(id)arg1;
- (id)lastpushmsg;
- (void)setLastpushmsg:(id)arg1;
- (unsigned int)clicktime;
- (void)setClicktime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

