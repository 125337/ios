@interface WCFinderLiveKtvModSongListCGI : WCFinderLiveBaseCgi
{
    BOOL _onlyMysong; // +0x8
    unsigned int _scene; // +0xc
    unsigned int _status; // +0x10
    unsigned int _modType; // +0x14
    NSData * _liveCookies; // +0x18
    NSString * _songId; // +0x20
    NSString * _uniqueId; // +0x28
    NSString * _targetUserId; // +0x30
    FinderLiveKtvSongReportInfo * _addSongReportInfo; // +0x38
    id /* block */ _successBlock; // +0x40
    id /* block */ _failureBlock; // +0x48
}
+ (id)generateActionSync:(unsigned int)arg1 liveTaskId:(id)arg2 liveCookies:(id)arg3 scene:(unsigned int)arg4 targetUser:(id)arg5 successBlock:(id /* block */)arg6 failureBlock:(id /* block */)arg7;
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 scene:(unsigned int)arg3 modType:(unsigned int)arg4 songId:(id)arg5 uniqueId:(id)arg6 addSongReportInfo:(id)arg7 successBlock:(id /* block */)arg8 failureBlock:(id /* block */)arg9;
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 scene:(unsigned int)arg3 modType:(unsigned int)arg4 targetUser:(id)arg5 successBlock:(id /* block */)arg6 failureBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)updatePendingSongsAndVersion:(id)arg1;
- (void)updateExtraInfos:(id)arg1;
- (id)transferToSongItemsFromSongInfos:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)modType;
- (void)setModType:(unsigned int)arg1;
- (BOOL)onlyMysong;
- (void)setOnlyMysong:(BOOL)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)songId;
- (void)setSongId:(id)arg1;
- (id)uniqueId;
- (void)setUniqueId:(id)arg1;
- (id)targetUserId;
- (void)setTargetUserId:(id)arg1;
- (id)addSongReportInfo;
- (void)setAddSongReportInfo:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

