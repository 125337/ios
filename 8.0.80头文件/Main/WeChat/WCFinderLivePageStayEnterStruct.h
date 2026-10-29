@interface WCFinderLivePageStayEnterStruct : NSObject
{
    unsigned long long _clientTime; // +0x8
    NSString * _pageId; // +0x10
    NSString * _tabId; // +0x18
    NSString * _subTabId; // +0x20
    NSString * _sessionID; // +0x28
    NSString * _contextId; // +0x30
    NSString * _clickTabContextId; // +0x38
    NSString * _clickSubTabContextId; // +0x40
    NSString * _pageUdfKv; // +0x48
    NSString * _refPageId; // +0x50
    NSString * _commentScene; // +0x58
    NSMutableDictionary * _switchExtraDic; // +0x60
}
- (id)toReport;
- (unsigned long long)clientTime;
- (void)setClientTime:(unsigned long long)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (id)tabId;
- (void)setTabId:(id)arg1;
- (id)subTabId;
- (void)setSubTabId:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id)contextId;
- (void)setContextId:(id)arg1;
- (id)clickTabContextId;
- (void)setClickTabContextId:(id)arg1;
- (id)clickSubTabContextId;
- (void)setClickSubTabContextId:(id)arg1;
- (id)pageUdfKv;
- (void)setPageUdfKv:(id)arg1;
- (id)refPageId;
- (void)setRefPageId:(id)arg1;
- (id)commentScene;
- (void)setCommentScene:(id)arg1;
- (id)switchExtraDic;
- (void)setSwitchExtraDic:(id)arg1;
- (void).cxx_destruct;
@end
