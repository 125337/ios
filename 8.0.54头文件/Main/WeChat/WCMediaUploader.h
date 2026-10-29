@interface WCMediaUploader : WCUploader <ICdnComMgrExt>
{
    int currentPos; // +0x14
    long long uploadResult; // +0x18
    long long uploadErrType; // +0x20
    WCUploadMedia * m_media; // +0x28
    id <WCMediaUploaderDelegate> m_delegate; // +0x30
    CdnSnsTaskInfo * m_oCdnSnsTaskInfo; // +0x38
    NSString * m_clientMediaID; // +0x40
    BOOL m_useC2C; // +0x48
    BOOL m_useWebp; // +0x49
    BOOL m_useVCodec; // +0x4a
    BOOL m_useWxpc; // +0x4b
    unsigned int sightEventID; // +0x4c
    NSString * m_appID; // +0x50
    int m_objectType; // +0x58
    BOOL _shouldOptimizeThumb; // +0x5c
}
- (id)init;
- (void)dealloc;
- (void)setMedia:(id)arg1;
- (BOOL)startRequest;
- (BOOL)canInterrupt;
- (void)cancelWithBlock:(id /* block */)arg1;
- (id)generateCustomRequestHeaders;
- (BOOL)isOverRoladRetCode:(int)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)tryReportErrRetCode:(int)arg1 type:(int)arg2;
- (void)tryNextRequest;
- (void)setFinished;
- (BOOL)onSetRequest:(id)arg1;
- (void)onRequest:(id)arg1 Event:(unsigned int)arg2;
- (void)onResponse:(id)arg1 Event:(unsigned int)arg2;
- (id)m_media;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_appID;
- (void)setM_appID:(id)arg1;
- (int)m_objectType;
- (void)setM_objectType:(int)arg1;
- (BOOL)shouldOptimizeThumb;
- (void)setShouldOptimizeThumb:(BOOL)arg1;
- (void).cxx_destruct;
@end

