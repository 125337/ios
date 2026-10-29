@interface WCFinderFeedLikeMilestoneInfo : NSObject
{
    NSString * _feedId; // +0x8
    unsigned long long _milestoneType; // +0x10
    NSString * _selfAvatarURLStr; // +0x18
    NSString * _authorAvatarURLStr; // +0x20
    NSString * _authorNickname; // +0x28
    NSString * _authorFinderUsername; // +0x30
    double _generateTimeInSecond; // +0x38
    NSString * _likeDateStr; // +0x40
    NSString * _authIconURLStr; // +0x48
    unsigned long long _milestoneCount; // +0x50
}
+ (id)writePosterInfoToJPEGData:(id)arg1 posterInfo:(id)arg2;
+ (id)getPosterInfoFromExifJSONStr:(id)arg1;
+ (id)createPosterInfoWithMilestoneType:(unsigned long long)arg1 milestoneCount:(unsigned long long)arg2;
- (id)initWithFeedId:(id)arg1 type:(unsigned long long)arg2 author:(id)arg3 milestoneCount:(unsigned long long)arg4;
- (id)commonIconName;
- (id)selfLikeAuthorStr;
- (id)likeCountStr;
- (id)supplementalText;
- (id)goldenLikeTipsStr;
- (id)toInteractionMilestoneInfo;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (unsigned long long)milestoneType;
- (void)setMilestoneType:(unsigned long long)arg1;
- (id)selfAvatarURLStr;
- (void)setSelfAvatarURLStr:(id)arg1;
- (id)authorAvatarURLStr;
- (void)setAuthorAvatarURLStr:(id)arg1;
- (id)authorNickname;
- (void)setAuthorNickname:(id)arg1;
- (id)authorFinderUsername;
- (void)setAuthorFinderUsername:(id)arg1;
- (double)generateTimeInSecond;
- (void)setGenerateTimeInSecond:(double)arg1;
- (id)likeDateStr;
- (void)setLikeDateStr:(id)arg1;
- (id)authIconURLStr;
- (void)setAuthIconURLStr:(id)arg1;
- (unsigned long long)milestoneCount;
- (void)setMilestoneCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
