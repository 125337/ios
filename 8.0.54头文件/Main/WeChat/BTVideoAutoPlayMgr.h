@interface BTVideoAutoPlayMgr : MMUserService <MMServiceProtocol>
{
    MPLandingPageCgiHandler * _m_brandCgiHandler; // +0x8
    WCEliminatedSlotMMKV * _videoDataSlotMMKV; // +0x10
}
+ (id)genVideoAutoPlayInfoWebviewExtraInfo:(id)arg1;
+ (unsigned long long)calcStatusFromAction:(unsigned long long)arg1 andCurStatus:(unsigned long long)arg2;
+ (long long)getAutoPlayerViewContentModeByVideoInfo:(unsigned int)arg1 videoHeight:(unsigned int)arg2 viewWidth:(double)arg3 viewHeight:(double)arg4;
- (void)setVideoData:(id)arg1;
- (double)getVideoInitialTimeByVid:(id)arg1;
- (void)requestBrandTLItemVideoInfo:(id)arg1 mpUrl:(id)arg2 oldVideoUrl:(id)arg3 videoExpiredTime:(unsigned long long)arg4 handler:(id /* block */)arg5;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initData;
- (void)clearAllData;
- (id)m_brandCgiHandler;
- (void)setM_brandCgiHandler:(id)arg1;
- (id)videoDataSlotMMKV;
- (void)setVideoDataSlotMMKV:(id)arg1;
- (void).cxx_destruct;
@end

