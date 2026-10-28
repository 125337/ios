@interface FavVideoCompressMgr : MMUserService <MMServiceProtocol>
{
    NSMutableArray * m_compressingQueue; // +0x8
    BOOL m_compressing; // +0x10
    int m_retryTime; // +0x14
}
- (id)init;
- (BOOL)isContainCompressingVideo:(id)arg1;
- (BOOL)tryCompressVideo:(id)arg1 IsPriority:(BOOL)arg2;
- (void)startCompressVideo;
- (id /* block */)getCompressCallbackBlock;
- (void).cxx_destruct;
@end
