@interface MVStat22259 : NSObject
{
    NSMutableArray * _commonParams; // +0x8
    NSMutableArray * _params; // +0x10
}
+ (id)infoWithSessionId:(id)arg1 editSessionId:(id)arg2 musicInfo:(id)arg3 songId:(id)arg4 partNum:(int)arg5 createType:(unsigned long long)arg6;
- (id)init;
- (id)logExt;
- (void)reset;
- (void)commit;
- (id)getSessionId;
- (void)enterEditView:(unsigned long long)arg1;
- (void)selectMaterial:(id)arg1 authorId:(id)arg2 pos:(int)arg3 partId:(int)arg4 from:(unsigned long long)arg5 isNullBefore:(BOOL)arg6 reqId:(id)arg7 pageType:(unsigned long long)arg8;
- (void)searchMaterial:(id)arg1;
- (void)doneEditMaterial:(id)arg1 authorId:(id)arg2 pos:(int)arg3 partId:(int)arg4 from:(unsigned long long)arg5 isNullBefore:(BOOL)arg6 isCut:(BOOL)arg7 reqId:(id)arg8;
- (void)cancelEditMaterial:(id)arg1 authorId:(id)arg2 pos:(int)arg3 partId:(int)arg4 from:(unsigned long long)arg5 isNullBefore:(BOOL)arg6 isCut:(BOOL)arg7 reqId:(id)arg8;
- (void)changeMode:(unsigned long long)arg1;
- (void)removeMaterial:(id)arg1 authorId:(id)arg2 pageType:(unsigned long long)arg3;
- (void)doneEditToPreview:(id)arg1 imgCount:(unsigned long long)arg2 videoCount:(unsigned long long)arg3;
- (void)donePreview:(unsigned long long)arg1;
- (void)post:(BOOL)arg1;
- (void)clickPost;
- (void)cancelPost:(id)arg1;
- (void)saveDraft:(BOOL)arg1 mvClipFillStatus:(id)arg2;
- (void)postSucceed:(id)arg1;
- (void)appearMaterial:(id)arg1 authorId:(id)arg2 pos:(int)arg3 reqId:(id)arg4 feedFrom:(unsigned long long)arg5;
- (void)changeTransition:(unsigned long long)arg1;
- (void)clickReplayBtn;
- (void)zoomTimeScrollView;
- (void)sortMaterial;
- (void)setAction:(unsigned long long)arg1;
- (void)setIsSave:(BOOL)arg1;
- (void)updateMyFinderId;
- (void)setMvObjectId:(id)arg1;
- (void)setIsFinderNew:(BOOL)arg1;
- (void)setMvClipFillStatus:(id)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedUin:(id)arg1;
- (void)setKeyword:(id)arg1;
- (void)setExpId:(id)arg1;
- (void)setMaterialPos:(int)arg1;
- (void)setThisPart:(int)arg1;
- (void)setFeedFrom:(unsigned long long)arg1;
- (void)setIsEdit:(BOOL)arg1;
- (void)setIsNullBeforeSelect:(BOOL)arg1;
- (void)setEnterScene:(unsigned long long)arg1;
- (void)setReqId:(id)arg1;
- (void)setCreateType:(unsigned long long)arg1;
- (void)setMaterialCount:(unsigned long long)arg1 videoCount:(unsigned long long)arg2;
- (void)setTransition:(unsigned long long)arg1;
- (void)setHideMaterialCount:(unsigned long long)arg1;
- (void)setPageType:(unsigned long long)arg1;
- (id)commonParams;
- (void)setCommonParams:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
