@interface WCTimelineEnhanceDraftController : NSObject
{
    NSString * _userName; // +0x8
    unsigned long long _draftType; // +0x10
    NSString * _draftID; // +0x18
}
+ (void)copySightDraftToSingletonPath:(id)arg1;
+ (void)recoveSightDraftFileIfNeeded:(id)arg1;
+ (void)clearTempSightDraftFile;
+ (id)draftIndexWithDraftType:(unsigned long long)arg1 draftId:(id)arg2;
+ (id)keyWithDraftIndex:(id)arg1 draftDetailType:(unsigned long long)arg2 curUsrName:(id)arg3;
+ (id)getReferenceImageFiles;
- (id)initWithDraftType:(unsigned long long)arg1 draftID:(id)arg2;
- (BOOL)hasDraft;
- (BOOL)isDraftExpired;
- (BOOL)createDraft;
- (BOOL)cleanCurrentDraftSynchronizeWithConcernData:(BOOL)arg1;
- (BOOL)setPostCycleId:(id)arg1;
- (id)postCycleId;
- (BOOL)setDraftText:(id)arg1;
- (id)draftText;
- (BOOL)setDraftPasteTextLength:(unsigned long long)arg1;
- (unsigned long long)draftPasteTextLength;
- (BOOL)setDraftImages:(id)arg1 needCopyImageToFile:(BOOL)arg2;
- (id)draftImages;
- (BOOL)setDraftSight:(id)arg1;
- (id)draftSight;
- (BOOL)setDraftPoiInfo:(id)arg1;
- (id)draftPoiInfo;
- (BOOL)setDraftLikeEasterEggInfo:(id)arg1;
- (id)draftLikeEasterEggInfo;
- (BOOL)setDraftDynamicTagEnabled:(BOOL)arg1;
- (BOOL)draftDynamicTagEnabled;
- (BOOL)setDraftTempSelectContactsForDynamicTag:(id)arg1;
- (id)draftTempSelectContactsForDynamicTag;
- (BOOL)setDraftInteractContactsForPrivacy:(id)arg1;
- (id)draftInteractContactsForPrivacy;
- (BOOL)setDraftExcludeContactsForPrivacy:(id)arg1;
- (id)draftExcludeContactsForPrivacy;
- (BOOL)setDraftExcludeLabelsNameForPrivacy:(id)arg1;
- (id)draftExcludeLabelsNameForPrivacy;
- (BOOL)setDraftTempSelectContacts:(id)arg1;
- (id)draftTempSelectContacts;
- (BOOL)setDraftLastPrivacy:(long long)arg1;
- (long long)draftLastPrivacy;
- (BOOL)setDraftIsFromPrivatePost:(BOOL)arg1;
- (BOOL)draftIsFromPrivatePost;
- (BOOL)setDraftLastPostVisibleLabelName:(id)arg1;
- (id)draftLastPostVisibleLabelName;
- (BOOL)setDraftLastPostInVisibleLabelName:(id)arg1;
- (id)draftLastPostInVisibleLabelName;
- (BOOL)setDraftRemindContactUsernames:(id)arg1;
- (id)draftRemindContactUsernames;
- (BOOL)setExtBean:(id)arg1;
- (id)extBean;
- (id)keyWithType:(unsigned long long)arg1;
- (id)keyWithDraftIndex:(id)arg1 draftDetailType:(unsigned long long)arg2;
- (id)createDate;
- (BOOL)isDraftExpired:(id)arg1;
- (void)cleanExpiredDraft;
- (void)cleanAllForwardDraft;
- (BOOL)cleanDraftWithDraftIdex:(id)arg1 SynchronizeWithConcernData:(BOOL)arg2;
- (BOOL)copyImageAtAlbumToFile:(id)arg1;
- (id)userName;
- (unsigned long long)draftType;
- (id)draftID;
- (void).cxx_destruct;
@end
