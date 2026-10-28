@interface StatusAffManager : MMUserService <MMServiceProtocol>
{
    StatusLogicCommentManager * _affStatusLogicCommentManager; // +0x8
    StatusXmlParseManager * _statusXmlParseManager; // +0x10
    StatusCgiManager * _cgiManager; // +0x18
    StatusStorageManager * _manager; // +0x20
}
- (id)parseStatusModelXml:(id)arg1;
- (id)parseNewModifyStatusXml:(id)arg1;
- (id)parseStatusCgiData:(id)arg1 userName:(id)arg2;
- (BOOL)isLikeTextState:(id)arg1;
- (BOOL)performSelfLike:(id)arg1 isLike:(BOOL)arg2;
- (BOOL)insertLike:(id)arg1;
- (BOOL)deleteLikeByCommentId:(id)arg1 sequence:(unsigned long long)arg2;
- (id)getLikeInfoByStatusId:(id)arg1 limit:(unsigned int)arg2;
- (BOOL)insertComment:(id)arg1;
- (BOOL)removeComment:(id)arg1 sequence:(unsigned long long)arg2;
- (BOOL)deleteMessage:(id)arg1;
- (BOOL)markAllMessageRead;
- (BOOL)clearAllMessage;
- (unsigned int)getCommentCount:(id)arg1;
- (id)getAllMessage:(BOOL)arg1;
- (id)getMessageByCondition:(unsigned int)arg1 isUnread:(BOOL)arg2 maxCreateTime:(unsigned long long)arg3;
- (BOOL)markAllMessageNotify;
- (unsigned int)getToNotifyCount;
- (void)getCustomIconRecommendData:(id)arg1 callback:(id /* block */)arg2;
- (void)initAffManager;
- (void)onServiceInit;
- (id)createStatusIconInitInfo;
- (void)constructStatusInfoCache;
- (id)getStatusInfoListCache;
- (id)insertOrReplaceInfo:(id)arg1;
- (id)selectStatusInfoWithUsername:(id)arg1 count:(int)arg2 offset:(int)arg3 timeMsLimit:(long long)arg4;
- (id)selectStatusInfoWithStatusId:(id)arg1;
- (id)deleteStatusInfoWithId:(id)arg1 sequence:(unsigned int)arg2;
- (id)deleteStatusInfoWithUsername:(id)arg1 sequence:(unsigned int)arg2;
- (id)updateStatusInteractData:(id)arg1 data:(id)arg2;
- (void)cleanExpireDB:(long long)arg1 deleteFlag:(BOOL)arg2 keepSelf:(BOOL)arg3;
- (void)oncleanExpireDBComplete:(unsigned int)arg1 rsp:(id)arg2;
- (void)ontestComplete:(unsigned int)arg1 err:(int)arg2;
- (BOOL)setMMKV:(id)arg1 value:(int)arg2;
- (int)getMMKV:(id)arg1 defValue:(int)arg2;
- (id)affStatusLogicCommentManager;
- (void)setAffStatusLogicCommentManager:(id)arg1;
- (id)statusXmlParseManager;
- (void)setStatusXmlParseManager:(id)arg1;
- (id)cgiManager;
- (void)setCgiManager:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (void).cxx_destruct;
@end
