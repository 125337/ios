@interface GameChatVcOpenConfig : NSObject
{
    BOOL _isInTab; // +0x8
    unsigned int _sourceScene; // +0xc
    GCOpenReportParam * _reportParam; // +0x10
    double _tabbarHeight; // +0x18
    unsigned long long _selectTab; // +0x20
    NSString * _focusMsgId; // +0x28
}
+ (id)gameChatVcOpenConfigWithIsInTab:(BOOL)arg1 tabbarHeight:(double)arg2 reportParam:(id)arg3 sourceScene:(unsigned int)arg4;
- (id)reportParam;
- (void)setReportParam:(id)arg1;
- (BOOL)isInTab;
- (void)setIsInTab:(BOOL)arg1;
- (unsigned int)sourceScene;
- (void)setSourceScene:(unsigned int)arg1;
- (double)tabbarHeight;
- (void)setTabbarHeight:(double)arg1;
- (unsigned long long)selectTab;
- (void)setSelectTab:(unsigned long long)arg1;
- (id)focusMsgId;
- (void)setFocusMsgId:(id)arg1;
- (void).cxx_destruct;
@end
