@interface WebviewJSEventHandler_streamingVideoPlay : WebviewJSEventHandlerBase <WCNetworkMediaPlayerDelegate, MMWebViewDelegate>
{
    MMUIWindow * m_fullScreenWindow; // +0x8
    WCNetworkMediaPlayer * m_player; // +0x10
    WCNetworkMediaStreamVideoInfo * m_streamVideoInfo; // +0x18
    BOOL m_needReportData; // +0x20
    BOOL m_needHiddenMoreMenu; // +0x21
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)jumpToDetail:(id)arg1;
- (void)exitPlayWindow;
- (void)notifyWebViewReturn;
- (void)webViewReturn:(id)arg1;
- (id)getStatExtStr;
- (id)getPlayLogWithPlayType:(unsigned int)arg1;
- (id)getClickLogWithClickType:(unsigned int)arg1;
- (id)getSSIDAndBSSID;
- (void)logVideoPlay:(unsigned int)arg1;
- (void)logVideoClick:(unsigned int)arg1;
- (void)onClosePlayer;
- (void)onStartPlayer;
- (void)onPausePlayer;
- (void)onEndPlayer;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onClickFavVideoMenu;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onCancelShareVideoToFriend;
- (void)onShareVideoToTimeline:(BOOL)arg1;
- (BOOL)needHiddenMoreMenu;
- (void).cxx_destruct;
@end

