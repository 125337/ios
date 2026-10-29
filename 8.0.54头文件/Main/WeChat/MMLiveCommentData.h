@interface MMLiveCommentData : NSObject <NSCopying>
{
    BOOL _selfHasCommitComment; // +0x8
    BOOL _hasLoadedLocalData; // +0x9
    BOOL _hasLoadedCachedData; // +0xa
    BOOL _hasShowProductQuesRecvNotify; // +0xb
    BOOL _hasCachedAfterExitLive; // +0xc
    BOOL _isStartScheduleSynchronizeData; // +0xd
    BOOL _lastHasHistoryMsg; // +0xe
    BOOL _hasLoadedData; // +0xf
    BOOL _isCustomAppendData; // +0x10
    unsigned int _cacheExpireTime; // +0x14
    MMLiveTaskId * _taskId; // +0x18
    FinderLiveBoxId * _boxId; // +0x20
    NSArray * _commentArray; // +0x28
    NSMutableArray * _tempCommentArray; // +0x30
    double _currCommentSeq; // +0x38
    id /* block */ _synchronizeBlock; // +0x40
    NSMutableArray * _selfUnCompleteCommentArr; // +0x48
    NSMutableDictionary * _commentTagDict; // +0x50
    NSMutableDictionary * _historyCommentTagDict; // +0x58
    MMLiveCommentDataDictCache * _commentDataCache; // +0x60
    MMLiveCommentVMState * _commentVMState; // +0x68
}
+ (BOOL)updateSelfCommentStatusToDB:(unsigned int)arg1 msgLocalID:(unsigned int)arg2 boxId:(id)arg3;
- (id)init;
- (void)createCommentDataCache;
- (void)configDefaultAttributes;
- (id)appendComments:(id)arg1 filterSelfCommit:(BOOL)arg2;
- (id)insertComments:(id)arg1 atIndexes:(id)arg2 filterSelfCommit:(BOOL)arg3;
- (id)prependComments:(id)arg1 filterSelfCommit:(BOOL)arg2;
- (void)appendSelfUnCompleteComments:(id)arg1;
- (BOOL)completeSelfUnCompleteComment:(id)arg1;
- (BOOL)completeSelfUnCompleteCommentWithSeq:(unsigned long long)arg1 localClientMsgId:(id)arg2;
- (void)updateSelfCommentInfoIfNeed:(id)arg1;
- (BOOL)updateSelfCommentStatus:(unsigned int)arg1 localClientMsgId:(id)arg2 seq:(unsigned long long)arg3;
- (BOOL)completeUnCompletedComment:(id)arg1;
- (id)getCommentArrayFilterSelfCommit:(id)arg1;
- (id)getCommentArrayFilterRepeatCommit:(id)arg1;
- (void)handleCommentsSeq:(id)arg1;
- (void)handleCommentSeq:(id)arg1 atIndexes:(id)arg2;
- (void)updateCurrCommentSeqIfNeed:(id)arg1;
- (unsigned long long)getCommentArrRemainCntInLimit:(unsigned long long)arg1;
- (void)checkCommentArrayOverLimit:(unsigned long long)arg1;
- (void)checkTempCommentCacheOverLimit:(unsigned long long)arg1;
- (BOOL)isContainComment:(id)arg1;
- (void)updateSelfHasCommitComment:(BOOL)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)nextIndexForAppend:(id)arg1;
- (long long)lastIndexForInsert:(id)arg1;
- (long long)indexForCommentItem:(id)arg1;
- (id)lastCommentItem;
- (void)notifyDataLoaded;
- (void)notifyLocalDataLoaded;
- (unsigned long long)getRemainCommentCount;
- (id)requestNextCommentItemListWithCount:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2;
- (id)manualRequestCommentsFromCache:(unsigned long long)arg1;
- (unsigned long long)manualSynchronizeCommentsFromTempCache:(unsigned long long)arg1;
- (id)deleteComment:(double)arg1;
- (void)clearAllComments;
- (double)maxCommentSeq;
- (void)clearTempCache;
- (void)appendCommentsToTempCache:(id)arg1;
- (void)synchronizeBackToTempCache:(id)arg1;
- (unsigned long long)appendCommentsFromTempCacheToDisplay:(unsigned long long)arg1 filterSelf:(BOOL)arg2;
- (unsigned long long)synchronizeBackToTempCache:(unsigned long long)arg1 inRange:(_NSRange)arg2;
- (void)tagHistoryComments:(id)arg1;
- (BOOL)isHistoryComment:(id)arg1;
- (void)checkAndUnTagHistoryComments:(id)arg1;
- (BOOL)hasHistoryComments;
- (void)synchronizeCommentFromCacheImmediately;
- (void)startScheduleSynchronizeCommentFromCache;
- (void)stopScheduleSynchronize;
- (void)synchronizeCommentFromCache:(id)arg1;
- (void)synchronizeAllCommentsFromCache;
- (id)selfUnCompleteCommentArr;
- (id)commentTagDict;
- (id)historyCommentTagDict;
- (id)tempCommentArray;
- (unsigned int)maxRefreshCommentCountOnce;
- (unsigned int)maxCustomRefreshCommentCountOnce;
- (double)refreshCommentInterval;
- (void)logForRemoveCommentArr:(id)arg1;
- (void)updateCommentWithAppMsgItem:(id)arg1;
- (id)getChatRoomNotifyItem;
- (id)getCurrentAppendParam;
- (id)commentVMState;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)boxId;
- (void)setBoxId:(id)arg1;
- (id)commentArray;
- (void)setCommentArray:(id)arg1;
- (void)setTempCommentArray:(id)arg1;
- (double)currCommentSeq;
- (void)setCurrCommentSeq:(double)arg1;
- (BOOL)selfHasCommitComment;
- (void)setSelfHasCommitComment:(BOOL)arg1;
- (id /* block */)synchronizeBlock;
- (void)setSynchronizeBlock:(id /* block */)arg1;
- (BOOL)hasLoadedLocalData;
- (void)setHasLoadedLocalData:(BOOL)arg1;
- (BOOL)hasLoadedCachedData;
- (void)setHasLoadedCachedData:(BOOL)arg1;
- (BOOL)hasShowProductQuesRecvNotify;
- (void)setHasShowProductQuesRecvNotify:(BOOL)arg1;
- (BOOL)hasCachedAfterExitLive;
- (void)setHasCachedAfterExitLive:(BOOL)arg1;
- (unsigned int)cacheExpireTime;
- (void)setCacheExpireTime:(unsigned int)arg1;
- (void)setSelfUnCompleteCommentArr:(id)arg1;
- (void)setCommentTagDict:(id)arg1;
- (void)setHistoryCommentTagDict:(id)arg1;
- (BOOL)isStartScheduleSynchronizeData;
- (void)setIsStartScheduleSynchronizeData:(BOOL)arg1;
- (BOOL)lastHasHistoryMsg;
- (void)setLastHasHistoryMsg:(BOOL)arg1;
- (BOOL)hasLoadedData;
- (void)setHasLoadedData:(BOOL)arg1;
- (BOOL)isCustomAppendData;
- (void)setIsCustomAppendData:(BOOL)arg1;
- (id)commentDataCache;
- (void)setCommentDataCache:(id)arg1;
- (void)setCommentVMState:(id)arg1;
- (void).cxx_destruct;
@end

