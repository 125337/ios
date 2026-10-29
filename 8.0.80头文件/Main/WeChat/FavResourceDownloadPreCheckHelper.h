@interface FavResourceDownloadPreCheckHelper : NSObject <PBMessageObserverDelegate>
{
    id /* block */ m_completion; // +0x8
    unsigned int m_eventID; // +0x10
    int m_dataType; // +0x14
}
+ (id)buildDownloadRequestPayloadWithCtxData:(id)arg1 dataType:(int)arg2;
+ (BOOL)isOverseaIdc;
- (void)dealloc;
- (void)prepareCtxForFileId:(id)arg1 dataType:(int)arg2 completion:(id /* block */)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)finishWithCtxData:(id)arg1;
- (void).cxx_destruct;
@end
