@interface MMFinderLiveLikeMsgInfo : NSObject
{
    unsigned int _startMsgId; // +0x8
    unsigned int _endMsgId; // +0xc
    unsigned int _likeUvNum; // +0x10
    NSMutableArray * _userInfoList; // +0x18
    FinderLiveAppMsg * _rootAppMsg; // +0x20
}
+ (id)createLiveLikeMsgInfo:(id)arg1;
+ (BOOL)checkLikeLiveMsgInfoPBValid:(id)arg1;
- (id)description;
- (BOOL)isMsgIdRangeEqual:(id)arg1;
- (unsigned int)startMsgId;
- (void)setStartMsgId:(unsigned int)arg1;
- (unsigned int)endMsgId;
- (void)setEndMsgId:(unsigned int)arg1;
- (id)userInfoList;
- (void)setUserInfoList:(id)arg1;
- (unsigned int)likeUvNum;
- (void)setLikeUvNum:(unsigned int)arg1;
- (id)rootAppMsg;
- (void)setRootAppMsg:(id)arg1;
- (void).cxx_destruct;
@end

