@interface CommentExitInfo : NSObject
{
    unsigned int _userCommentCnt; // +0x8
    unsigned int _newQuestionCnt; // +0xc
    unsigned int _avatarAnswerCnt; // +0x10
    unsigned int _onlineUserCnt; // +0x14
    unsigned int _dailyChatPv; // +0x18
    unsigned int _ifAnswerQuestion; // +0x1c
    unsigned int _avatarSelfAnswerCnt; // +0x20
}
- (unsigned int)userCommentCnt;
- (void)setUserCommentCnt:(unsigned int)arg1;
- (unsigned int)newQuestionCnt;
- (void)setNewQuestionCnt:(unsigned int)arg1;
- (unsigned int)avatarAnswerCnt;
- (void)setAvatarAnswerCnt:(unsigned int)arg1;
- (unsigned int)onlineUserCnt;
- (void)setOnlineUserCnt:(unsigned int)arg1;
- (unsigned int)dailyChatPv;
- (void)setDailyChatPv:(unsigned int)arg1;
- (unsigned int)ifAnswerQuestion;
- (void)setIfAnswerQuestion:(unsigned int)arg1;
- (unsigned int)avatarSelfAnswerCnt;
- (void)setAvatarSelfAnswerCnt:(unsigned int)arg1;
@end
