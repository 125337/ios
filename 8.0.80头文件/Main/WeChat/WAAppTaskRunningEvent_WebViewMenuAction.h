@interface WAAppTaskRunningEvent_WebViewMenuAction : WAAppTaskRunningEvent_WebViewActionBase
{
    BOOL _shareMenuCanBeOperated; // +0x8
    unsigned long long _menuAction; // +0x10
}
- (unsigned long long)eventType;
- (id)description;
- (unsigned long long)menuAction;
- (void)setMenuAction:(unsigned long long)arg1;
- (BOOL)shareMenuCanBeOperated;
- (void)setShareMenuCanBeOperated:(BOOL)arg1;
@end
