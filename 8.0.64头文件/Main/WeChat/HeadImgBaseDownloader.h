@interface HeadImgBaseDownloader : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray * m_aryRequest; // +0x8
    NSMutableDictionary * m_mapLastGetTime; // +0x10
    BOOL m_bCommiting; // +0x18
    NSMutableArray * m_aryGetting; // +0x20
    unsigned int m_uiDownloadCount; // +0x28
    BOOL m_bGetting; // +0x2c
    id <HeadImgDownloaderDelegate> m_downloaderDelegate; // +0x30
}
- (id)init;
- (void)dealloc;
- (BOOL)addRequest:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (void)sendRequest;
- (void)createNetworkRequest:(id)arg1;
- (BOOL)cancelRequest:(id)arg1;
- (void)addToLastMap:(id)arg1;
- (void)removeUsrFromLastFailureList:(id)arg1;
- (void)commitRequestQueue;
- (BOOL)checkIfForbidden:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)downloaderDelegate;
- (void)setDownloaderDelegate:(id)arg1;
- (void).cxx_destruct;
@end
