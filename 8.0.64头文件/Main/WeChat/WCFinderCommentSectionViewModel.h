@interface WCFinderCommentSectionViewModel : NSObject
{
    BOOL _showSubCommentList; // +0x8
    BOOL _upContinueFlag; // +0x9
    BOOL _downContinueFlag; // +0xa
    BOOL _shouldHideMoreCommentCount; // +0xb
    BOOL _onlyShowServiceSubComment; // +0xc
    BOOL _hasExposed; // +0xd
    BOOL _needReCalCellH; // +0xe
    long long _commentID; // +0x10
    NSString * _clientID; // +0x18
    unsigned long long _expandCommentCount; // +0x20
    NSData * _lastBuffer; // +0x28
    unsigned long long _sectionViewType; // +0x30
    NSString * _sectionDescriptionStr; // +0x38
    double _commentVideoBeginPos; // +0x40
    unsigned long long _cgiCostTime; // +0x48
    unsigned long long _downloadStartTime; // +0x50
    unsigned long long _downloadFinishTime; // +0x58
    NSError * _downloadError; // +0x60
    WCFinderComment * _rootComment; // +0x68
    NSMutableSet * _subCommentIDSet; // +0x70
}
+ (id)commentSectionViewModelWithRootComment:(id)arg1;
- (long long)commentID;
- (id)clientID;
- (unsigned long long)expandCommentCount;
- (id)subCommentIDSet;
- (unsigned long long)subCommentCount;
- (id)getFinderCommentWithIndex:(unsigned long long)arg1;
- (id)getFinderCommentWithCommentID:(unsigned long long)arg1;
- (id)getRootComment;
- (unsigned long long)getCommentCellTypeWithIndex:(unsigned long long)arg1;
- (long long)getMoreCommentTypeIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfComment;
- (BOOL)removeSubCommentWithCommentID:(long long)arg1;
- (void)replaceRootCommentByPostSuccessful:(id)arg1;
- (double)extraHeightWithIndex:(unsigned long long)arg1;
- (id)addSubComments:(id)arg1 direction:(unsigned long long)arg2 continueFlag:(BOOL)arg3;
- (unsigned long long)getLastSubCommentIndex;
- (void)addPostComment:(id)arg1;
- (BOOL)postCommentSuccessful:(id)arg1;
- (BOOL)postCommentFailure:(id)arg1;
- (void)changeCommentBlackListFlagComment:(id)arg1 isInBlackList:(BOOL)arg2;
- (long long)getIndexWithCommentID:(unsigned long long)arg1;
- (unsigned long long)levelTwoCommentCount;
- (void)setCommentID:(long long)arg1;
- (void)setClientID:(id)arg1;
- (BOOL)showSubCommentList;
- (void)setShowSubCommentList:(BOOL)arg1;
- (void)setExpandCommentCount:(unsigned long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)upContinueFlag;
- (void)setUpContinueFlag:(BOOL)arg1;
- (BOOL)downContinueFlag;
- (void)setDownContinueFlag:(BOOL)arg1;
- (unsigned long long)sectionViewType;
- (void)setSectionViewType:(unsigned long long)arg1;
- (id)sectionDescriptionStr;
- (void)setSectionDescriptionStr:(id)arg1;
- (BOOL)shouldHideMoreCommentCount;
- (void)setShouldHideMoreCommentCount:(BOOL)arg1;
- (BOOL)onlyShowServiceSubComment;
- (void)setOnlyShowServiceSubComment:(BOOL)arg1;
- (double)commentVideoBeginPos;
- (void)setCommentVideoBeginPos:(double)arg1;
- (unsigned long long)cgiCostTime;
- (void)setCgiCostTime:(unsigned long long)arg1;
- (unsigned long long)downloadStartTime;
- (void)setDownloadStartTime:(unsigned long long)arg1;
- (unsigned long long)downloadFinishTime;
- (void)setDownloadFinishTime:(unsigned long long)arg1;
- (id)downloadError;
- (void)setDownloadError:(id)arg1;
- (BOOL)hasExposed;
- (void)setHasExposed:(BOOL)arg1;
- (BOOL)needReCalCellH;
- (void)setNeedReCalCellH:(BOOL)arg1;
- (id)rootComment;
- (void)setRootComment:(id)arg1;
- (void)setSubCommentIDSet:(id)arg1;
- (void).cxx_destruct;
@end
